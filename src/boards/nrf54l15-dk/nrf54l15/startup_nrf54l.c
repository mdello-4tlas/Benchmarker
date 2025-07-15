/******************************************************************************
 * @file     startup_nrf54l.c
 * @brief    CMSIS-Core(M) Device Startup File for
 *           Device nrf54l
 * @version  V1.0.0
 * @date     20. January 2021
 ******************************************************************************/
/*
 * Copyright (c) 2009-2021 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "nrf54l15.h"
#include "nrf54l15_application.h"

/*---------------------------------------------------------------------------
  External References
 *---------------------------------------------------------------------------*/
extern uint32_t __StackTop;
extern uint32_t __StackLimit;
#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
extern uint32_t __STACK_SEAL;
#endif

typedef void(*VECTOR_TABLE_Type)(void);

extern __NO_RETURN void __PROGRAM_START(void);

#define DEFAULT_IRQ_HANDLER(handler_name)  \
__NO_RETURN void __attribute__((weak, alias("default_tfm_IRQHandler"))) handler_name(void);


__NO_RETURN __attribute__((naked)) void default_tfm_IRQHandler(void)
{
  // EXCEPTION_INFO();

  __ASM volatile(
        "BL        default_irq_handler     \n"
        "B         .                       \n"
    );
}

__NO_RETURN
void default_irq_handler(void) {
  while (1)
  {
    __asm__("nop");
  }
}

/*---------------------------------------------------------------------------
  Internal References
 *---------------------------------------------------------------------------*/
__NO_RETURN void Reset_Handler  (void);
__NO_RETURN void Default_Handler(void);

/* ToDo: Add Cortex exception handler according the used Cortex-Core */
/*---------------------------------------------------------------------------
  Exception / Interrupt Handler
 *---------------------------------------------------------------------------*/
/* Exceptions */
__NO_RETURN void NMI_Handler            (void) __attribute__ ((weak, alias("Default_Handler")));
__NO_RETURN void HardFault_Handler      (void) __attribute__ ((weak));
__NO_RETURN void MemManage_Handler      (void) __attribute__ ((weak, alias("Default_Handler")));
__NO_RETURN void BusFault_Handler       (void) __attribute__ ((weak, alias("Default_Handler")));
__NO_RETURN void UsageFault_Handler     (void) __attribute__ ((weak, alias("Default_Handler")));
__NO_RETURN void SecureFault_Handler    (void) __attribute__ ((weak, alias("Default_Handler")));
__NO_RETURN void SVC_Handler            (void) __attribute__ ((weak, alias("Default_Handler")));
__NO_RETURN void DebugMon_Handler       (void) __attribute__ ((weak, alias("Default_Handler")));
__NO_RETURN void PendSV_Handler         (void) __attribute__ ((weak, alias("Default_Handler")));
__NO_RETURN void SysTick_Handler        (void) __attribute__ ((weak, alias("Default_Handler")));


/*----------------------------------------------------------------------------
  Exception / Interrupt Vector table
 *----------------------------------------------------------------------------*/

#if defined ( __GNUC__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#endif

// DEFAULT_IRQ_HANDLER(NMI_Handler)
// DEFAULT_IRQ_HANDLER(HardFault_Handler)
// DEFAULT_IRQ_HANDLER(MemManage_Handler)
// DEFAULT_IRQ_HANDLER(BusFault_Handler)
// DEFAULT_IRQ_HANDLER(UsageFault_Handler)
// DEFAULT_IRQ_HANDLER(SecureFault_Handler)
// DEFAULT_IRQ_HANDLER(SVC_Handler)
// DEFAULT_IRQ_HANDLER(DebugMon_Handler)
// DEFAULT_IRQ_HANDLER(PendSV_Handler)
// DEFAULT_IRQ_HANDLER(SysTick_Handler)

