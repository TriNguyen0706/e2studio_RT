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

#ifndef __INTRINSIC_FUNCTIONS
#define __INTRINSIC_FUNCTIONS

#define DI() __builtin_rl78_di()
#define EI() __builtin_rl78_ei()
#define HALT() __halt()
#define NOP() __nop()
#define STOP() __stop()

#endif

#ifndef __IOREG_BIT_STRUCTURES
#define __IOREG_BIT_STRUCTURES
typedef struct {
	unsigned char no0 :1;
	unsigned char no1 :1;
	unsigned char no2 :1;
	unsigned char no3 :1;
	unsigned char no4 :1;
	unsigned char no5 :1;
	unsigned char no6 :1;
	unsigned char no7 :1;
} __BITS8;

typedef struct {
	unsigned short no0 :1;
	unsigned short no1 :1;
	unsigned short no2 :1;
	unsigned short no3 :1;
	unsigned short no4 :1;
	unsigned short no5 :1;
	unsigned short no6 :1;
	unsigned short no7 :1;
	unsigned short no8 :1;
	unsigned short no9 :1;
	unsigned short no10 :1;
	unsigned short no11 :1;
	unsigned short no12 :1;
	unsigned short no13 :1;
	unsigned short no14 :1;
	unsigned short no15 :1;
} __BITS16;

#endif

#ifndef IODEFINE_EXT_H
#define IODEFINE_EXT_H

/*
 IO Registers
 */
union un_adm2 {
	unsigned char adm2;
	__BITS8 BIT;
};
union un_pu0 {
	unsigned char pu0;
	__BITS8 BIT;
};
union un_pu1 {
	unsigned char pu1;
	__BITS8 BIT;
};
union un_pu3 {
	unsigned char pu3;
	__BITS8 BIT;
};
union un_pu4 {
	unsigned char pu4;
	__BITS8 BIT;
};
union un_pu5 {
	unsigned char pu5;
	__BITS8 BIT;
};
union un_pu6 {
	unsigned char pu6;
	__BITS8 BIT;
};
union un_pu7 {
	unsigned char pu7;
	__BITS8 BIT;
};
union un_pu8 {
	unsigned char pu8;
	__BITS8 BIT;
};
union un_pu9 {
	unsigned char pu9;
	__BITS8 BIT;
};
union un_pim0 {
	unsigned char pim0;
	__BITS8 BIT;
};
union un_pim1 {
	unsigned char pim1;
	__BITS8 BIT;
};
union un_pim3 {
	unsigned char pim3;
	__BITS8 BIT;
};
union un_pim5 {
	unsigned char pim5;
	__BITS8 BIT;
};
union un_pim6 {
	unsigned char pim6;
	__BITS8 BIT;
};
union un_lcdpf0 {
	unsigned char lcdpf0;
	__BITS8 BIT;
};
union un_lcdpf1 {
	unsigned char lcdpf1;
	__BITS8 BIT;
};
union un_lcdpf3 {
	unsigned char lcdpf3;
	__BITS8 BIT;
};
union un_lcdpf5 {
	unsigned char lcdpf5;
	__BITS8 BIT;
};
union un_lcdpf7 {
	unsigned char lcdpf7;
	__BITS8 BIT;
};
union un_lcdpf8 {
	unsigned char lcdpf8;
	__BITS8 BIT;
};
union un_lcdpf9 {
	unsigned char lcdpf9;
	__BITS8 BIT;
};
union un_tnfen0 {
	unsigned char tnfen0;
	__BITS8 BIT;
};
union un_tnfsmp0 {
	unsigned char tnfsmp0;
	__BITS8 BIT;
};
union un_tnfcs0 {
	unsigned char tnfcs0;
	__BITS8 BIT;
};
union un_tnfen1 {
	unsigned char tnfen1;
	__BITS8 BIT;
};
union un_tnfsmp1 {
	unsigned char tnfsmp1;
	__BITS8 BIT;
};
union un_tnfcs1 {
	unsigned char tnfcs1;
	__BITS8 BIT;
};
union un_tnfen2 {
	unsigned char tnfen2;
	__BITS8 BIT;
};
union un_tnfsmp2 {
	unsigned char tnfsmp2;
	__BITS8 BIT;
};
union un_tnfcs2 {
	unsigned char tnfcs2;
	__BITS8 BIT;
};
union un_snfen0 {
	unsigned char snfen0;
	__BITS8 BIT;
};
union un_pom {
	unsigned char pom;
	__BITS8 BIT;
};
union un_tis00 {
	unsigned char tis00;
	__BITS8 BIT;
};
union un_tis01 {
	unsigned char tis01;
	__BITS8 BIT;
};
union un_tis10 {
	unsigned char tis10;
	__BITS8 BIT;
};
union un_tis11 {
	unsigned char tis11;
	__BITS8 BIT;
};
union un_tis20 {
	unsigned char tis20;
	__BITS8 BIT;
};
union un_tis21 {
	unsigned char tis21;
	__BITS8 BIT;
};
union un_tos00 {
	unsigned char tos00;
	__BITS8 BIT;
};
union un_tos01 {
	unsigned char tos01;
	__BITS8 BIT;
};
union un_tos10 {
	unsigned char tos10;
	__BITS8 BIT;
};
union un_tos11 {
	unsigned char tos11;
	__BITS8 BIT;
};
union un_tos20 {
	unsigned char tos20;
	__BITS8 BIT;
};
union un_tos21 {
	unsigned char tos21;
	__BITS8 BIT;
};
union un_dflctl {
	unsigned char dflctl;
	__BITS8 BIT;
};
union un_mduc {
	unsigned char mduc;
	__BITS8 BIT;
};
union un_per0 {
	unsigned char per0;
	__BITS8 BIT;
};
union un_per1 {
	unsigned char per1;
	__BITS8 BIT;
};
union un_pcksel {
	unsigned char pcksel;
	__BITS8 BIT;
};
union un_rpectl {
	unsigned char rpectl;
	__BITS8 BIT;
};
union un_rtccl {
	unsigned char rtccl;
	__BITS8 BIT;
};
union un_pocres {
	unsigned char pocres;
	__BITS8 BIT;
};
union un_guard {
	unsigned char guard;
	__BITS8 BIT;
};
union un_se0l {
	unsigned char se0l;
	__BITS8 BIT;
};
union un_ss0l {
	unsigned char ss0l;
	__BITS8 BIT;
};
union un_st0l {
	unsigned char st0l;
	__BITS8 BIT;
};
union un_soe0l {
	unsigned char soe0l;
	__BITS8 BIT;
};
union un_pllsts {
	unsigned char pllsts;
	__BITS8 BIT;
};
union un_pllctl {
	unsigned char pllctl;
	__BITS8 BIT;
};
union un_se1l {
	unsigned char se1l;
	__BITS8 BIT;
};
union un_ss1l {
	unsigned char ss1l;
	__BITS8 BIT;
};
union un_st1l {
	unsigned char st1l;
	__BITS8 BIT;
};
union un_soe1l {
	unsigned char soe1l;
	__BITS8 BIT;
};
union un_zpds0 {
	unsigned char zpds0;
	__BITS8 BIT;
};
union un_cmpctl {
	unsigned char cmpctl;
	__BITS8 BIT;
};
union un_zpden {
	unsigned char zpden;
	__BITS8 BIT;
};
union un_mcntc0 {
	unsigned char mcntc0;
	__BITS8 BIT;
};
union un_mcmpc1 {
	unsigned char mcmpc1;
	__BITS8 BIT;
};
union un_te0l {
	unsigned char te0l;
	__BITS8 BIT;
};
union un_ts0l {
	unsigned char ts0l;
	__BITS8 BIT;
};
union un_tt0l {
	unsigned char tt0l;
	__BITS8 BIT;
};
union un_toe0l {
	unsigned char toe0l;
	__BITS8 BIT;
};
union un_te1l {
	unsigned char te1l;
	__BITS8 BIT;
};
union un_ts1l {
	unsigned char ts1l;
	__BITS8 BIT;
};
union un_tt1l {
	unsigned char tt1l;
	__BITS8 BIT;
};
union un_toe1l {
	unsigned char toe1l;
	__BITS8 BIT;
};
union un_te2l {
	unsigned char te2l;
	__BITS8 BIT;
};
union un_ts2l {
	unsigned char ts2l;
	__BITS8 BIT;
};
union un_tt2l {
	unsigned char tt2l;
	__BITS8 BIT;
};
union un_toe2l {
	unsigned char toe2l;
	__BITS8 BIT;
};
union un_uf1ctl0 {
	unsigned char uf1ctl0;
	__BITS8 BIT;
};
union un_uf1opt0 {
	unsigned char uf1opt0;
	__BITS8 BIT;
};
union un_uf1opt1 {
	unsigned char uf1opt1;
	__BITS8 BIT;
};
union un_uf1opt2 {
	unsigned char uf1opt2;
	__BITS8 BIT;
};
union un_sg0ctl {
	unsigned char sg0ctl;
	__BITS8 BIT;
};
union un_crc0ctl {
	unsigned char crc0ctl;
	__BITS8 BIT;
};

