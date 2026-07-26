message(STATUS "Fetching glm...")

FetchContent_Declare(
	glm
	GIT_REPOSITORY https://gitee.com/ljt21/glm.git
	GIT_TAG 1.0.2
	GIT_SHALLOW 1
	GIT_PROGRESS TRUE
)

FetchContent_MakeAvailable(glm)