DEFAULT_IRQ_HANDLER(SWI00_IRQHandler)
DEFAULT_IRQ_HANDLER(SWI01_IRQHandler)
DEFAULT_IRQ_HANDLER(SWI02_IRQHandler)
DEFAULT_IRQ_HANDLER(SWI03_IRQHandler)
DEFAULT_IRQ_HANDLER(AAR00_CCM00_IRQHandler)
DEFAULT_IRQ_HANDLER(ECB00_IRQHandler)
DEFAULT_IRQ_HANDLER(SERIAL00_IRQHandler)
DEFAULT_IRQ_HANDLER(RRAMC_IRQHandler)
DEFAULT_IRQ_HANDLER(VPR00_IRQHandler)
DEFAULT_IRQ_HANDLER(CTRLAP_IRQHandler)
DEFAULT_IRQ_HANDLER(CM33SS_IRQHandler)
DEFAULT_IRQ_HANDLER(TIMER00_IRQHandler)
DEFAULT_IRQ_HANDLER(TIMER10_IRQHandler)
DEFAULT_IRQ_HANDLER(RTC10_IRQHandler)
DEFAULT_IRQ_HANDLER(EGU10_IRQHandler)
DEFAULT_IRQ_HANDLER(AAR10_CCM10_IRQHandler)
DEFAULT_IRQ_HANDLER(ECB10_IRQHandler)
DEFAULT_IRQ_HANDLER(RADIO_0_IRQHandler)
DEFAULT_IRQ_HANDLER(RADIO_1_IRQHandler)
DEFAULT_IRQ_HANDLER(SERIAL20_IRQHandler)
DEFAULT_IRQ_HANDLER(SERIAL21_IRQHandler)
DEFAULT_IRQ_HANDLER(SERIAL22_IRQHandler)
DEFAULT_IRQ_HANDLER(EGU20_IRQHandler)
DEFAULT_IRQ_HANDLER(TIMER20_IRQHandler)
DEFAULT_IRQ_HANDLER(TIMER21_IRQHandler)
DEFAULT_IRQ_HANDLER(TIMER22_IRQHandler)
DEFAULT_IRQ_HANDLER(TIMER23_IRQHandler)
DEFAULT_IRQ_HANDLER(TIMER24_IRQHandler)
DEFAULT_IRQ_HANDLER(PWM20_IRQHandler)
DEFAULT_IRQ_HANDLER(PWM21_IRQHandler)
DEFAULT_IRQ_HANDLER(PWM22_IRQHandler)
DEFAULT_IRQ_HANDLER(SAADC_IRQHandler)
DEFAULT_IRQ_HANDLER(NFCT_IRQHandler)
DEFAULT_IRQ_HANDLER(TEMP_IRQHandler)
DEFAULT_IRQ_HANDLER(GPIOTE20_1_IRQHandler)
DEFAULT_IRQ_HANDLER(TAMPC_IRQHandler)
DEFAULT_IRQ_HANDLER(I2S20_IRQHandler)
DEFAULT_IRQ_HANDLER(QDEC20_IRQHandler)
DEFAULT_IRQ_HANDLER(QDEC21_IRQHandler)
DEFAULT_IRQ_HANDLER(GRTC_0_IRQHandler)
DEFAULT_IRQ_HANDLER(GRTC_1_IRQHandler)
DEFAULT_IRQ_HANDLER(GRTC_2_IRQHandler)
DEFAULT_IRQ_HANDLER(GRTC_3_IRQHandler)
DEFAULT_IRQ_HANDLER(SERIAL30_IRQHandler)
DEFAULT_IRQ_HANDLER(CLOCK_POWER_IRQHandler)
DEFAULT_IRQ_HANDLER(COMP_LPCOMP_IRQHandler)
DEFAULT_IRQ_HANDLER(WDT30_IRQHandler)
DEFAULT_IRQ_HANDLER(WDT31_IRQHandler)
DEFAULT_IRQ_HANDLER(GPIOTE30_1_IRQHandler)


DEFAULT_IRQ_HANDLER(MPC00_IRQHandler)
DEFAULT_IRQ_HANDLER(SPU00_IRQHandler)
DEFAULT_IRQ_HANDLER(SPU10_IRQHandler)
DEFAULT_IRQ_HANDLER(SPU20_IRQHandler)
DEFAULT_IRQ_HANDLER(SPU30_IRQHandler)
DEFAULT_IRQ_HANDLER(CRACEN_IRQHandler)

