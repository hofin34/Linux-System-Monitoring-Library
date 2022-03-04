cmake_minimum_required(VERSION 3.0)

SET(BUILD_SHARED_LIBS ON)
set(LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}/lib")

FILE(GLOB_RECURSE source_files "src/*")
add_library(linuxmonitoring SHARED ${source_files})

TARGET_INCLUDE_DIRECTORIES(linuxmonitoring PUBLIC "include/")
TARGET_INCLUDE_DIRECTORIES(linuxmonitoring PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_compile_options(linuxmonitoring PRIVATE ${COMPILER_SETTINGS})

target_link_libraries(linuxmonitoring
        pthread
        rt
        )
