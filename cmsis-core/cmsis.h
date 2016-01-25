/* mbed Microcontroller Library - CMSIS
 * Copyright (C) 2009-2011 ARM Limited. All rights reserved.
 *
 * A generic CMSIS include header, pulling in EFM32 specifics
 */

#ifndef MBED_CMSIS_H
#define MBED_CMSIS_H

#include "em_device.h"

#if (defined (__GNUC__) && (!defined(__CC_ARM)))
    extern uint32_t __start_vector_table__;		  // Dynamic vector positioning in GCC
#endif
#include "cmsis_nvic.h"

#endif