#define ADM2 (*(volatile union un_adm2 *)0xF0010).adm2
#define ADM2_bit (*(volatile union un_adm2 *)0xF0010).BIT
#define ADUL (*(volatile unsigned char *)0xF0011)
#define ADLL (*(volatile unsigned char *)0xF0012)
#define ADTES (*(volatile unsigned char *)0xF0013)
#define PU0 (*(volatile union un_pu0 *)0xF0030).pu0
#define PU0_bit (*(volatile union un_pu0 *)0xF0030).BIT
#define PU1 (*(volatile union un_pu1 *)0xF0031).pu1
#define PU1_bit (*(volatile union un_pu1 *)0xF0031).BIT
#define PU3 (*(volatile union un_pu3 *)0xF0033).pu3
#define PU3_bit (*(volatile union un_pu3 *)0xF0033).BIT
#define PU4 (*(volatile union un_pu4 *)0xF0034).pu4
#define PU4_bit (*(volatile union un_pu4 *)0xF0034).BIT
#define PU5 (*(volatile union un_pu5 *)0xF0035).pu5
#define PU5_bit (*(volatile union un_pu5 *)0xF0035).BIT
#define PU6 (*(volatile union un_pu6 *)0xF0036).pu6
#define PU6_bit (*(volatile union un_pu6 *)0xF0036).BIT
#define PU7 (*(volatile union un_pu7 *)0xF0037).pu7
#define PU7_bit (*(volatile union un_pu7 *)0xF0037).BIT
#define PU8 (*(volatile union un_pu8 *)0xF0038).pu8
#define PU8_bit (*(volatile union un_pu8 *)0xF0038).BIT
#define PU9 (*(volatile union un_pu9 *)0xF0039).pu9
#define PU9_bit (*(volatile union un_pu9 *)0xF0039).BIT
#define PIM0 (*(volatile union un_pim0 *)0xF0040).pim0
#define PIM0_bit (*(volatile union un_pim0 *)0xF0040).BIT
#define PIM1 (*(volatile union un_pim1 *)0xF0041).pim1
#define PIM1_bit (*(volatile union un_pim1 *)0xF0041).BIT
#define PIM3 (*(volatile union un_pim3 *)0xF0043).pim3
#define PIM3_bit (*(volatile union un_pim3 *)0xF0043).BIT
#define PIM5 (*(volatile union un_pim5 *)0xF0045).pim5
#define PIM5_bit (*(volatile union un_pim5 *)0xF0045).BIT
#define PIM6 (*(volatile union un_pim6 *)0xF0046).pim6
#define PIM6_bit (*(volatile union un_pim6 *)0xF0046).BIT
#define LCDPF0 (*(volatile union un_lcdpf0 *)0xF0050).lcdpf0
#define LCDPF0_bit (*(volatile union un_lcdpf0 *)0xF0050).BIT
#define LCDPF1 (*(volatile union un_lcdpf1 *)0xF0051).lcdpf1
#define LCDPF1_bit (*(volatile union un_lcdpf1 *)0xF0051).BIT
#define LCDPF3 (*(volatile union un_lcdpf3 *)0xF0053).lcdpf3
#define LCDPF3_bit (*(volatile union un_lcdpf3 *)0xF0053).BIT
#define LCDPF5 (*(volatile union un_lcdpf5 *)0xF0055).lcdpf5
#define LCDPF5_bit (*(volatile union un_lcdpf5 *)0xF0055).BIT
#define LCDPF7 (*(volatile union un_lcdpf7 *)0xF0057).lcdpf7
#define LCDPF7_bit (*(volatile union un_lcdpf7 *)0xF0057).BIT
#define LCDPF8 (*(volatile union un_lcdpf8 *)0xF0058).lcdpf8
#define LCDPF8_bit (*(volatile union un_lcdpf8 *)0xF0058).BIT
#define LCDPF9 (*(volatile union un_lcdpf9 *)0xF0059).lcdpf9
#define LCDPF9_bit (*(volatile union un_lcdpf9 *)0xF0059).BIT
#define TNFEN0 (*(volatile union un_tnfen0 *)0xF0060).tnfen0
#define TNFEN0_bit (*(volatile union un_tnfen0 *)0xF0060).BIT
#define TNFSMP0 (*(volatile union un_tnfsmp0 *)0xF0061).tnfsmp0
#define TNFSMP0_bit (*(volatile union un_tnfsmp0 *)0xF0061).BIT
#define TNFCS0 (*(volatile union un_tnfcs0 *)0xF0062).tnfcs0
#define TNFCS0_bit (*(volatile union un_tnfcs0 *)0xF0062).BIT
#define TNFEN1 (*(volatile union un_tnfen1 *)0xF0064).tnfen1
#define TNFEN1_bit (*(volatile union un_tnfen1 *)0xF0064).BIT
#define TNFSMP1 (*(volatile union un_tnfsmp1 *)0xF0065).tnfsmp1
#define TNFSMP1_bit (*(volatile union un_tnfsmp1 *)0xF0065).BIT
#define TNFCS1 (*(volatile union un_tnfcs1 *)0xF0066).tnfcs1
#define TNFCS1_bit (*(volatile union un_tnfcs1 *)0xF0066).BIT
#define TNFEN2 (*(volatile union un_tnfen2 *)0xF0068).tnfen2
#define TNFEN2_bit (*(volatile union un_tnfen2 *)0xF0068).BIT
#define TNFSMP2 (*(volatile union un_tnfsmp2 *)0xF0069).tnfsmp2
#define TNFSMP2_bit (*(volatile union un_tnfsmp2 *)0xF0069).BIT
#define TNFCS2 (*(volatile union un_tnfcs2 *)0xF006A).tnfcs2
#define TNFCS2_bit (*(volatile union un_tnfcs2 *)0xF006A).BIT
#define SNFEN0 (*(volatile union un_snfen0 *)0xF006D).snfen0
#define SNFEN0_bit (*(volatile union un_snfen0 *)0xF006D).BIT
#define ADPC (*(volatile unsigned char *)0xF006E)
#define POM (*(volatile union un_pom *)0xF006F).pom
#define POM_bit (*(volatile union un_pom *)0xF006F).BIT
#define TIS00 (*(volatile union un_tis00 *)0xF0070).tis00
#define TIS00_bit (*(volatile union un_tis00 *)0xF0070).BIT
#define TIS01 (*(volatile union un_tis01 *)0xF0071).tis01
#define TIS01_bit (*(volatile union un_tis01 *)0xF0071).BIT
#define TIS10 (*(volatile union un_tis10 *)0xF0072).tis10
#define TIS10_bit (*(volatile union un_tis10 *)0xF0072).BIT
#define TIS11 (*(volatile union un_tis11 *)0xF0073).tis11
#define TIS11_bit (*(volatile union un_tis11 *)0xF0073).BIT
#define TIS20 (*(volatile union un_tis20 *)0xF0074).tis20
#define TIS20_bit (*(volatile union un_tis20 *)0xF0074).BIT
#define TIS21 (*(volatile union un_tis21 *)0xF0075).tis21
#define TIS21_bit (*(volatile union un_tis21 *)0xF0075).BIT
#define TOS00 (*(volatile union un_tos00 *)0xF0076).tos00
#define TOS00_bit (*(volatile union un_tos00 *)0xF0076).BIT
#define TOS01 (*(volatile union un_tos01 *)0xF0077).tos01
#define TOS01_bit (*(volatile union un_tos01 *)0xF0077).BIT
#define IAWCTL (*(volatile unsigned char *)0xF0078)
#define TOS10 (*(volatile union un_tos10 *)0xF0079).tos10
#define TOS10_bit (*(volatile union un_tos10 *)0xF0079).BIT
#define TOS11 (*(volatile union un_tos11 *)0xF007A).tos11
#define TOS11_bit (*(volatile union un_tos11 *)0xF007A).BIT
#define TOS20 (*(volatile union un_tos20 *)0xF007B).tos20
#define TOS20_bit (*(volatile union un_tos20 *)0xF007B).BIT
#define TOS21 (*(volatile union un_tos21 *)0xF007C).tos21
#define TOS21_bit (*(volatile union un_tos21 *)0xF007C).BIT
#define DFLCTL (*(volatile union un_dflctl *)0xF0090).dflctl
#define DFLCTL_bit (*(volatile union un_dflctl *)0xF0090).BIT
#define HIOTRM (*(volatile unsigned char *)0xF00A0)
#define MDCL (*(volatile unsigned short *)0xF00E0)
#define MDCH (*(volatile unsigned short *)0xF00E2)
#define MDUC (*(volatile union un_mduc *)0xF00E8).mduc
#define MDUC_bit (*(volatile union un_mduc *)0xF00E8).BIT
#define PER0 (*(volatile union un_per0 *)0xF00F0).per0
#define PER0_bit (*(volatile union un_per0 *)0xF00F0).BIT
#define PER1 (*(volatile union un_per1 *)0xF00F1).per1
#define PER1_bit (*(volatile union un_per1 *)0xF00F1).BIT
#define PCKSEL (*(volatile union un_pcksel *)0xF00F2).pcksel
#define PCKSEL_bit (*(volatile union un_pcksel *)0xF00F2).BIT
#define OSMC (*(volatile unsigned char *)0xF00F3)
#define RPECTL (*(volatile union un_rpectl *)0xF00F5).rpectl
#define RPECTL_bit (*(volatile union un_rpectl *)0xF00F5).BIT
#define MDIV (*(volatile unsigned char *)0xF00F8)
#define RTCCL (*(volatile union un_rtccl *)0xF00F9).rtccl
#define RTCCL_bit (*(volatile union un_rtccl *)0xF00F9).BIT
#define RESFCLM (*(volatile unsigned char *)0xF00FA)
#define POCRES (*(volatile union un_pocres *)0xF00FB).pocres
#define POCRES_bit (*(volatile union un_pocres *)0xF00FB).BIT
#define GUARD (*(volatile union un_guard *)0xF00FC).guard
#define GUARD_bit (*(volatile union un_guard *)0xF00FC).BIT
#define BCDADJ (*(volatile unsigned char *)0xF00FE)
#define SSR00 (*(volatile unsigned short *)0xF0100)
#define SSR00L (*(volatile unsigned char *)0xF0100)
#define SSR01 (*(volatile unsigned short *)0xF0102)
#define SSR01L (*(volatile unsigned char *)0xF0102)
#define SIR00 (*(volatile unsigned short *)0xF0104)
#define SIR00L (*(volatile unsigned char *)0xF0104)
#define SIR01 (*(volatile unsigned short *)0xF0106)
#define SIR01L (*(volatile unsigned char *)0xF0106)
#define SMR00 (*(volatile unsigned short *)0xF0108)
#define SMR01 (*(volatile unsigned short *)0xF010A)
#define SCR00 (*(volatile unsigned short *)0xF010C)
#define SCR01 (*(volatile unsigned short *)0xF010E)
#define SE0 (*(volatile unsigned short *)0xF0110)
#define SE0L (*(volatile union un_se0l *)0xF0110).se0l
#define SE0L_bit (*(volatile union un_se0l *)0xF0110).BIT
#define SS0 (*(volatile unsigned short *)0xF0112)
#define SS0L (*(volatile union un_ss0l *)0xF0112).ss0l
#define SS0L_bit (*(volatile union un_ss0l *)0xF0112).BIT
#define ST0 (*(volatile unsigned short *)0xF0114)
#define ST0L (*(volatile union un_st0l *)0xF0114).st0l
#define ST0L_bit (*(volatile union un_st0l *)0xF0114).BIT
#define SPS0 (*(volatile unsigned short *)0xF0116)
#define SPS0L (*(volatile unsigned char *)0xF0116)
#define SO0 (*(volatile unsigned short *)0xF0118)
#define SOE0 (*(volatile unsigned short *)0xF011A)
#define SOE0L (*(volatile union un_soe0l *)0xF011A).soe0l
#define SOE0L_bit (*(volatile union un_soe0l *)0xF011A).BIT
#define SOL0 (*(volatile unsigned short *)0xF0120)
#define SOL0L (*(volatile unsigned char *)0xF0120)
#define PLLSTS (*(volatile union un_pllsts *)0xF0128).pllsts
#define PLLSTS_bit (*(volatile union un_pllsts *)0xF0128).BIT
#define PLLCTL (*(volatile union un_pllctl *)0xF0129).pllctl
#define PLLCTL_bit (*(volatile union un_pllctl *)0xF0129).BIT
#define SSR11 (*(volatile unsigned short *)0xF0132)
#define SSR11L (*(volatile unsigned char *)0xF0132)
#define SIR11 (*(volatile unsigned short *)0xF0136)
#define SIR11L (*(volatile unsigned char *)0xF0136)
#define SMR11 (*(volatile unsigned short *)0xF013A)
#define SCR11 (*(volatile unsigned short *)0xF013E)
#define SE1 (*(volatile unsigned short *)0xF0140)
#define SE1L (*(volatile union un_se1l *)0xF0140).se1l
#define SE1L_bit (*(volatile union un_se1l *)0xF0140).BIT
#define SS1 (*(volatile unsigned short *)0xF0142)
#define SS1L (*(volatile union un_ss1l *)0xF0142).ss1l
#define SS1L_bit (*(volatile union un_ss1l *)0xF0142).BIT
#define ST1 (*(volatile unsigned short *)0xF0144)
#define ST1L (*(volatile union un_st1l *)0xF0144).st1l
#define ST1L_bit (*(volatile union un_st1l *)0xF0144).BIT
#define SPS1 (*(volatile unsigned short *)0xF0146)
#define SPS1L (*(volatile unsigned char *)0xF0146)
#define SO1 (*(volatile unsigned short *)0xF0148)
#define SO1L (*(volatile unsigned char *)0xF0148)
#define SOE1 (*(volatile unsigned short *)0xF014A)
#define SOE1L (*(volatile union un_soe1l *)0xF014A).soe1l
#define SOE1L_bit (*(volatile union un_soe1l *)0xF014A).BIT
#define SOL1 (*(volatile unsigned short *)0xF0150)
#define SOL1L (*(volatile unsigned char *)0xF0150)
#define ZPDS0 (*(volatile union un_zpds0 *)0xF015C).zpds0
#define ZPDS0_bit (*(volatile union un_zpds0 *)0xF015C).BIT
#define CMPCTL (*(volatile union un_cmpctl *)0xF015E).cmpctl
#define CMPCTL_bit (*(volatile union un_cmpctl *)0xF015E).BIT
#define ZPDEN (*(volatile union un_zpden *)0xF015F).zpden
#define ZPDEN_bit (*(volatile union un_zpden *)0xF015F).BIT
#define MCNTC0 (*(volatile union un_mcntc0 *)0xF0160).mcntc0
#define MCNTC0_bit (*(volatile union un_mcntc0 *)0xF0160).BIT
#define MCMP1HW (*(volatile unsigned short *)0xF0162)
#define MCMP10 (*(volatile unsigned char *)0xF0162)
#define MCMP11 (*(volatile unsigned char *)0xF0163)
#define MCMPC1 (*(volatile union un_mcmpc1 *)0xF016A).mcmpc1
#define MCMPC1_bit (*(volatile union un_mcmpc1 *)0xF016A).BIT
#define TCR00 (*(volatile unsigned short *)0xF0180)
#define TCR01 (*(volatile unsigned short *)0xF0182)
#define TCR02 (*(volatile unsigned short *)0xF0184)
#define TCR03 (*(volatile unsigned short *)0xF0186)
#define TCR04 (*(volatile unsigned short *)0xF0188)
#define TCR05 (*(volatile unsigned short *)0xF018A)
#define TCR06 (*(volatile unsigned short *)0xF018C)
#define TCR07 (*(volatile unsigned short *)0xF018E)
#define TMR00 (*(volatile unsigned short *)0xF0190)
#define TMR01 (*(volatile unsigned short *)0xF0192)
#define TMR02 (*(volatile unsigned short *)0xF0194)
#define TMR03 (*(volatile unsigned short *)0xF0196)
#define TMR04 (*(volatile unsigned short *)0xF0198)
#define TMR05 (*(volatile unsigned short *)0xF019A)
#define TMR06 (*(volatile unsigned short *)0xF019C)
#define TMR07 (*(volatile unsigned short *)0xF019E)
#define TSR00 (*(volatile unsigned short *)0xF01A0)
#define TSR00L (*(volatile unsigned char *)0xF01A0)
#define TSR01 (*(volatile unsigned short *)0xF01A2)
#define TSR01L (*(volatile unsigned char *)0xF01A2)
#define TSR02 (*(volatile unsigned short *)0xF01A4)
#define TSR02L (*(volatile unsigned char *)0xF01A4)
#define TSR03 (*(volatile unsigned short *)0xF01A6)
#define TSR03L (*(volatile unsigned char *)0xF01A6)
#define TSR04 (*(volatile unsigned short *)0xF01A8)
#define TSR04L (*(volatile unsigned char *)0xF01A8)
#define TSR05 (*(volatile unsigned short *)0xF01AA)
#define TSR05L (*(volatile unsigned char *)0xF01AA)
#define TSR06 (*(volatile unsigned short *)0xF01AC)
#define TSR06L (*(volatile unsigned char *)0xF01AC)
#define TSR07 (*(volatile unsigned short *)0xF01AE)
#define TSR07L (*(volatile unsigned char *)0xF01AE)
#define TE0 (*(volatile unsigned short *)0xF01B0)
#define TE0L (*(volatile union un_te0l *)0xF01B0).te0l
#define TE0L_bit (*(volatile union un_te0l *)0xF01B0).BIT
#define TS0 (*(volatile unsigned short *)0xF01B2)
#define TS0L (*(volatile union un_ts0l *)0xF01B2).ts0l
#define TS0L_bit (*(volatile union un_ts0l *)0xF01B2).BIT
#define TT0 (*(volatile unsigned short *)0xF01B4)
#define TT0L (*(volatile union un_tt0l *)0xF01B4).tt0l
#define TT0L_bit (*(volatile union un_tt0l *)0xF01B4).BIT
#define TPS0 (*(volatile unsigned short *)0xF01B6)
#define TO0 (*(volatile unsigned short *)0xF01B8)
#define TO0L (*(volatile unsigned char *)0xF01B8)
#define TOE0 (*(volatile unsigned short *)0xF01BA)
#define TOE0L (*(volatile union un_toe0l *)0xF01BA).toe0l
#define TOE0L_bit (*(volatile union un_toe0l *)0xF01BA).BIT
#define TOL0 (*(volatile unsigned short *)0xF01BC)
#define TOL0L (*(volatile unsigned char *)0xF01BC)
#define TOM0 (*(volatile unsigned short *)0xF01BE)
#define TOM0L (*(volatile unsigned char *)0xF01BE)
#define TCR10 (*(volatile unsigned short *)0xF01C0)
#define TCR11 (*(volatile unsigned short *)0xF01C2)
#define TCR12 (*(volatile unsigned short *)0xF01C4)
#define TCR13 (*(volatile unsigned short *)0xF01C6)
#define TCR14 (*(volatile unsigned short *)0xF01C8)
#define TCR15 (*(volatile unsigned short *)0xF01CA)
#define TCR16 (*(volatile unsigned short *)0xF01CC)
#define TCR17 (*(volatile unsigned short *)0xF01CE)
#define TMR10 (*(volatile unsigned short *)0xF01D0)
#define TMR11 (*(volatile unsigned short *)0xF01D2)
#define TMR12 (*(volatile unsigned short *)0xF01D4)
#define TMR13 (*(volatile unsigned short *)0xF01D6)
#define TMR14 (*(volatile unsigned short *)0xF01D8)
#define TMR15 (*(volatile unsigned short *)0xF01DA)
#define TMR16 (*(volatile unsigned short *)0xF01DC)
#define TMR17 (*(volatile unsigned short *)0xF01DE)
#define TSR10 (*(volatile unsigned short *)0xF01E0)
#define TSR10L (*(volatile unsigned char *)0xF01E0)
#define TSR11 (*(volatile unsigned short *)0xF01E2)
#define TSR11L (*(volatile unsigned char *)0xF01E2)
#define TSR12 (*(volatile unsigned short *)0xF01E4)
#define TSR12L (*(volatile unsigned char *)0xF01E4)
#define TSR13 (*(volatile unsigned short *)0xF01E6)
#define TSR13L (*(volatile unsigned char *)0xF01E6)
#define TSR14 (*(volatile unsigned short *)0xF01E8)
#define TSR14L (*(volatile unsigned char *)0xF01E8)
#define TSR15 (*(volatile unsigned short *)0xF01EA)
#define TSR15L (*(volatile unsigned char *)0xF01EA)
#define TSR16 (*(volatile unsigned short *)0xF01EC)
#define TSR16L (*(volatile unsigned char *)0xF01EC)
#define TSR17 (*(volatile unsigned short *)0xF01EE)
#define TSR17L (*(volatile unsigned char *)0xF01EE)
#define TE1 (*(volatile unsigned short *)0xF01F0)
#define TE1L (*(volatile union un_te1l *)0xF01F0).te1l
#define TE1L_bit (*(volatile union un_te1l *)0xF01F0).BIT
#define TS1 (*(volatile unsigned short *)0xF01F2)
#define TS1L (*(volatile union un_ts1l *)0xF01F2).ts1l
#define TS1L_bit (*(volatile union un_ts1l *)0xF01F2).BIT
#define TT1 (*(volatile unsigned short *)0xF01F4)
#define TT1L (*(volatile union un_tt1l *)0xF01F4).tt1l
#define TT1L_bit (*(volatile union un_tt1l *)0xF01F4).BIT
#define TPS1 (*(volatile unsigned short *)0xF01F6)
#define TO1 (*(volatile unsigned short *)0xF01F8)
#define TO1L (*(volatile unsigned char *)0xF01F8)
#define TOE1 (*(volatile unsigned short *)0xF01FA)
#define TOE1L (*(volatile union un_toe1l *)0xF01FA).toe1l
#define TOE1L_bit (*(volatile union un_toe1l *)0xF01FA).BIT
#define TOL1 (*(volatile unsigned short *)0xF01FC)
#define TOL1L (*(volatile unsigned char *)0xF01FC)
#define TOM1 (*(volatile unsigned short *)0xF01FE)
#define TOM1L (*(volatile unsigned char *)0xF01FE)
#define TCR20 (*(volatile unsigned short *)0xF0200)
#define TCR21 (*(volatile unsigned short *)0xF0202)
#define TCR22 (*(volatile unsigned short *)0xF0204)
#define TCR23 (*(volatile unsigned short *)0xF0206)
#define TCR24 (*(volatile unsigned short *)0xF0208)
#define TCR25 (*(volatile unsigned short *)0xF020A)
#define TCR26 (*(volatile unsigned short *)0xF020C)
#define TCR27 (*(volatile unsigned short *)0xF020E)
#define TMR20 (*(volatile unsigned short *)0xF0210)
#define TMR21 (*(volatile unsigned short *)0xF0212)
#define TMR22 (*(volatile unsigned short *)0xF0214)
#define TMR23 (*(volatile unsigned short *)0xF0216)
#define TMR24 (*(volatile unsigned short *)0xF0218)
#define TMR25 (*(volatile unsigned short *)0xF021A)
#define TMR26 (*(volatile unsigned short *)0xF021C)
#define TMR27 (*(volatile unsigned short *)0xF021E)
#define TSR20 (*(volatile unsigned short *)0xF0220)
#define TSR20L (*(volatile unsigned char *)0xF0220)
#define TSR21 (*(volatile unsigned short *)0xF0222)
#define TSR21L (*(volatile unsigned char *)0xF0222)
#define TSR22 (*(volatile unsigned short *)0xF0224)
#define TSR22L (*(volatile unsigned char *)0xF0224)
#define TSR23 (*(volatile unsigned short *)0xF0226)
#define TSR23L (*(volatile unsigned char *)0xF0226)
#define TSR25 (*(volatile unsigned short *)0xF022A)
#define TSR25L (*(volatile unsigned char *)0xF022A)
#define TSR27 (*(volatile unsigned short *)0xF022E)
#define TSR27L (*(volatile unsigned char *)0xF022E)
#define TE2 (*(volatile unsigned short *)0xF0230)
#define TE2L (*(volatile union un_te2l *)0xF0230).te2l
#define TE2L_bit (*(volatile union un_te2l *)0xF0230).BIT
#define TS2 (*(volatile unsigned short *)0xF0232)
#define TS2L (*(volatile union un_ts2l *)0xF0232).ts2l
#define TS2L_bit (*(volatile union un_ts2l *)0xF0232).BIT
#define TT2 (*(volatile unsigned short *)0xF0234)
#define TT2L (*(volatile union un_tt2l *)0xF0234).tt2l
#define TT2L_bit (*(volatile union un_tt2l *)0xF0234).BIT
#define TPS2 (*(volatile unsigned short *)0xF0236)
#define TO2 (*(volatile unsigned short *)0xF0238)
#define TO2L (*(volatile unsigned char *)0xF0238)
#define TOE2 (*(volatile unsigned short *)0xF023A)
#define TOE2L (*(volatile union un_toe2l *)0xF023A).toe2l
#define TOE2L_bit (*(volatile union un_toe2l *)0xF023A).BIT
#define TOL2 (*(volatile unsigned short *)0xF023C)
#define TOL2L (*(volatile unsigned char *)0xF023C)
#define TOM2 (*(volatile unsigned short *)0xF023E)
#define TOM2L (*(volatile unsigned char *)0xF023E)
#define UF1CTL0 (*(volatile union un_uf1ctl0 *)0xF0260).uf1ctl0
#define UF1CTL0_bit (*(volatile union un_uf1ctl0 *)0xF0260).BIT
#define UF1OPT0 (*(volatile union un_uf1opt0 *)0xF0261).uf1opt0
#define UF1OPT0_bit (*(volatile union un_uf1opt0 *)0xF0261).BIT
#define UF1CTL1 (*(volatile unsigned short *)0xF0262)
#define UF1OPT1 (*(volatile union un_uf1opt1 *)0xF0264).uf1opt1
#define UF1OPT1_bit (*(volatile union un_uf1opt1 *)0xF0264).BIT
#define UF1OPT2 (*(volatile union un_uf1opt2 *)0xF0265).uf1opt2
#define UF1OPT2_bit (*(volatile union un_uf1opt2 *)0xF0265).BIT
#define UF1STR (*(volatile unsigned short *)0xF0266)
#define UF1STC (*(volatile unsigned short *)0xF0268)
#define UF1WTX (*(volatile unsigned short *)0xF026A)
#define UF1WTXB (*(volatile unsigned char *)0xF026A)
#define UF1ID (*(volatile unsigned char *)0xF026E)
#define UF1BUF0 (*(volatile unsigned char *)0xF026F)
#define UF1BUF1 (*(volatile unsigned char *)0xF0270)
#define UF1BUF2 (*(volatile unsigned char *)0xF0271)
#define UF1BUF3 (*(volatile unsigned char *)0xF0272)
#define UF1BUF4 (*(volatile unsigned char *)0xF0273)
#define UF1BUF5 (*(volatile unsigned char *)0xF0274)
#define UF1BUF6 (*(volatile unsigned char *)0xF0275)
#define UF1BUF7 (*(volatile unsigned char *)0xF0276)
#define UF1BUF8 (*(volatile unsigned char *)0xF0277)
#define UF1BUCTL (*(volatile unsigned short *)0xF0278)
#define SG0FL (*(volatile unsigned short *)0xF0280)
#define SG0FH (*(volatile unsigned short *)0xF0282)
#define SG0PWM (*(volatile unsigned short *)0xF0284)
#define SG0SDF (*(volatile unsigned char *)0xF0286)
#define SG0CTL (*(volatile union un_sg0ctl *)0xF0287).sg0ctl
#define SG0CTL_bit (*(volatile union un_sg0ctl *)0xF0287).BIT
#define SG0ITH (*(volatile unsigned short *)0xF0288)
#define CRC0CTL (*(volatile union un_crc0ctl *)0xF02F0).crc0ctl
#define CRC0CTL_bit (*(volatile union un_crc0ctl *)0xF02F0).BIT
#define PGCRCL (*(volatile unsigned short *)0xF02F2)
#define CRCD (*(volatile unsigned short *)0xF02FA)
#define SEG0 (*(volatile unsigned char *)0xF0300)
#define SEG1 (*(volatile unsigned char *)0xF0301)
#define SEG2 (*(volatile unsigned char *)0xF0302)
#define SEG3 (*(volatile unsigned char *)0xF0303)
#define SEG4 (*(volatile unsigned char *)0xF0304)
#define SEG5 (*(volatile unsigned char *)0xF0305)
#define SEG6 (*(volatile unsigned char *)0xF0306)
#define SEG7 (*(volatile unsigned char *)0xF0307)
#define SEG9 (*(volatile unsigned char *)0xF0309)
#define SEG14 (*(volatile unsigned char *)0xF030E)
#define SEG15 (*(volatile unsigned char *)0xF030F)
#define SEG24 (*(volatile unsigned char *)0xF0318)
#define SEG25 (*(volatile unsigned char *)0xF0319)
#define SEG26 (*(volatile unsigned char *)0xF031A)
#define SEG27 (*(volatile unsigned char *)0xF031B)
#define SEG29 (*(volatile unsigned char *)0xF031D)
#define SEG30 (*(volatile unsigned char *)0xF031E)
#define SEG31 (*(volatile unsigned char *)0xF031F)
#define SEG32 (*(volatile unsigned char *)0xF0320)
#define SEG33 (*(volatile unsigned char *)0xF0321)
#define SEG34 (*(volatile unsigned char *)0xF0322)
#define SEG35 (*(volatile unsigned char *)0xF0323)
#define SEG40 (*(volatile unsigned char *)0xF0328)
#define SEG41 (*(volatile unsigned char *)0xF0329)
#define SEG42 (*(volatile unsigned char *)0xF032A)
#define SEG43 (*(volatile unsigned char *)0xF032B)
#define SEG44 (*(volatile unsigned char *)0xF032C)

