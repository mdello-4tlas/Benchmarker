set(BOARD_COMPILE_FLAGS
        "-mcpu=cortex-m33" "-mthumb" "-mfpu=fpv4-sp-d16" "-mfloat-abi=hard"
)
set_property(GLOBAL PROPERTY PROJECT_BOARD_COMPILE_FLAGS "${BOARD_COMPILE_FLAGS}")

set(LINKER_SCRIPT
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp.ld)

target_sources(board PRIVATE
        ek-ra6m5-bsp.cpp
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/cmsis/Device/RENESAS/Source/startup.c
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/cmsis/Device/RENESAS/Source/system.c
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/all/bsp_clocks.c
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/all/bsp_common.c
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/all/bsp_delay.c
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/all/bsp_group_irq.c
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/all/bsp_guard.c
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/all/bsp_io.c
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/all/bsp_irq.c
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/all/bsp_macl.c
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/all/bsp_register_protection.c
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/all/bsp_rom_registers.c
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/all/bsp_sbrk.c
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/all/bsp_sdram.c
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/all/bsp_security.c
)

target_include_directories(board PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/..
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/ra_gen
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp_cfg/
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp_cfg/bsp
#        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/inc
#        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/inc/api
#        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/inc/instances
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/inc
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/inc/api
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/inc/instances
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/cmsis/Device/RENESAS/Include
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/all
        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/fsp/src/bsp/mcu/ra6m5
#        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/src/bsp/cmsis/Device/RENESAS/Include
#        ${CMAKE_CURRENT_LIST_DIR}/ra6m5/src/bsp/mcu/all
)

#target_compile_definitions(board PRIVATE BSP_MCU_GROUP_RA6M5)

target_compile_options(board PRIVATE ${BOARD_COMPILE_FLAGS})

target_link_libraries(board PUBLIC CMSIS)

target_link_options(${CMAKE_PROJECT_NAME} PRIVATE "-T${LINKER_SCRIPT}" "-L${CMAKE_CURRENT_LIST_DIR}/ra6m5")
