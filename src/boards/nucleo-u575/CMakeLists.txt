set(BOARD_COMPILE_FLAGS
        "-mcpu=cortex-m33" "-mthumb" "-mfpu=fpv4-sp-d16" "-mfloat-abi=hard"
)
set_property(GLOBAL PROPERTY PROJECT_BOARD_COMPILE_FLAGS "${BOARD_COMPILE_FLAGS}")

set(LINKER_SCRIPT
		${CMAKE_CURRENT_LIST_DIR}/STM32U575xx_FLASH.ld)

target_sources(board PRIVATE
        stm32-575-bsp.cpp
        ${CMAKE_CURRENT_LIST_DIR}/STM32U575/startup_stm32u575xx.s
        ${CMAKE_CURRENT_LIST_DIR}/STM32U575/stm32u5xx_hal_msp.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32U575/stm32u5xx_it.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32U575/syscalls.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32U575/sysmem.c
        ${CMAKE_CURRENT_LIST_DIR}/STM32U575/system_stm32u5xx.c

		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_adc.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_adc_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_comp.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_cordic.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_cortex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_crc.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_crc_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_cryp.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_cryp_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_dac.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_dac_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_dcache.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_dcmi.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_dma2d.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_dma.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_dma_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_dsi.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_exti.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_fdcan.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_flash.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_flash_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_fmac.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_gfxmmu.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_gfxtim.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_gpio.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_gpu2d.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_gtzc.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_hash.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_hash_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_hcd.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_i2c.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_i2c_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_icache.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_irda.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_iwdg.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_jpeg.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_lptim.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_ltdc.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_ltdc_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_mdf.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_mmc.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_mmc_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_nand.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_nor.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_opamp.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_opamp_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_ospi.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_otfdec.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pcd.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pcd_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pka.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pssi.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pwr.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pwr_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_ramcfg.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_rcc.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_rcc_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_rng.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_rng_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_rtc.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_rtc_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_sai.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_sai_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_sd.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_sd_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_sdio.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_smartcard.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_smartcard_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_smbus.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_smbus_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_spi.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_spi_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_sram.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_tim.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_tim_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_tsc.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_uart.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_uart_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_usart.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_usart_ex.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_wwdg.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_xspi.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_adc.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_comp.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_cordic.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_crc.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_crs.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_dac.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_dlyb.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_dma2d.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_dma.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_exti.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_fmac.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_fmc.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_gpio.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_i2c.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_icache.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_lpgpio.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_lptim.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_lpuart.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_opamp.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_pka.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_pwr.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_rcc.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_rng.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_rtc.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_sdmmc.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_spi.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_tim.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_ucpd.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_usart.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_usb.c
		${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_utils.c
)

target_include_directories(board PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/..
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/Device/ST/STM32U5xx/Include
        ${CMAKE_CURRENT_LIST_DIR}/STM32U575/
        ${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Inc
        ${CMAKE_CURRENT_LIST_DIR}/STM32U5xx_HAL_Driver/Inc/Legacy
)

target_compile_definitions(board PRIVATE 
	USE_FULL_LL_DRIVER 
	USE_HAL_DRIVER 
	STM32U575xx
)

target_compile_options(board PRIVATE ${BOARD_COMPILE_FLAGS})

target_link_libraries(board PUBLIC CMSIS)

target_link_options(${CMAKE_PROJECT_NAME} PRIVATE "-T${LINKER_SCRIPT}")
