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
/* Date Generated: 2025/09/30                                           */
/************************************************************************/
#ifndef INTERRUPT_HANDLERS_H
#define INTERRUPT_HANDLERS_H

/*
 * INT_WDTI (0x4)
 */
void INT_WDTI(void) __attribute__ ((interrupt));

/*
 * INT_LVI (0x6)
 */
void INT_LVI(void) __attribute__ ((interrupt));

/*
 * INT_P1 (0xA)
 */
void INT_P1(void) __attribute__ ((interrupt));

/*
 * INT_P2 (0xC)
 */
void INT_P2(void) __attribute__ ((interrupt));

/*
 * INT_P3 (0xE)
 */
void INT_P3(void) __attribute__ ((interrupt));

/*
 * INT_P4 (0x10)
 */
void INT_P4(void) __attribute__ ((interrupt));

/*
 * INT_P5 (0x12)
 */
void INT_P5(void) __attribute__ ((interrupt));

/*
 * INT_CLM (0x14)
 */
void INT_CLM(void) __attribute__ ((interrupt));

/*
 * INT_CSI00 (0x16)
 */
void INT_CSI00(void) __attribute__ ((interrupt));

/*
 * INT_CSI01 (0x18)
 */
void INT_CSI01(void) __attribute__ ((interrupt));

/*
 * INT_DMA0 (0x1A)
 */
void INT_DMA0(void) __attribute__ ((interrupt));

/*
 * INT_DMA1 (0x1C)
 */
void INT_DMA1(void) __attribute__ ((interrupt));

/*
 * INT_RTC (0x1E)
 */
void INT_RTC(void) __attribute__ ((interrupt));

/*
 * INT_IT (0x20)
 */
void INT_IT(void) __attribute__ ((interrupt));

/*
 * INT_SG (0x2A)
 */
void INT_SG(void) __attribute__ ((interrupt));

/*
 * INT_TM00 (0x2C)
 */
void INT_TM00(void) __attribute__ ((interrupt));

/*
 * INT_TM01 (0x2E)
 */
void INT_TM01(void) __attribute__ ((interrupt));

/*
 * INT_TM02 (0x30)
 */
void INT_TM02(void) __attribute__ ((interrupt));

/*
 * INT_TM03 (0x32)
 */
void INT_TM03(void) __attribute__ ((interrupt));

/*
 * INT_AD (0x34)
 */
void INT_AD(void) __attribute__ ((interrupt));

/*
 * INT_LT1 (0x36)
 */
void INT_LT1(void) __attribute__ ((interrupt));

/*
 * INT_LR1 (0x38)
 */
void INT_LR1(void) __attribute__ ((interrupt));

/*
 * INT_LS1 (0x3A)
 */
void INT_LS1(void) __attribute__ ((interrupt));

/*
 * INT_PLR1 (0x3C)
 */
void INT_PLR1(void) __attribute__ ((interrupt));

/*
 * INT_IIC11 (0x40)
 */
void INT_IIC11(void) __attribute__ ((interrupt));

/*
 * INT_TM04 (0x42)
 */
void INT_TM04(void) __attribute__ ((interrupt));

/*
 * INT_TM05 (0x44)
 */
void INT_TM05(void) __attribute__ ((interrupt));

/*
 * INT_TM06 (0x46)
 */
void INT_TM06(void) __attribute__ ((interrupt));

/*
 * INT_TM07 (0x48)
 */
void INT_TM07(void) __attribute__ ((interrupt));

/*
 * INT_TM10 (0x56)
 */
void INT_TM10(void) __attribute__ ((interrupt));

/*
 * INT_TM11 (0x58)
 */
void INT_TM11(void) __attribute__ ((interrupt));

/*
 * INT_TM12 (0x5A)
 */
void INT_TM12(void) __attribute__ ((interrupt));

/*
 * INT_TM13 (0x5C)
 */
void INT_TM13(void) __attribute__ ((interrupt));

/*
 * INT_MD (0x5E)
 */
void INT_MD(void) __attribute__ ((interrupt));

/*
 * INT_FL (0x62)
 */
void INT_FL(void) __attribute__ ((interrupt));

/*
 * INT_TM14 (0x66)
 */
void INT_TM14(void) __attribute__ ((interrupt));

/*
 * INT_TM15 (0x68)
 */
void INT_TM15(void) __attribute__ ((interrupt));

/*
 * INT_TM16 (0x6A)
 */
void INT_TM16(void) __attribute__ ((interrupt));

/*
 * INT_TM17 (0x6C)
 */
void INT_TM17(void) __attribute__ ((interrupt));

/*
 * INT_TM20 (0x6E)
 */
void INT_TM20(void) __attribute__ ((interrupt));

/*
 * INT_TM21 (0x70)
 */
void INT_TM21(void) __attribute__ ((interrupt));

/*
 * INT_TM22 (0x72)
 */
void INT_TM22(void) __attribute__ ((interrupt));

/*
 * INT_TM23 (0x74)
 */
void INT_TM23(void) __attribute__ ((interrupt));

/*
 * INT_TM24 (0x76)
 */
void INT_TM24(void) __attribute__ ((interrupt));

/*
 * INT_TM26 (0x78)
 */
void INT_TM26(void) __attribute__ ((interrupt));

/*
 * INT_BRK_I (0x7E)
 */
void INT_BRK_I(void) __attribute__ ((interrupt));

//Hardware Vectors
//PowerON_Reset (0x0)
void PowerON_Reset(void) __attribute__ ((interrupt));
#endif
