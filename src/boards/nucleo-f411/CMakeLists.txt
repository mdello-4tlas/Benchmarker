set(BOARD_COMPILE_FLAGS
        "-mcpu=cortex-m4" "-march=armv7e-m" "-mthumb" "-mfpu=fpv4-sp-d16" "-mfloat-abi=hard"
)
set_property(GLOBAL PROPERTY PROJECT_BOARD_COMPILE_FLAGS "${BOARD_COMPILE_FLAGS}")

set(LINKER_SCRIPT
        ${CMAKE_CURRENT_LIST_DIR}/STM32F411RETx_FLASH.ld)

target_sources(board PRIVATE
        stm32-f411-bsp.cpp
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx/startup_stm32f411xe.s
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx/stm32f4xx_hal_msp.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx/stm32f4xx_it.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx/syscalls.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx/sysmem.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx/system_stm32f4xx.c

        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cortex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_exti.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ramfunc.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_gpio.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_uart.c
)

target_include_directories(board PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/..
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/Device/ST/STM32F4xx/Include
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx/
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Inc
        ${CMAKE_CURRENT_LIST_DIR}/STM32F4xx_HAL_Driver/Inc/Legacy
)

target_compile_definitions(board PRIVATE STM32F411xE)

target_compile_options(board PRIVATE ${BOARD_COMPILE_FLAGS})

target_link_libraries(board PUBLIC CMSIS)

target_link_options(${CMAKE_PROJECT_NAME} PRIVATE "-T${LINKER_SCRIPT}")
