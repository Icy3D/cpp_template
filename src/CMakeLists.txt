set(HEADER_FILES Example.h)
set(SOURCE_FILES Example.cpp)

#if (EXISTS ${SOURCE_FILES})
#    message("yeah")
#    # The library contains header and source files.
    add_library(lib${CMAKE_PROJECT_NAME} STATIC
                ${SOURCE_FILES}
                ${HEADER_FILES}
                )
    add_executable(${CMAKE_PROJECT_NAME} main.cpp)
    target_link_libraries(${CMAKE_PROJECT_NAME} lib${CMAKE_PROJECT_NAME})
#else ()
#    # The library only contains header files.
#    add_library(lib${CMAKE_PROJECT_NAME} INTERFACE)
#endif ()