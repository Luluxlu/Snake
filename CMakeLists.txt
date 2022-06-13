cmake_minimum_required(VERSION 3.18)

project(libuv_test_project LANGUAGES C)

include(FetchContent)
FetchContent_Declare(
    libuv
    GIT_REPOSITORY https://github.com/libuv/libuv.git 
    GIT_TAG        v1.44.1
)
FetchContent_MakeAvailable(libuv)

add_executable(snakeExe src/main2.c)