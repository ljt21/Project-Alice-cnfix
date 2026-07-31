$ErrorActionPreference = "Stop"

$zhPath = "d:\WorkDIR\alice\assets\localisation\zh-CN\text.csv"
$enPath = "d:\WorkDIR\alice\assets\localisation\en-US\text.csv"
$newTransPath = "d:\WorkDIR\alice\assets\localisation\en-US\translations_247.csv"
$outputPath = "d:\WorkDIR\alice\assets\localisation\en-US\text.csv"

$partFiles = @(
  "d:\WorkDIR\alice\assets\localisation\en-US\text_part2.csv",
  "d:\WorkDIR\alice\assets\localisation\en-US\text_part3.csv",
  "d:\WorkDIR\alice\assets\localisation\en-US\text_part4.csv",
  "d:\WorkDIR\alice\assets\localisation\en-US\text_part5.csv",
  "d:\WorkDIR\alice\assets\localisation\en-US\text_part6.csv",
  "d:\WorkDIR\alice\assets\localisation\en-US\text_part7.csv",
  "d:\WorkDIR\alice\assets\localisation\en-US\text_part8.csv"
)

$dict = @{}

function Load-Translations($path) {
  $lines = [System.IO.File]::ReadAllLines($path)
  $count = 0
  foreach ($line in $lines) {
    if ($line -match '^(.*?);(.*)$') {
      $key = $Matches[1]
      $val = $Matches[2]
      if (-not $dict.ContainsKey($key)) {
        $dict[$key] = $val
        $count++
      }
    } elseif ($line -match '^([^;]+)$') {
      $key = $Matches[1]
      if (-not $dict.ContainsKey($key)) {
        $dict[$key] = ""
        $count++
      }
    }
  }
  Write-Output "  Loaded $count new keys from $([System.IO.Path]::GetFileName($path))"
}

Write-Output "Step 1: Loading en-US text.csv (first 2000 lines - translated section)..."
$enLines = [System.IO.File]::ReadAllLines($enPath)
$first2000 = $enLines[0..1999]
foreach ($line in $first2000) {
  if ($line -match '^(.*?);(.*)$') {
    $dict[$Matches[1]] = $Matches[2]
  } elseif ($line -match '^([^;]+)$') {
    if (-not $dict.ContainsKey($Matches[1])) { $dict[$Matches[1]] = "" }
  }
}
Write-Output "  Loaded 2000 lines from text.csv"

Write-Output "`nStep 2: Loading part files..."
foreach ($pf in $partFiles) {
  Load-Translations $pf
}

Write-Output "`nStep 3: Loading 247 new translations..."
Load-Translations $newTransPath

Write-Output "`nTotal dictionary size: $($dict.Count) keys"

Write-Output "`nStep 4: Building output from zh-CN template..."
$zhLines = [System.IO.File]::ReadAllLines($zhPath)
$output = New-Object System.Collections.Generic.List[string]
$chineseRemaining = 0

foreach ($line in $zhLines) {
  if ($line -match '^(.*?);(.*)$') {
    $key = $Matches[1]
    $zhVal = $Matches[2]
    if ($dict.ContainsKey($key)) {
      $val = $dict[$key]
      $output.Add("$key;$val")
      if ($val -match '[\u4e00-\u9fff]') { $chineseRemaining++ }
    } else {
      $output.Add($line)
      if ($zhVal -match '[\u4e00-\u9fff]') { $chineseRemaining++ }
    }
  } elseif ($line -match '^([^;]+)$') {
    $key = $Matches[1]
    if ($dict.ContainsKey($key)) {
      $output.Add("$key;$($dict[$key])")
    } else {
      $output.Add($line)
    }
  } else {
    $output.Add($line)
  }
}

Write-Output "Output lines: $($output.Count)"
Write-Output "Lines still with Chinese: $chineseRemaining"

Write-Output "`nStep 5: Verifying..."
$outputText = $output -join "`n"
$zhCharCount = ([regex]::Matches($outputText, '[\u4e00-\u9fff]')).Count
Write-Output "Total Chinese characters in output: $zhCharCount"

if ($zhCharCount -gt 0) {
  Write-Output "WARNING: Chinese characters still present!"
  Write-Output "Finding lines with Chinese..."
  $problemLines = @()
  for ($i = 0; $i -lt $output.Count; $i++) {
    if ($output[$i] -match '[\u4e00-\u9fff]') {
      $problemLines += "  Line $($i+1): $($output[$i])"
    }
  }
  $problemLines | Select-Object -First 30
} else {
  Write-Output "SUCCESS: No Chinese characters found in output!"
}

Write-Output "`nStep 6: Writing output..."
Copy-Item $enPath "$enPath.bak2" -Force
[System.IO.File]::WriteAllLines($outputPath, $output.ToArray())
Write-Output "Written to: $outputPath"
Write-Output "Backup saved to: $enPath.bak2"

Write-Output "`n=== SUMMARY ==="
Write-Output "Final line count: $($output.Count)"
Write-Output "zh-CN source count: $($zhLines.Count)"
Write-Output "Match: $($output.Count -eq $zhLines.Count)"
Write-Output "Chinese characters remaining: $zhCharCount"