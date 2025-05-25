cmake_minimum_required(VERSION 3.22)

# Set the project name
set(CMAKE_PROJECT_NAME Benchmarker)

# Core project settings
project(${CMAKE_PROJECT_NAME})

# Setup compiler settings
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

set(CMAKE_CXX_STANDARD 23)

# Define the build type
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "RelWithDebInfo")
endif()

# Enable CMake support for ASM and C languages
enable_language(C CXX ASM)

# Enable compile command to ease indexing with e.g. clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# Create an executable object type
add_executable(${CMAKE_PROJECT_NAME} )

target_compile_options(${CMAKE_PROJECT_NAME} PRIVATE
  $<$<CONFIG:Debug>:-O0>
  $<$<CONFIG:Debug>:-g>
  $<$<CONFIG:Release>:-Os>
  $<$<CONFIG:RelWithDebInfo>:-O2>
  $<$<CONFIG:RelWithDebInfo>:-g>
  $<$<CONFIG:MinSizeRel>:-Os>
)

message("Build type: " ${CMAKE_BUILD_TYPE})

add_subdirectory(src/boards)
# Read the global property set in the deepest subdirectory
get_property(BOARD_FLAGS_GLOBAL GLOBAL PROPERTY PROJECT_BOARD_COMPILE_FLAGS)

if(DEFINED BOARD_FLAGS_GLOBAL)
    target_compile_options(${CMAKE_PROJECT_NAME} PRIVATE ${BOARD_FLAGS_GLOBAL})
    target_link_options(${CMAKE_PROJECT_NAME} PRIVATE ${BOARD_FLAGS_GLOBAL})
    add_compile_options(${BOARD_FLAGS_GLOBAL})
    add_link_options(${BOARD_FLAGS_GLOBAL})
endif()

add_subdirectory(src)
