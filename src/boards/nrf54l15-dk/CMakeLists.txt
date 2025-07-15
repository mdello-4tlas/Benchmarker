set(BOARD_COMPILE_FLAGS
        "-mcpu=cortex-m33" "-mthumb" "-mfpu=fpv4-sp-d16" "-mfloat-abi=hard" # "-nostartfiles"
)
set_property(GLOBAL PROPERTY PROJECT_BOARD_COMPILE_FLAGS "${BOARD_COMPILE_FLAGS}")

set(LINKER_SCRIPT
        ${CMAKE_CURRENT_LIST_DIR}/nrf54l15/nrf54_xxaa.ld)

target_sources(board PRIVATE
        nrf54l15-dk-bsp.cpp
        ${CMAKE_CURRENT_LIST_DIR}/nrf54l15/startup_nrf54l.c
        ${CMAKE_CURRENT_LIST_DIR}/nrf54l15/system_nrf54l.c
)

target_include_directories(board PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/..
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/nrf54l15
)

target_compile_definitions(board PRIVATE
        NRF54L15_XXAA
        NRF_APPLICATION
)

target_compile_options(board PRIVATE ${BOARD_COMPILE_FLAGS})
target_compile_options(board PRIVATE -O0)


target_link_libraries(board PUBLIC CMSIS)

target_link_options(${CMAKE_PROJECT_NAME} PRIVATE "-T${LINKER_SCRIPT}" "-L${CMAKE_CURRENT_LIST_DIR}/nrf54l15")
