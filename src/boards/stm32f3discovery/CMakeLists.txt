set(BOARD_COMPILE_FLAGS
        "-mcpu=cortex-m4" "-march=armv7e-m" "-mthumb" "-mfpu=fpv4-sp-d16" "-mfloat-abi=hard"
)
set_property(GLOBAL PROPERTY PROJECT_BOARD_COMPILE_FLAGS "${BOARD_COMPILE_FLAGS}")

target_sources(board PRIVATE
        stm32f3discovery-bsp.cpp
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx/startup_stm32f303xc.s
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx/stm32f3xx_hal_msp.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx/stm32f3xx_it.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx/syscalls.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx/sysmem.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx/system_stm32f3xx.c

        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_adc.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_adc_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_can.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_cec.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_comp.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_cortex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_crc.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_crc_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_dac.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_dac_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_dma.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_exti.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_flash.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_flash_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_gpio.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_hrtim.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_i2c.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_i2c_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_i2s.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_i2s_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_irda.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_iwdg.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_nand.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_nor.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_opamp.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_opamp_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_pccard.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_pcd.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_pcd_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_pwr.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_pwr_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_rcc.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_rcc_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_rtc.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_rtc_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_sdadc.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_smartcard.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_smartcard_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_smbus.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_spi.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_spi_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_sram.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tsc.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_uart.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_uart_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_usart.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_usart_ex.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_wwdg.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_adc.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_comp.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_crc.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_dac.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_dma.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_exti.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_fmc.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_gpio.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_hrtim.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_i2c.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_opamp.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_pwr.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_rcc.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_rtc.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_spi.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_tim.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_usart.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_usb.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_utils.c
)

target_include_directories(board PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/..
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/Device/ST/STM32F3xx/Include
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx/
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Inc
        ${CMAKE_CURRENT_LIST_DIR}/STM32F3xx_HAL_Driver/Inc/Legacy
)

target_compile_definitions(board PRIVATE USE_HAL_DRIVER STM32F303xC)

target_compile_options(board PRIVATE ${BOARD_COMPILE_FLAGS})

target_link_libraries(board PUBLIC CMSIS)