/*
 Sfr bits
 */
#define ADTYP ADM2_bit.no0
#define AWC ADM2_bit.no2
#define ADRCK ADM2_bit.no3
#define ADREFM ADM2_bit.no5
#define ADREFP0 ADM2_bit.no6
#define ADREFP1 ADM2_bit.no7
#define TNFSMP000 TNFSMP0_bit.no0
#define TNFSMP001 TNFSMP0_bit.no1
#define TNFSMP002 TNFSMP0_bit.no2
#define TNFSMP003 TNFSMP0_bit.no3
#define TNFSMP010 TNFSMP0_bit.no4
#define TNFSMP011 TNFSMP0_bit.no5
#define TNFSMP012 TNFSMP0_bit.no6
#define TNFSMP013 TNFSMP0_bit.no7
#define TNFSMP100 TNFSMP1_bit.no0
#define TNFSMP101 TNFSMP1_bit.no1
#define TNFSMP102 TNFSMP1_bit.no2
#define TNFSMP103 TNFSMP1_bit.no3
#define TNFSMP110 TNFSMP1_bit.no4
#define TNFSMP111 TNFSMP1_bit.no5
#define TNFSMP112 TNFSMP1_bit.no6
#define TNFSMP113 TNFSMP1_bit.no7
#define TNFSMP200 TNFSMP2_bit.no0
#define TNFSMP201 TNFSMP2_bit.no1
#define TNFSMP202 TNFSMP2_bit.no2
#define TNFSMP203 TNFSMP2_bit.no3
#define TNFSMP210 TNFSMP2_bit.no4
#define TNFSMP211 TNFSMP2_bit.no5
#define TNFSMP212 TNFSMP2_bit.no6
#define TNFSMP213 TNFSMP2_bit.no7
#define TIS010 TIS00_bit.no2
#define TIS011 TIS00_bit.no3
#define TIS030 TIS00_bit.no6
#define TIS050 TIS01_bit.no2
#define TIS070 TIS01_bit.no6
#define TIS110 TIS10_bit.no2
#define TIS141 TIS11_bit.no1
#define TIS151 TIS11_bit.no3
#define TIS161 TIS11_bit.no5
#define TIS170 TIS11_bit.no6
#define TIS171 TIS11_bit.no7
#define TIS200 TIS20_bit.no0
#define TIS210 TIS20_bit.no2
#define TIS211 TIS20_bit.no3
#define TIS230 TIS20_bit.no6
#define TIS231 TIS20_bit.no7
#define TIS250 TIS21_bit.no2
#define TOS010 TOS00_bit.no2
#define TOS011 TOS00_bit.no3
#define TOS030 TOS00_bit.no6
#define TOS050 TOS01_bit.no2
#define TOS070 TOS01_bit.no6
#define TOS110 TOS10_bit.no2
#define TOS141 TOS11_bit.no1
#define TOS151 TOS11_bit.no3
#define TOS161 TOS11_bit.no5
#define TOS170 TOS11_bit.no6
#define TOS171 TOS11_bit.no7
#define TOS200 TOS20_bit.no0
#define TOS210 TOS20_bit.no2
#define TOS211 TOS20_bit.no3
#define TOS230 TOS20_bit.no6
#define TOS231 TOS20_bit.no7
#define TOS250 TOS21_bit.no2
#define DFLEN DFLCTL_bit.no0
#define DIVST MDUC_bit.no0
#define MACSF MDUC_bit.no1
#define MACOF MDUC_bit.no2
#define MDSM MDUC_bit.no3
#define MACMODE MDUC_bit.no6
#define DIVMODE MDUC_bit.no7
#define TAU0EN PER0_bit.no0
#define TAU1EN PER0_bit.no1
#define TAU2EN PER0_bit.no2
#define SAU0EN PER0_bit.no3
#define SAU1EN PER0_bit.no4
#define LIN1EN PER0_bit.no6
#define RTCEN PER0_bit.no7
#define SGEN PER1_bit.no4
#define MTRCEN PER1_bit.no5
#define ADCEN PER1_bit.no7
#define SGCLKSEL PCKSEL_bit.no0
#define RPEF RPECTL_bit.no0
#define RPERDIS RPECTL_bit.no7
#define RTCCKS0 RTCCL_bit.no0
#define RTCCKS1 RTCCL_bit.no1
#define RTCCL_6 RTCCL_bit.no6
#define RTCCL_7 RTCCL_bit.no7
#define POCRES_0 POCRES_bit.no0
#define GDPLL GUARD_bit.no0
#define GDRTC GUARD_bit.no1
#define SELPLLS PLLSTS_bit.no3
#define LOCK PLLSTS_bit.no7
#define PLLON PLLCTL_bit.no0
#define SELPLL PLLCTL_bit.no2
#define PLLDIV0 PLLCTL_bit.no4
#define LCKSEL0 PLLCTL_bit.no6
#define LCKSEL1 PLLCTL_bit.no7
#define ZPD1S0 ZPDS0_bit.no0
#define ZPD1S1 ZPDS0_bit.no1
#define ZPD1S2 ZPDS0_bit.no2
#define ZPD1PC ZPDS0_bit.no3
#define DBCL0 CMPCTL_bit.no0
#define DBCL1 CMPCTL_bit.no1
#define DBCL2 CMPCTL_bit.no2
#define DBCL3 CMPCTL_bit.no3
#define ZPD1EN ZPDEN_bit.no0
#define SMCL0 MCNTC0_bit.no0
#define SMCL1 MCNTC0_bit.no1
#define SMCL2 MCNTC0_bit.no2
#define PCS MCNTC0_bit.no3
#define PCE MCNTC0_bit.no4
#define FULL MCNTC0_bit.no5
#define CAE MCNTC0_bit.no7
#define DIR10 MCMPC1_bit.no0
#define DIR11 MCMPC1_bit.no1
#define ADB10 MCMPC1_bit.no2
#define ADB11 MCMPC1_bit.no3
#define TEN1 MCMPC1_bit.no4
#define ZPD1 MCMPC1_bit.no5
#define TWIN1 MCMPC1_bit.no6
#define AOUT1 MCMPC1_bit.no7
#define UF1SL UF1CTL0_bit.no0
#define UF1CL UF1CTL0_bit.no1
#define UF1PS0 UF1CTL0_bit.no2
#define UF1PS1 UF1CTL0_bit.no3
#define UF1DIR UF1CTL0_bit.no4
#define UF1RXE UF1CTL0_bit.no5
#define UF1TXE UF1CTL0_bit.no6
#define UF1RDL UF1OPT0_bit.no0
#define UF1TDL UF1OPT0_bit.no1
#define UF1BLS0 UF1OPT0_bit.no2
#define UF1BLS1 UF1OPT0_bit.no3
#define UF1BLS2 UF1OPT0_bit.no4
#define UF1BTT UF1OPT0_bit.no5
#define UF1BRT UF1OPT0_bit.no6
#define UF1BRF UF1OPT0_bit.no7
#define UF1DCS UF1OPT1_bit.no0
#define UF1MD0 UF1OPT1_bit.no1
#define UF1MD1 UF1OPT1_bit.no2
#define UF1ACE UF1OPT1_bit.no3
#define UF1IPCS UF1OPT1_bit.no4
#define UF1EBC UF1OPT1_bit.no5
#define UF1EBL UF1OPT1_bit.no6
#define UF1EBE UF1OPT1_bit.no7
#define UF1ITS UF1OPT2_bit.no0
#define UF1RXFL UF1OPT2_bit.no1
#define SG0ALDS SG0CTL_bit.no0
#define SG0OS SG0CTL_bit.no1
#define SG0PWR SG0CTL_bit.no4
#define FEA0 CRC0CTL_bit.no0
#define FEA1 CRC0CTL_bit.no1
#define FEA2 CRC0CTL_bit.no2
#define FEA3 CRC0CTL_bit.no3
#define FEA4 CRC0CTL_bit.no4
#define FEA5 CRC0CTL_bit.no5
#define CRC0EN CRC0CTL_bit.no7

/*
 Interrupt vector addresses
 */
#endif
