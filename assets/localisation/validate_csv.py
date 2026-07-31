import os
import re
import sys

ZH_DIR = r"d:\WorkDIR\alice\assets\localisation\zh-CN"
EN_DIR = r"d:\WorkDIR\alice\assets\localisation\en-US"

FILES = [
    "1.1.csv", "1.2.csv", "1.3.csv", "1.4.csv",
    "alice.csv",
    "beta1.csv", "beta2.csv", "beta3.csv",
    "cn.csv", "dates.csv",
    "darkness.csv", "darkness_3_01.csv", "darkness_3_02.csv",
    "darkness_3_03.csv", "darkness_3_04.csv",
    "event_news.csv", "event_news_3_01.csv",
    "housedivided.csv", "housedivided2_1.csv", "housedivided2_2.csv", "housedivided2_3.csv",
    "map.csv", "mapmodes.csv", "messages.csv",
    "newspaper_text.csv", "newstext_3_01.csv", "newtext.csv",
    "other fixes.csv",
    "ruler_titles.csv", "settings.csv",
    "text.csv",
    "z-hotfix.csv",
]

CJK_PATTERN = re.compile(r'[\u4e00-\u9fff]')

DOLLAR_VAR = re.compile(r'\$([A-Za-z_][A-Za-z0-9_]*)\$')
COLOR_TAG = re.compile(r'\?([YRG])[^?]*\?!')
COLOR_MARKER = re.compile(r'\?([YRG])')
COLOR_END = re.compile(r'\?!')


def extract_dollar_vars(value):
    return set(DOLLAR_VAR.findall(value))


def extract_color_markers(value):
    markers = []
    for m in COLOR_MARKER.finditer(value):
        markers.append(m.group(1))
    return sorted(markers)


def extract_color_ends(value):
    return len(COLOR_END.findall(value))


def parse_file(filepath):
    lines = []
    with open(filepath, 'r', encoding='utf-8-sig') as f:
        for line in f:
            line = line.rstrip('\n').rstrip('\r')
            lines.append(line)
    return lines


def is_comment(line):
    return line.startswith('#')


def get_key(line):
    if ';' in line:
        return line[:line.index(';')]
    return line


def get_value(line):
    if ';' in line:
        return line[line.index(';') + 1:]
    return ''


def validate_file(filename):
    zh_path = os.path.join(ZH_DIR, filename)
    en_path = os.path.join(EN_DIR, filename)

    result = {
        'file': filename,
        'zh_lines': 0,
        'en_lines': 0,
        'line_count_match': True,
        'key_mismatches': [],
        'chinese_in_value': [],
        'format_issues': [],
        'comment_issues': [],
        'pass': True,
    }

    if not os.path.exists(zh_path):
        result['pass'] = False
        result['error'] = f"zh-CN source file not found"
        return result
    if not os.path.exists(en_path):
        result['pass'] = False
        result['error'] = f"en-US translation file not found"
        return result

    zh_lines = parse_file(zh_path)
    en_lines = parse_file(en_path)

    result['zh_lines'] = len(zh_lines)
    result['en_lines'] = len(en_lines)

    if len(zh_lines) != len(en_lines):
        result['line_count_match'] = False

    zh_data = {}
    zh_comments = []
    for i, line in enumerate(zh_lines):
        if line.strip() == '':
            continue
        if is_comment(line):
            zh_comments.append((i, line))
            continue
        key = get_key(line)
        zh_data[key] = (i, line)

    en_data = {}
    en_comments = []
    for i, line in enumerate(en_lines):
        if line.strip() == '':
            en_comments.append((i, line))
            continue
        if is_comment(line):
            en_comments.append((i, line))
            continue
        key = get_key(line)
        en_data[key] = (i, line)

    # Check: comment lines preserved
    en_comment_texts = [c[1] for c in en_comments]
    for zh_line_num, zh_line in zh_comments:
        if zh_line not in en_comment_texts:
            result['comment_issues'].append(
                f"zh-CN line {zh_line_num+1} comment missing in en-US: {zh_line[:60]}"
            )

    # Check: all keys match
    zh_keys = set(zh_data.keys())
    en_keys = set(en_data.keys())

    missing_in_en = zh_keys - en_keys
    extra_in_en = en_keys - zh_keys

    for k in sorted(missing_in_en):
        zh_line_num = zh_data[k][0] + 1
        result['key_mismatches'].append(
            f"key '{k}' in zh-CN (line {zh_line_num}) missing in en-US"
        )

    for k in sorted(extra_in_en):
        en_line_num = en_data[k][0] + 1
        result['key_mismatches'].append(
            f"key '{k}' in en-US (line {en_line_num}) missing in zh-CN"
        )

    # Check: Chinese chars in en-US values
    for key, (en_line_num, en_line) in en_data.items():
        value = get_value(en_line)
        if CJK_PATTERN.search(value):
            result['chinese_in_value'].append(
                f"line {en_line_num+1} key'{key}': value contains Chinese: {value[:80]}"
            )

    # Check: format codes preserved
    for key in sorted(zh_keys & en_keys):
        zh_value = get_value(zh_data[key][1])
        en_value = get_value(en_data[key][1])

        zh_vars = extract_dollar_vars(zh_value)
        en_vars = extract_dollar_vars(en_value)

        if zh_vars != en_vars:
            missing = zh_vars - en_vars
            extra = en_vars - zh_vars
            parts = []
            if missing:
                parts.append(f"missing $VAR$: {', '.join(sorted(missing))}")
            if extra:
                parts.append(f"extra $VAR$: {', '.join(sorted(extra))}")
            if parts:
                en_line_num = en_data[key][0] + 1
                result['format_issues'].append(
                    f"line {en_line_num+1} key'{key}': ${' ; '.join(parts)}$"
                )

        zh_markers = extract_color_markers(zh_value)
        en_markers = extract_color_markers(en_value)

        zh_marker_counts = {}
        for m in zh_markers:
            zh_marker_counts[m] = zh_marker_counts.get(m, 0) + 1
        en_marker_counts = {}
        for m in en_markers:
            en_marker_counts[m] = en_marker_counts.get(m, 0) + 1

        if zh_marker_counts != en_marker_counts:
            missing_markers = {}
            for mk, cnt in zh_marker_counts.items():
                en_cnt = en_marker_counts.get(mk, 0)
                if cnt > en_cnt:
                    missing_markers[mk] = cnt - en_cnt
            extra_markers = {}
            for mk, cnt in en_marker_counts.items():
                zh_cnt = zh_marker_counts.get(mk, 0)
                if cnt > zh_cnt:
                    extra_markers[mk] = cnt - zh_cnt

            parts = []
            if missing_markers:
                ms = ', '.join(f"?{m}×{c}" for m, c in sorted(missing_markers.items()))
                parts.append(f"missing color markers: {ms}")
            if extra_markers:
                ms = ', '.join(f"?{m}×{c}" for m, c in sorted(extra_markers.items()))
                parts.append(f"extra color markers: {ms}")
            if parts:
                en_line_num = en_data[key][0] + 1
                result['format_issues'].append(
                    f"line {en_line_num+1} key'{key}': ${' ; '.join(parts)}$"
                )

        zh_ends = extract_color_ends(zh_value)
        en_ends = extract_color_ends(en_value)
        if zh_ends != en_ends:
            en_line_num = en_data[key][0] + 1
            result['format_issues'].append(
                f"line {en_line_num+1} key'{key}': "
                f"?! terminator count mismatch: zh-CN={zh_ends}, en-US={en_ends}"
            )

    if result['key_mismatches'] or result['chinese_in_value'] or result['format_issues'] or result['comment_issues'] or not result['line_count_match']:
        result['pass'] = False

    return result


