add_library(board OBJECT
        )
target_include_directories(board PUBLIC ${CMAKE_CURRENT_LIST_DIR})

if (NOT DEFINED TARGET_BOARD AND NOT DEFINED ENV{TARGET_BOARD})
    message(FATAL_ERROR "TARGET_BOARD must be set (via -DTARGET_BOARD=... or env variable TARGET_BOARD)")
endif()

# Prioritize the CMake variable if set, otherwise use the environment variable
if (NOT DEFINED TARGET_BOARD)
    set(TARGET_BOARD $ENV{TARGET_BOARD})
endif()

add_subdirectory(${TARGET_BOARD})

