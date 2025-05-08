set(MCU cortex-m4)
set(FPU_FLAGS "-mfpu=fpv4-sp-d16 -mfloat-abi=hard")
set(LINKER_SCRIPT  "${CMAKE_CURRENT_LIST_DIR}/STM32F411RETx_FLASH.ld")

list(APPEND CMAKE_C_FLAGS   "-mcpu=${MCU}" "${FPU_FLAGS}")
list(APPEND CMAKE_CXX_FLAGS "-mcpu=${MCU}" "${FPU_FLAGS}")

list(APPEND CMAKE_C_LINK_FLAGS   "-mcpu=${MCU}" "${FPU_FLAGS}" "-T${LINKER_SCRIPT}")
list(APPEND CMAKE_CXX_LINK_FLAGS "-mcpu=${MCU}" "${FPU_FLAGS}" "-T${LINKER_SCRIPT}")