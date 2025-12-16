/*
* Copyright (c) 2012 (2025) Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/
/************************************************************************/
/* Header file generated from device file:                              */
/*    DR5F10CGB.DVF                                                     */
/*    V1.01 (2012/08/21)                                                */
/* Tool Version: 4.0.26                                                 */
/* Date Generated: 2025/10/02                                           */
/************************************************************************/
#include "interrupt_handlers.h"

extern void PowerON_Reset (void);

const unsigned char Option_Bytes[]  __attribute__ ((section (".option_bytes"))) = {
	0xef, 0xff, 0xe8, 0x85
};

const unsigned char Security_Id[]  __attribute__ ((section (".security_id"))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char Debug_Monitor[]  __attribute__ ((section (".debug_monitor"))) = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

#define VEC          __attribute__ ((section (".vec")))
const void __near *HardwareVectors[] VEC = {
	// Address 0x0
	PowerON_Reset,
	// Secure for Debugging
	(void*)0xFFFF
};

#define VECT_SECT          __attribute__ ((section (".vects")))
const void __near *Vectors[] VECT_SECT = {
	//INT_WDTI (0x4)
	INT_WDTI,
	//INT_LVI (0x6)
	INT_LVI,
	// Padding
	(void*)0xFFFF,
	//INT_P1 (0xA)
	INT_P1,
	//INT_P2 (0xC)
	INT_P2,
	//INT_P3 (0xE)
	INT_P3,
	//INT_P4 (0x10)
	INT_P4,
	//INT_P5 (0x12)
	INT_P5,
	//INT_CLM (0x14)
	INT_CLM,
	//INT_CSI00 (0x16)
	INT_CSI00,
	//INT_CSI01 (0x18)
	INT_CSI01,
	//INT_DMA0 (0x1A)
	INT_DMA0,
	//INT_DMA1 (0x1C)
	INT_DMA1,
	//INT_RTC (0x1E)
	INT_RTC,
	//INT_IT (0x20)
	INT_IT,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	//INT_SG (0x2A)
	INT_SG,
	//INT_TM00 (0x2C)
	INT_TM00,
	//INT_TM01 (0x2E)
	INT_TM01,
	//INT_TM02 (0x30)
	INT_TM02,
	//INT_TM03 (0x32)
	INT_TM03,
	//INT_AD (0x34)
	INT_AD,
	//INT_LT1 (0x36)
	INT_LT1,
	//INT_LR1 (0x38)
	INT_LR1,
	//INT_LS1 (0x3A)
	INT_LS1,
	//INT_PLR1 (0x3C)
	INT_PLR1,
	// Padding
	(void*)0xFFFF,
	//INT_IIC11 (0x40)
	INT_IIC11,
	//INT_TM04 (0x42)
	INT_TM04,
	//INT_TM05 (0x44)
	INT_TM05,
	//INT_TM06 (0x46)
	INT_TM06,
	//INT_TM07 (0x48)
	INT_TM07,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	//INT_TM10 (0x56)
	INT_TM10,
	//INT_TM11 (0x58)
	INT_TM11,
	//INT_TM12 (0x5A)
	INT_TM12,
	//INT_TM13 (0x5C)
	INT_TM13,
	//INT_MD (0x5E)
	INT_MD,
	// Padding
	(void*)0xFFFF,
	//INT_FL (0x62)
	INT_FL,
	// Padding
	(void*)0xFFFF,
	//INT_TM14 (0x66)
	INT_TM14,
	//INT_TM15 (0x68)
	INT_TM15,
	//INT_TM16 (0x6A)
	INT_TM16,
	//INT_TM17 (0x6C)
	INT_TM17,
	//INT_TM20 (0x6E)
	INT_TM20,
	//INT_TM21 (0x70)
	INT_TM21,
	//INT_TM22 (0x72)
	INT_TM22,
	//INT_TM23 (0x74)
	INT_TM23,
	//INT_TM24 (0x76)
	INT_TM24,
	//INT_TM26 (0x78)
	INT_TM26,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	//INT_BRK_I (0x7E)
	INT_BRK_I,
};

