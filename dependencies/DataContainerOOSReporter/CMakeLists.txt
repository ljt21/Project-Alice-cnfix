message(STATUS "Fetching DataContainerOOSReporter...")

FetchContent_Declare(
	DataContainerOOSReporter
	GIT_REPOSITORY https://gitee.com/ljt21/DataContainer_OOS_Reporter
	GIT_TAG master
	GIT_SHALLOW 1
	GIT_PROGRESS TRUE
)

FetchContent_MakeAvailable(DataContainerOOSReporter)

add_library(dependency_DataContainerOOSReporter INTERFACE)