def main():
    results = []
    for f in FILES:
        r = validate_file(f)
        results.append(r)

    header = f"{'File':<35} {'zh_lines':>8} {'en_lines':>8} {'lines':>6} {'keys':>6} {'no_cn':>6} {'fmt_codes':>10} {'comments':>9} {'result':>6}"
    print("=" * 110)
    print(header)
    print("=" * 110)

    for r in results:
        if 'error' in r:
            print(f"{r['file']:<35} {'ERR':>8} {'ERR':>8} {'':>6} {'':>6} {'':>6} {'':>10} {'':>9} {'FAIL':>6}")
            print(f"  Error: {r['error']}")
            continue

        line_ok = 'OK' if r['line_count_match'] else 'FAIL'
        key_ok = 'OK' if not r['key_mismatches'] else 'FAIL'
        cn_ok = 'OK' if not r['chinese_in_value'] else 'FAIL'
        fmt_ok = 'OK' if not r['format_issues'] else 'FAIL'
        cmt_ok = 'OK' if not r['comment_issues'] else 'FAIL'
        status = 'PASS' if r['pass'] else 'FAIL'

        print(f"{r['file']:<35} {r['zh_lines']:>8} {r['en_lines']:>8} {line_ok:>6} {key_ok:>6} {cn_ok:>6} {fmt_ok:>10} {cmt_ok:>9} {status:>6}")

    print("\n" + "=" * 110)
    print("DETAILED ISSUES")
    print("=" * 110)

    total_issues = 0
    for r in results:
        file_issues = []
        if not r.get('line_count_match', True):
            file_issues.append(f"Line count mismatch: zh-CN={r['zh_lines']}, en-US={r['en_lines']}")
        if r.get('comment_issues'):
            file_issues.extend(r['comment_issues'])
        if r.get('key_mismatches'):
            file_issues.extend(r['key_mismatches'])
        if r.get('chinese_in_value'):
            file_issues.extend(r['chinese_in_value'])
        if r.get('format_issues'):
            file_issues.extend(r['format_issues'])

        if file_issues:
            total_issues += len(file_issues)
            print(f"\n### {r['file']} ({len(file_issues)} issues)")
            for issue in file_issues:
                print(f"  - {issue}")

    passed = sum(1 for r in results if r['pass'])
    failed = sum(1 for r in results if not r['pass'])
    print(f"\nSUMMARY: {passed} PASS, {failed} FAIL, {total_issues} issues to fix")


if __name__ == '__main__':
    main()