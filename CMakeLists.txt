cmake_minimum_required(VERSION 3.13)
project(CppTemplate)
set(PROJECT_BRIEF "Just an example project")

set(CMAKE_CXX_STANDARD 17)

# The project version number.
set(VERSION_MAJOR   0   CACHE STRING "Project major version number.")
set(VERSION_MINOR   0   CACHE STRING "Project minor version number.")
set(VERSION_PATCH   1   CACHE STRING "Project patch version number.")
mark_as_advanced(VERSION_MAJOR VERSION_MINOR VERSION_PATCH)

# include header files
include_directories(inc)

add_subdirectory(src)
#add_subdirectory(tests)
add_subdirectory(docs)