/* ToDo: Add Cortex exception vectors according the used Cortex-Core */
extern const VECTOR_TABLE_Type __VECTOR_TABLE[__INTERRUPTS_MAX+16];
       const VECTOR_TABLE_Type __VECTOR_TABLE[__INTERRUPTS_MAX+16] __VECTOR_TABLE_ATTRIBUTE = {
  (VECTOR_TABLE_Type)(&__INITIAL_SP),  /*     Initial Stack Pointer */
  Reset_Handler,                       /*     Reset Handler */
  NMI_Handler,                         /* -14 NMI Handler */
  HardFault_Handler,                   /* -13 Hard Fault Handler */
  MemManage_Handler,                   /* -12 MPU Fault Handler */
  BusFault_Handler,                    /* -11 Bus Fault Handler */
  UsageFault_Handler,                  /* -10 Usage Fault Handler */
  SecureFault_Handler,                 /*  -9 Secure Fault Handler */
  0,                                   /*     Reserved */
  0,                                   /*     Reserved */
  0,                                   /*     Reserved */
  SVC_Handler,                         /*  -5 SVCall Handler */
  DebugMon_Handler,                    /*  -4 Debug Monitor Handler */
  0,                                   /*     Reserved */
  PendSV_Handler,                      /*  -2 PendSV Handler */
  SysTick_Handler,                     /*  -1 SysTick Handler */
/* Device specific interrupt handlers */
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SWI00_IRQHandler,
    SWI01_IRQHandler,
    SWI02_IRQHandler,
    SWI03_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SPU00_IRQHandler,
    MPC00_IRQHandler,
    0,
    0,
    0,
    0,
    AAR00_CCM00_IRQHandler,
    ECB00_IRQHandler,
    CRACEN_IRQHandler,
    0,
    SERIAL00_IRQHandler,
    RRAMC_IRQHandler,
    VPR00_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    CTRLAP_IRQHandler,
    CM33SS_IRQHandler,
    0,
    TIMER00_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SPU10_IRQHandler,
    0,
    0,
    0,
    0,
    TIMER10_IRQHandler,
    RTC10_IRQHandler,
    EGU10_IRQHandler,
    AAR10_CCM10_IRQHandler,
    ECB10_IRQHandler,
    RADIO_0_IRQHandler,
    RADIO_1_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SPU20_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    SERIAL20_IRQHandler,
    SERIAL21_IRQHandler,
    SERIAL22_IRQHandler,
    EGU20_IRQHandler,
    TIMER20_IRQHandler,
    TIMER21_IRQHandler,
    TIMER22_IRQHandler,
    TIMER23_IRQHandler,
    TIMER24_IRQHandler,
    0,
    0,
    0,
    PWM20_IRQHandler,
    PWM21_IRQHandler,
    PWM22_IRQHandler,
    SAADC_IRQHandler,
    NFCT_IRQHandler,
    TEMP_IRQHandler,
    0,
    0,
    0,
    GPIOTE20_1_IRQHandler,
    TAMPC_IRQHandler,
    I2S20_IRQHandler,
    0,
    0,
    QDEC20_IRQHandler,
    QDEC21_IRQHandler,
    GRTC_0_IRQHandler,
    GRTC_1_IRQHandler,
    GRTC_2_IRQHandler,
    GRTC_3_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SPU30_IRQHandler,
    0,
    0,
    0,
    SERIAL30_IRQHandler,
    CLOCK_POWER_IRQHandler,
    COMP_LPCOMP_IRQHandler,
    0,
    WDT30_IRQHandler,
    WDT31_IRQHandler,
    0,
    0,
    0,
    GPIOTE30_1_IRQHandler,
};

#if defined ( __GNUC__ )
#pragma GCC diagnostic pop
#endif

// extern uint32_t __data_start__;
// extern uint32_t __copy_table_start__;
// extern uint32_t __copy_table_end__;
// extern uint32_t __bss_start__;
// extern uint32_t __bss_end__;
/*---------------------------------------------------------------------------
  Reset Handler called on controller reset
 *---------------------------------------------------------------------------*/
__NO_RETURN void Reset_Handler(void)
{
  __set_PSP((uint32_t)(&__INITIAL_SP));

/* ToDo: Initialize stack limit register for Armv8-M Main Extension based processors*/
  // __set_MSPLIM((uint32_t)(&__STACK_LIMIT));
  // __set_PSPLIM((uint32_t)(&__STACK_LIMIT));

/* ToDo: Add stack sealing for Armv8-M based processors */
#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
  __TZ_set_STACKSEAL_S((uint32_t *)(&__STACK_SEAL));
#endif

  // uint32_t *src = &__data_start__;
  // uint32_t *dst = &__copy_table_start__;
  // while (dst < &__copy_table_end__) {
  //   *dst++ = *src++;
  // }
  //
  // // Zero .bss
  // dst = &__bss_start__;
  // while (dst < &__bss_end__) {
  //   *dst++ = 0;
  // }

  SystemInit();                    /* CMSIS System Initialization */
  // __PROGRAM_START();               /* Enter PreMain (C library entry point) */
  __cmsis_start();
}


#if defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wmissing-noreturn"
#endif

/*---------------------------------------------------------------------------
  Hard Fault Handler
 *---------------------------------------------------------------------------*/
__NO_RETURN void HardFault_Handler(void)
{
  while(1);
}

/*---------------------------------------------------------------------------
  Default Handler for Exceptions / Interrupts
 *---------------------------------------------------------------------------*/
__NO_RETURN void Default_Handler(void)
{
  while(1);
}

#if defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic pop
#endif
