/*
 * Copyright 2016-2025 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**
 * @file    LPC54606_Project_2.c
 * @brief   Application entry point.
 */
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "fsl_debug_console.h"
/* TODO: insert other include files here. */

/* TODO: insert other definitions and declarations here. */

/*
 * @brief   Application entry point.
 */
int main(void) {

    /* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
#ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
    BOARD_InitDebugConsole();
#endif

    PRINTF("Hello World\r\n");


    PRINTF("3-9-2025\r\n");

<<<<<<< HEAD

    PRINTF("6-9-2025\r\n");

    PRINTF("7-9-2025\r\n");
=======
    PRINTF("4-9-2025\r\n");
    PRINTF("5-9-2025\r\n");
>>>>>>> 4af103180d94364eb0e883994288b28cff8ca603

     PRINTF("8-9-2025\r\n");
    PRINTF("9-9-2025\r\n");

    /* Force the counter to be placed into memory. */
    volatile static int i = 0 ;
    /* Enter an infinite loop, just incrementing a counter. */

    PRINTF("Hello World\r\n");


        PRINTF("3-9-2025\r\n");
    while(1) {
        i++ ;
        /* 'Dummy' NOP to allow source level single stepping of
            tight while() loop */
        __asm volatile ("nop");

         PRINTF("8-9-2025\r\n");
    PRINTF("9-9-2025\r\n");
    }
    return 0 ;
}
