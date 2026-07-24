message(STATUS "Fetching fmt ...")

FetchContent_Declare(
	fmt
	GIT_REPOSITORY https://gitee.com/ljt21/fmt.git
	GIT_TAG 11.2.0
	GIT_SHALLOW 1
	GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(fmt)
