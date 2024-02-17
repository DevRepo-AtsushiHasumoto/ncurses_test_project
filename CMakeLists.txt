cmake_minimum_required(VERSION 3.12)

project(ncurses_test_project)

set(CMAKE_CXX_FLAGS "")
set(CMAKE_EXPORT_COMPILE_COMMANDS "1")

include_directories(
    includes
    /usr/local/include
)

link_directories(
    /usr/local/lib
)

file(GLOB SOURCES (
    sources/*.cpp
))

add_executable(
    ${PROJECT_NAME}
    ${SOURCES}
)

target_link_libraries(
    ${PROJECT_NAME}
    -lncurses 
)