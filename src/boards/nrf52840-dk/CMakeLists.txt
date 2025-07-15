set(BOARD_COMPILE_FLAGS
        "-mcpu=cortex-m4" "-march=armv7e-m" "-mthumb" "-mfpu=fpv4-sp-d16" "-mfloat-abi=hard"
)
set_property(GLOBAL PROPERTY PROJECT_BOARD_COMPILE_FLAGS "${BOARD_COMPILE_FLAGS}")

set(LINKER_SCRIPT
        ${CMAKE_CURRENT_LIST_DIR}/nrf52840/nrf52_xxaa.ld)

target_sources(board PRIVATE
        nrf52840-dk-bsp.cpp
        ${CMAKE_CURRENT_LIST_DIR}/nrf52840/gcc_startup_nrf52840.S
        ${CMAKE_CURRENT_LIST_DIR}/nrf52840/system_nrf52840.c
)

target_include_directories(board PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/..
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/nrf52840
)

target_compile_definitions(board PRIVATE NRF52840_XXAA)

target_compile_options(board PRIVATE ${BOARD_COMPILE_FLAGS})

target_link_libraries(board PUBLIC CMSIS)

target_link_options(${CMAKE_PROJECT_NAME} PRIVATE "-T${LINKER_SCRIPT}" "-L${CMAKE_CURRENT_LIST_DIR}/nrf52840")
