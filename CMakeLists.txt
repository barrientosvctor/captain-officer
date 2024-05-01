cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME "discord-moderation-bot")
project(${PROJECT_NAME})

set(SRC_FILES
	"${CMAKE_CURRENT_SOURCE_DIR}/src/main.c")

add_executable(${PROJECT_NAME} ${SRC_FILES})
target_include_directories(${PROJECT_NAME}
	PUBLIC "./lib/concord/include"
	PUBLIC "./lib/concord/gencodecs"
	PUBLIC "./lib/concord/core")
target_compile_options(${PROJECT_NAME}
	PUBLIC "-Wall"
	PUBLIC "-Wpedantic"
	PUBLIC "-Wextra"
	PUBLIC "-O0"
	PUBLIC "-g")
target_link_directories(${PROJECT_NAME} PUBLIC "./lib/concord/lib")
target_link_libraries(${PROJECT_NAME}
	PUBLIC "discord"
	PUBLIC "curl"
	PUBLIC "pthread")
