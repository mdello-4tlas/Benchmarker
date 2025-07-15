
#ifndef BSP_CFG_H_
#define BSP_CFG_H_

#include "bsp_feature.h"

/***********************************************************************************************************************
 * Configuration for minimal BSP bring-up (manual, not auto-generated)
 * MCU: Renesas RA6M5
 * Purpose: Bare-metal, no RTOS, no HAL, no Smart Configurator
 **********************************************************************************************************************/

/* Stack and heap configuration */
#define BSP_CFG_STACK_MAIN_BYTES           (0x1000)   /* 4 KB main stack */
#define BSP_CFG_HEAP_BYTES                 (0x0800)   /* 2 KB heap */

/* Startup configuration */
#define BSP_CFG_C_RUNTIME_INIT             (1)        /* Use standard C runtime initialization */
#define BSP_CFG_STARTUP_DISABLE            (0)        /* Enable default startup (Reset_Handler) */

/* Clock source (manually controlled — values below are placeholders) */
#define BSP_CFG_CLOCKS_SOURCE              (0)        /* 0: HOCO, 1: EXT, 2: LOCO, etc. (not used here) */

/* RTOS configuration */
#define BSP_CFG_RTOS                       (0)        /* 0 = No RTOS */

/* MCU part number (not always required unless accessing MCU-specific features) */
#define BSP_CFG_MCU_PART_NUMBER            (0x00)     /* Placeholder if needed */

/* Optional: enable interrupts or not */
#define BSP_CFG_IRQ_CFG                    (0)        /* Set to 1 if interrupt priorities configured manually */

/* Optional: define if FSP common error codes/macros are reused */
#define BSP_CFG_ASSERT                     (0)        /* 0 = no assert, 1 = FSP-style assert */

/* BSP Version tracking (optional, not used in manual setups) */
#define BSP_CFG_VERSION_MAJOR              (1)
#define BSP_CFG_VERSION_MINOR              (0)

#endif /* BSP_CFG_H_ */
