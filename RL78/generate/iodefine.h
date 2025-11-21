/*
* Copyright (c) 2022 (2025) Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/
/************************************************************************/
/* Header file generated from device file:                              */
/*    DR5F10CGB.DVF                                                     */
/*    V1.01b (2022/09/15)                                               */
/* Tool Version: 4.0.26                                                 */
/* Date Generated: 2025/09/30                                           */
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

#ifndef IODEFINE_H
#define IODEFINE_H

/*
 IO Registers
 */
union un_p0 {
	unsigned char p0;
	__BITS8 BIT;
};
union un_p1 {
	unsigned char p1;
	__BITS8 BIT;
};
union un_p2 {
	unsigned char p2;
	__BITS8 BIT;
};
union un_p3 {
	unsigned char p3;
	__BITS8 BIT;
};
union un_p4 {
	unsigned char p4;
	__BITS8 BIT;
};
union un_p5 {
	unsigned char p5;
	__BITS8 BIT;
};
union un_p6 {
	unsigned char p6;
	__BITS8 BIT;
};
union un_p7 {
	unsigned char p7;
	__BITS8 BIT;
};
union un_p8 {
	unsigned char p8;
	__BITS8 BIT;
};
union un_p9 {
	unsigned char p9;
	__BITS8 BIT;
};
union un_p12 {
	unsigned char p12;
	__BITS8 BIT;
};
union un_p13 {
	unsigned char p13;
	__BITS8 BIT;
};
union un_pm0 {
	unsigned char pm0;
	__BITS8 BIT;
};
union un_pm1 {
	unsigned char pm1;
	__BITS8 BIT;
};
union un_pm2 {
	unsigned char pm2;
	__BITS8 BIT;
};
union un_pm3 {
	unsigned char pm3;
	__BITS8 BIT;
};
union un_pm4 {
	unsigned char pm4;
	__BITS8 BIT;
};
union un_pm5 {
	unsigned char pm5;
	__BITS8 BIT;
};
union un_pm6 {
	unsigned char pm6;
	__BITS8 BIT;
};
union un_pm7 {
	unsigned char pm7;
	__BITS8 BIT;
};
union un_pm8 {
	unsigned char pm8;
	__BITS8 BIT;
};
union un_pm9 {
	unsigned char pm9;
	__BITS8 BIT;
};
union un_adm0 {
	unsigned char adm0;
	__BITS8 BIT;
};
union un_ads {
	unsigned char ads;
	__BITS8 BIT;
};
union un_adm1 {
	unsigned char adm1;
	__BITS8 BIT;
};
union un_rtcsel {
	unsigned char rtcsel;
	__BITS8 BIT;
};
union un_smpc {
	unsigned char smpc;
	__BITS8 BIT;
};
union un_egp0 {
	unsigned char egp0;
	__BITS8 BIT;
};
union un_egn0 {
	unsigned char egn0;
	__BITS8 BIT;
};
union un_stsel0 {
	unsigned char stsel0;
	__BITS8 BIT;
};
union un_stsel1 {
	unsigned char stsel1;
	__BITS8 BIT;
};
union un_tiselse {
	unsigned char tiselse;
	__BITS8 BIT;
};
union un_sgsel {
	unsigned char sgsel;
	__BITS8 BIT;
};
union un_lcdmd {
	unsigned char lcdmd;
	__BITS8 BIT;
};
union un_lcdm {
	unsigned char lcdm;
	__BITS8 BIT;
};
union un_lcdc0 {
	unsigned char lcdc0;
	__BITS8 BIT;
};
union un_rtcc0 {
	unsigned char rtcc0;
	__BITS8 BIT;
};
union un_rtcc1 {
	unsigned char rtcc1;
	__BITS8 BIT;
};
union un_csc {
	unsigned char csc;
	__BITS8 BIT;
};
union un_ostc {
	unsigned char ostc;
	__BITS8 BIT;
};
union un_ckc {
	unsigned char ckc;
	__BITS8 BIT;
};
union un_cks0 {
	unsigned char cks0;
	__BITS8 BIT;
};
union un_lvim {
	unsigned char lvim;
	__BITS8 BIT;
};
union un_lvis {
	unsigned char lvis;
	__BITS8 BIT;
};
union un_dmc0 {
	unsigned char dmc0;
	__BITS8 BIT;
};
union un_dmc1 {
	unsigned char dmc1;
	__BITS8 BIT;
};
union un_drc0 {
	unsigned char drc0;
	__BITS8 BIT;
};
union un_drc1 {
	unsigned char drc1;
	__BITS8 BIT;
};
union un_if2 {
	unsigned short if2;
	__BITS16 BIT;
};
union un_if2l {
	unsigned char if2l;
	__BITS8 BIT;
};
union un_if2h {
	unsigned char if2h;
	__BITS8 BIT;
};
union un_if3 {
	unsigned short if3;
	__BITS16 BIT;
};
union un_if3l {
	unsigned char if3l;
	__BITS8 BIT;
};
union un_if3h {
	unsigned char if3h;
	__BITS8 BIT;
};
union un_mk2 {
	unsigned short mk2;
	__BITS16 BIT;
};
union un_mk2l {
	unsigned char mk2l;
	__BITS8 BIT;
};
union un_mk2h {
	unsigned char mk2h;
	__BITS8 BIT;
};
union un_mk3 {
	unsigned short mk3;
	__BITS16 BIT;
};
union un_mk3l {
	unsigned char mk3l;
	__BITS8 BIT;
};
union un_mk3h {
	unsigned char mk3h;
	__BITS8 BIT;
};
union un_pr02 {
	unsigned short pr02;
	__BITS16 BIT;
};
union un_pr02l {
	unsigned char pr02l;
	__BITS8 BIT;
};
union un_pr02h {
	unsigned char pr02h;
	__BITS8 BIT;
};
union un_pr03 {
	unsigned short pr03;
	__BITS16 BIT;
};
union un_pr03l {
	unsigned char pr03l;
	__BITS8 BIT;
};
union un_pr03h {
	unsigned char pr03h;
	__BITS8 BIT;
};
union un_pr12 {
	unsigned short pr12;
	__BITS16 BIT;
};
union un_pr12l {
	unsigned char pr12l;
	__BITS8 BIT;
};
union un_pr12h {
	unsigned char pr12h;
	__BITS8 BIT;
};
union un_pr13 {
	unsigned short pr13;
	__BITS16 BIT;
};
union un_pr13l {
	unsigned char pr13l;
	__BITS8 BIT;
};
union un_pr13h {
	unsigned char pr13h;
	__BITS8 BIT;
};
union un_if0 {
	unsigned short if0;
	__BITS16 BIT;
};
union un_if0l {
	unsigned char if0l;
	__BITS8 BIT;
};
union un_if0h {
	unsigned char if0h;
	__BITS8 BIT;
};
union un_if1 {
	unsigned short if1;
	__BITS16 BIT;
};
union un_if1l {
	unsigned char if1l;
	__BITS8 BIT;
};
union un_if1h {
	unsigned char if1h;
	__BITS8 BIT;
};
union un_mk0 {
	unsigned short mk0;
	__BITS16 BIT;
};
union un_mk0l {
	unsigned char mk0l;
	__BITS8 BIT;
};
union un_mk0h {
	unsigned char mk0h;
	__BITS8 BIT;
};
union un_mk1 {
	unsigned short mk1;
	__BITS16 BIT;
};
union un_mk1l {
	unsigned char mk1l;
	__BITS8 BIT;
};
union un_mk1h {
	unsigned char mk1h;
	__BITS8 BIT;
};
union un_pr00 {
	unsigned short pr00;
	__BITS16 BIT;
};
union un_pr00l {
	unsigned char pr00l;
	__BITS8 BIT;
};
union un_pr00h {
	unsigned char pr00h;
	__BITS8 BIT;
};
union un_pr01 {
	unsigned short pr01;
	__BITS16 BIT;
};
union un_pr01l {
	unsigned char pr01l;
	__BITS8 BIT;
};
union un_pr01h {
	unsigned char pr01h;
	__BITS8 BIT;
};
union un_pr10 {
	unsigned short pr10;
	__BITS16 BIT;
};
union un_pr10l {
	unsigned char pr10l;
	__BITS8 BIT;
};
union un_pr10h {
	unsigned char pr10h;
	__BITS8 BIT;
};
union un_pr11 {
	unsigned short pr11;
	__BITS16 BIT;
};
union un_pr11l {
	unsigned char pr11l;
	__BITS8 BIT;
};
union un_pr11h {
	unsigned char pr11h;
	__BITS8 BIT;
};
union un_pmc {
	unsigned char pmc;
	__BITS8 BIT;
};

#define P0 (*(volatile union un_p0 *)0xFFF00).p0
#define P0_bit (*(volatile union un_p0 *)0xFFF00).BIT
#define P1 (*(volatile union un_p1 *)0xFFF01).p1
#define P1_bit (*(volatile union un_p1 *)0xFFF01).BIT
#define P2 (*(volatile union un_p2 *)0xFFF02).p2
#define P2_bit (*(volatile union un_p2 *)0xFFF02).BIT
#define P3 (*(volatile union un_p3 *)0xFFF03).p3
#define P3_bit (*(volatile union un_p3 *)0xFFF03).BIT
#define P4 (*(volatile union un_p4 *)0xFFF04).p4
#define P4_bit (*(volatile union un_p4 *)0xFFF04).BIT
#define P5 (*(volatile union un_p5 *)0xFFF05).p5
#define P5_bit (*(volatile union un_p5 *)0xFFF05).BIT
#define P6 (*(volatile union un_p6 *)0xFFF06).p6
#define P6_bit (*(volatile union un_p6 *)0xFFF06).BIT
#define P7 (*(volatile union un_p7 *)0xFFF07).p7
#define P7_bit (*(volatile union un_p7 *)0xFFF07).BIT
#define P8 (*(volatile union un_p8 *)0xFFF08).p8
#define P8_bit (*(volatile union un_p8 *)0xFFF08).BIT
#define P9 (*(volatile union un_p9 *)0xFFF09).p9
#define P9_bit (*(volatile union un_p9 *)0xFFF09).BIT
#define P12 (*(volatile union un_p12 *)0xFFF0C).p12
#define P12_bit (*(volatile union un_p12 *)0xFFF0C).BIT
#define P13 (*(volatile union un_p13 *)0xFFF0D).p13
#define P13_bit (*(volatile union un_p13 *)0xFFF0D).BIT
#define SDR00 (*(volatile unsigned short *)0xFFF10)
#define SDR00L (*(volatile unsigned char *)0xFFF10)
#define SDR01 (*(volatile unsigned short *)0xFFF12)
#define SDR01L (*(volatile unsigned char *)0xFFF12)
#define SDR11 (*(volatile unsigned short *)0xFFF16)
#define SDR11L (*(volatile unsigned char *)0xFFF16)
#define TDR00 (*(volatile unsigned short *)0xFFF18)
#define TDR01 (*(volatile unsigned short *)0xFFF1A)
#define ADCR (*(volatile unsigned short *)0xFFF1E)
#define ADCRH (*(volatile unsigned char *)0xFFF1F)
#define PM0 (*(volatile union un_pm0 *)0xFFF20).pm0
#define PM0_bit (*(volatile union un_pm0 *)0xFFF20).BIT
#define PM1 (*(volatile union un_pm1 *)0xFFF21).pm1
#define PM1_bit (*(volatile union un_pm1 *)0xFFF21).BIT
#define PM2 (*(volatile union un_pm2 *)0xFFF22).pm2
#define PM2_bit (*(volatile union un_pm2 *)0xFFF22).BIT
#define PM3 (*(volatile union un_pm3 *)0xFFF23).pm3
#define PM3_bit (*(volatile union un_pm3 *)0xFFF23).BIT
#define PM4 (*(volatile union un_pm4 *)0xFFF24).pm4
#define PM4_bit (*(volatile union un_pm4 *)0xFFF24).BIT
#define PM5 (*(volatile union un_pm5 *)0xFFF25).pm5
#define PM5_bit (*(volatile union un_pm5 *)0xFFF25).BIT
#define PM6 (*(volatile union un_pm6 *)0xFFF26).pm6
#define PM6_bit (*(volatile union un_pm6 *)0xFFF26).BIT
#define PM7 (*(volatile union un_pm7 *)0xFFF27).pm7
#define PM7_bit (*(volatile union un_pm7 *)0xFFF27).BIT
#define PM8 (*(volatile union un_pm8 *)0xFFF28).pm8
#define PM8_bit (*(volatile union un_pm8 *)0xFFF28).BIT
#define PM9 (*(volatile union un_pm9 *)0xFFF29).pm9
#define PM9_bit (*(volatile union un_pm9 *)0xFFF29).BIT
#define ADM0 (*(volatile union un_adm0 *)0xFFF30).adm0
#define ADM0_bit (*(volatile union un_adm0 *)0xFFF30).BIT
#define ADS (*(volatile union un_ads *)0xFFF31).ads
#define ADS_bit (*(volatile union un_ads *)0xFFF31).BIT
#define ADM1 (*(volatile union un_adm1 *)0xFFF32).adm1
#define ADM1_bit (*(volatile union un_adm1 *)0xFFF32).BIT
#define SUBCUDW (*(volatile unsigned short *)0xFFF34)
#define RTCSEL (*(volatile union un_rtcsel *)0xFFF36).rtcsel
#define RTCSEL_bit (*(volatile union un_rtcsel *)0xFFF36).BIT
#define SMPC (*(volatile union un_smpc *)0xFFF37).smpc
#define SMPC_bit (*(volatile union un_smpc *)0xFFF37).BIT
#define EGP0 (*(volatile union un_egp0 *)0xFFF38).egp0
#define EGP0_bit (*(volatile union un_egp0 *)0xFFF38).BIT
#define EGN0 (*(volatile union un_egn0 *)0xFFF39).egn0
#define EGN0_bit (*(volatile union un_egn0 *)0xFFF39).BIT
#define STSEL0 (*(volatile union un_stsel0 *)0xFFF3C).stsel0
#define STSEL0_bit (*(volatile union un_stsel0 *)0xFFF3C).BIT
#define STSEL1 (*(volatile union un_stsel1 *)0xFFF3D).stsel1
#define STSEL1_bit (*(volatile union un_stsel1 *)0xFFF3D).BIT
#define TISELSE (*(volatile union un_tiselse *)0xFFF3E).tiselse
#define TISELSE_bit (*(volatile union un_tiselse *)0xFFF3E).BIT
#define SGSEL (*(volatile union un_sgsel *)0xFFF3F).sgsel
#define SGSEL_bit (*(volatile union un_sgsel *)0xFFF3F).BIT
#define LCDMD (*(volatile union un_lcdmd *)0xFFF40).lcdmd
#define LCDMD_bit (*(volatile union un_lcdmd *)0xFFF40).BIT
#define LCDM (*(volatile union un_lcdm *)0xFFF41).lcdm
#define LCDM_bit (*(volatile union un_lcdm *)0xFFF41).BIT
#define LCDC0 (*(volatile union un_lcdc0 *)0xFFF42).lcdc0
#define LCDC0_bit (*(volatile union un_lcdc0 *)0xFFF42).BIT
#define UF1TX (*(volatile unsigned short *)0xFFF4C)
#define UF1TXB (*(volatile unsigned char *)0xFFF4C)
#define UF1RX (*(volatile unsigned short *)0xFFF4E)
#define UF1RXB (*(volatile unsigned char *)0xFFF4E)
#define ITMC (*(volatile unsigned short *)0xFFF50)
#define SEC (*(volatile unsigned char *)0xFFF52)
#define MIN (*(volatile unsigned char *)0xFFF53)
#define HOUR (*(volatile unsigned char *)0xFFF54)
#define WEEK (*(volatile unsigned char *)0xFFF55)
#define DAY (*(volatile unsigned char *)0xFFF56)
#define MONTH (*(volatile unsigned char *)0xFFF57)
#define YEAR (*(volatile unsigned char *)0xFFF58)
#define SUBCUD (*(volatile unsigned char *)0xFFF59)
#define ALARMWM (*(volatile unsigned char *)0xFFF5A)
#define ALARMWH (*(volatile unsigned char *)0xFFF5B)
#define ALARMWW (*(volatile unsigned char *)0xFFF5C)
#define RTCC0 (*(volatile union un_rtcc0 *)0xFFF5D).rtcc0
#define RTCC0_bit (*(volatile union un_rtcc0 *)0xFFF5D).BIT
#define RTCC1 (*(volatile union un_rtcc1 *)0xFFF5E).rtcc1
#define RTCC1_bit (*(volatile union un_rtcc1 *)0xFFF5E).BIT
#define TDR02 (*(volatile unsigned short *)0xFFF64)
#define TDR03 (*(volatile unsigned short *)0xFFF66)
#define TDR04 (*(volatile unsigned short *)0xFFF68)
#define TDR05 (*(volatile unsigned short *)0xFFF6A)
#define TDR06 (*(volatile unsigned short *)0xFFF6C)
#define TDR07 (*(volatile unsigned short *)0xFFF6E)
#define TDR10 (*(volatile unsigned short *)0xFFF70)
#define TDR11 (*(volatile unsigned short *)0xFFF72)
#define TDR12 (*(volatile unsigned short *)0xFFF74)
#define TDR13 (*(volatile unsigned short *)0xFFF76)
#define TDR14 (*(volatile unsigned short *)0xFFF78)
#define TDR15 (*(volatile unsigned short *)0xFFF7A)
#define TDR16 (*(volatile unsigned short *)0xFFF7C)
#define TDR17 (*(volatile unsigned short *)0xFFF7E)
#define TDR20 (*(volatile unsigned short *)0xFFF90)
#define TDR21 (*(volatile unsigned short *)0xFFF92)
#define TDR22 (*(volatile unsigned short *)0xFFF94)
#define TDR23 (*(volatile unsigned short *)0xFFF96)
#define TDR24 (*(volatile unsigned short *)0xFFF98)
#define TDR25 (*(volatile unsigned short *)0xFFF9A)
#define TDR26 (*(volatile unsigned short *)0xFFF9C)
#define TDR27 (*(volatile unsigned short *)0xFFF9E)
#define CMC (*(volatile unsigned char *)0xFFFA0)
#define CSC (*(volatile union un_csc *)0xFFFA1).csc
#define CSC_bit (*(volatile union un_csc *)0xFFFA1).BIT
#define OSTC (*(volatile union un_ostc *)0xFFFA2).ostc
#define OSTC_bit (*(volatile union un_ostc *)0xFFFA2).BIT
#define OSTS (*(volatile unsigned char *)0xFFFA3)
#define CKC (*(volatile union un_ckc *)0xFFFA4).ckc
#define CKC_bit (*(volatile union un_ckc *)0xFFFA4).BIT
#define CKS0 (*(volatile union un_cks0 *)0xFFFA5).cks0
#define CKS0_bit (*(volatile union un_cks0 *)0xFFFA5).BIT
#define RESF (*(volatile unsigned char *)0xFFFA8)
#define LVIM (*(volatile union un_lvim *)0xFFFA9).lvim
#define LVIM_bit (*(volatile union un_lvim *)0xFFFA9).BIT
#define LVIS (*(volatile union un_lvis *)0xFFFAA).lvis
#define LVIS_bit (*(volatile union un_lvis *)0xFFFAA).BIT
#define WDTE (*(volatile unsigned char *)0xFFFAB)
#define CRCIN (*(volatile unsigned char *)0xFFFAC)
#define DSA0 (*(volatile unsigned char *)0xFFFB0)
#define DSA1 (*(volatile unsigned char *)0xFFFB1)
#define DRA0 (*(volatile unsigned short *)0xFFFB2)
#define DRA0L (*(volatile unsigned char *)0xFFFB2)
#define DRA0H (*(volatile unsigned char *)0xFFFB3)
#define DRA1 (*(volatile unsigned short *)0xFFFB4)
#define DRA1L (*(volatile unsigned char *)0xFFFB4)
#define DRA1H (*(volatile unsigned char *)0xFFFB5)
#define DBC0 (*(volatile unsigned short *)0xFFFB6)
#define DBC0L (*(volatile unsigned char *)0xFFFB6)
#define DBC0H (*(volatile unsigned char *)0xFFFB7)
#define DBC1 (*(volatile unsigned short *)0xFFFB8)
#define DBC1L (*(volatile unsigned char *)0xFFFB8)
#define DBC1H (*(volatile unsigned char *)0xFFFB9)
#define DMC0 (*(volatile union un_dmc0 *)0xFFFBA).dmc0
#define DMC0_bit (*(volatile union un_dmc0 *)0xFFFBA).BIT
#define DMC1 (*(volatile union un_dmc1 *)0xFFFBB).dmc1
#define DMC1_bit (*(volatile union un_dmc1 *)0xFFFBB).BIT
#define DRC0 (*(volatile union un_drc0 *)0xFFFBC).drc0
#define DRC0_bit (*(volatile union un_drc0 *)0xFFFBC).BIT
#define DRC1 (*(volatile union un_drc1 *)0xFFFBD).drc1
#define DRC1_bit (*(volatile union un_drc1 *)0xFFFBD).BIT
#define IF2 (*(volatile union un_if2 *)0xFFFD0).if2
#define IF2_bit (*(volatile union un_if2 *)0xFFFD0).BIT
#define IF2L (*(volatile union un_if2l *)0xFFFD0).if2l
#define IF2L_bit (*(volatile union un_if2l *)0xFFFD0).BIT
#define IF2H (*(volatile union un_if2h *)0xFFFD1).if2h
#define IF2H_bit (*(volatile union un_if2h *)0xFFFD1).BIT
#define IF3 (*(volatile union un_if3 *)0xFFFD2).if3
#define IF3_bit (*(volatile union un_if3 *)0xFFFD2).BIT
#define IF3L (*(volatile union un_if3l *)0xFFFD2).if3l
#define IF3L_bit (*(volatile union un_if3l *)0xFFFD2).BIT
#define IF3H (*(volatile union un_if3h *)0xFFFD3).if3h
#define IF3H_bit (*(volatile union un_if3h *)0xFFFD3).BIT
#define MK2 (*(volatile union un_mk2 *)0xFFFD4).mk2
#define MK2_bit (*(volatile union un_mk2 *)0xFFFD4).BIT
#define MK2L (*(volatile union un_mk2l *)0xFFFD4).mk2l
#define MK2L_bit (*(volatile union un_mk2l *)0xFFFD4).BIT
#define MK2H (*(volatile union un_mk2h *)0xFFFD5).mk2h
#define MK2H_bit (*(volatile union un_mk2h *)0xFFFD5).BIT
#define MK3 (*(volatile union un_mk3 *)0xFFFD6).mk3
#define MK3_bit (*(volatile union un_mk3 *)0xFFFD6).BIT
#define MK3L (*(volatile union un_mk3l *)0xFFFD6).mk3l
#define MK3L_bit (*(volatile union un_mk3l *)0xFFFD6).BIT
#define MK3H (*(volatile union un_mk3h *)0xFFFD7).mk3h
#define MK3H_bit (*(volatile union un_mk3h *)0xFFFD7).BIT
#define PR02 (*(volatile union un_pr02 *)0xFFFD8).pr02
#define PR02_bit (*(volatile union un_pr02 *)0xFFFD8).BIT
#define PR02L (*(volatile union un_pr02l *)0xFFFD8).pr02l
#define PR02L_bit (*(volatile union un_pr02l *)0xFFFD8).BIT
#define PR02H (*(volatile union un_pr02h *)0xFFFD9).pr02h
#define PR02H_bit (*(volatile union un_pr02h *)0xFFFD9).BIT
#define PR03 (*(volatile union un_pr03 *)0xFFFDA).pr03
#define PR03_bit (*(volatile union un_pr03 *)0xFFFDA).BIT
#define PR03L (*(volatile union un_pr03l *)0xFFFDA).pr03l
#define PR03L_bit (*(volatile union un_pr03l *)0xFFFDA).BIT
#define PR03H (*(volatile union un_pr03h *)0xFFFDB).pr03h
#define PR03H_bit (*(volatile union un_pr03h *)0xFFFDB).BIT
#define PR12 (*(volatile union un_pr12 *)0xFFFDC).pr12
#define PR12_bit (*(volatile union un_pr12 *)0xFFFDC).BIT
#define PR12L (*(volatile union un_pr12l *)0xFFFDC).pr12l
#define PR12L_bit (*(volatile union un_pr12l *)0xFFFDC).BIT
#define PR12H (*(volatile union un_pr12h *)0xFFFDD).pr12h
#define PR12H_bit (*(volatile union un_pr12h *)0xFFFDD).BIT
#define PR13 (*(volatile union un_pr13 *)0xFFFDE).pr13
#define PR13_bit (*(volatile union un_pr13 *)0xFFFDE).BIT
#define PR13L (*(volatile union un_pr13l *)0xFFFDE).pr13l
#define PR13L_bit (*(volatile union un_pr13l *)0xFFFDE).BIT
#define PR13H (*(volatile union un_pr13h *)0xFFFDF).pr13h
#define PR13H_bit (*(volatile union un_pr13h *)0xFFFDF).BIT
#define IF0 (*(volatile union un_if0 *)0xFFFE0).if0
#define IF0_bit (*(volatile union un_if0 *)0xFFFE0).BIT
#define IF0L (*(volatile union un_if0l *)0xFFFE0).if0l
#define IF0L_bit (*(volatile union un_if0l *)0xFFFE0).BIT
#define IF0H (*(volatile union un_if0h *)0xFFFE1).if0h
#define IF0H_bit (*(volatile union un_if0h *)0xFFFE1).BIT
#define IF1 (*(volatile union un_if1 *)0xFFFE2).if1
#define IF1_bit (*(volatile union un_if1 *)0xFFFE2).BIT
#define IF1L (*(volatile union un_if1l *)0xFFFE2).if1l
#define IF1L_bit (*(volatile union un_if1l *)0xFFFE2).BIT
#define IF1H (*(volatile union un_if1h *)0xFFFE3).if1h
#define IF1H_bit (*(volatile union un_if1h *)0xFFFE3).BIT
#define MK0 (*(volatile union un_mk0 *)0xFFFE4).mk0
#define MK0_bit (*(volatile union un_mk0 *)0xFFFE4).BIT
#define MK0L (*(volatile union un_mk0l *)0xFFFE4).mk0l
#define MK0L_bit (*(volatile union un_mk0l *)0xFFFE4).BIT
#define MK0H (*(volatile union un_mk0h *)0xFFFE5).mk0h
#define MK0H_bit (*(volatile union un_mk0h *)0xFFFE5).BIT
#define MK1 (*(volatile union un_mk1 *)0xFFFE6).mk1
#define MK1_bit (*(volatile union un_mk1 *)0xFFFE6).BIT
#define MK1L (*(volatile union un_mk1l *)0xFFFE6).mk1l
#define MK1L_bit (*(volatile union un_mk1l *)0xFFFE6).BIT
#define MK1H (*(volatile union un_mk1h *)0xFFFE7).mk1h
#define MK1H_bit (*(volatile union un_mk1h *)0xFFFE7).BIT
#define PR00 (*(volatile union un_pr00 *)0xFFFE8).pr00
#define PR00_bit (*(volatile union un_pr00 *)0xFFFE8).BIT
#define PR00L (*(volatile union un_pr00l *)0xFFFE8).pr00l
#define PR00L_bit (*(volatile union un_pr00l *)0xFFFE8).BIT
#define PR00H (*(volatile union un_pr00h *)0xFFFE9).pr00h
#define PR00H_bit (*(volatile union un_pr00h *)0xFFFE9).BIT
#define PR01 (*(volatile union un_pr01 *)0xFFFEA).pr01
#define PR01_bit (*(volatile union un_pr01 *)0xFFFEA).BIT
#define PR01L (*(volatile union un_pr01l *)0xFFFEA).pr01l
#define PR01L_bit (*(volatile union un_pr01l *)0xFFFEA).BIT
#define PR01H (*(volatile union un_pr01h *)0xFFFEB).pr01h
#define PR01H_bit (*(volatile union un_pr01h *)0xFFFEB).BIT
#define PR10 (*(volatile union un_pr10 *)0xFFFEC).pr10
#define PR10_bit (*(volatile union un_pr10 *)0xFFFEC).BIT
#define PR10L (*(volatile union un_pr10l *)0xFFFEC).pr10l
#define PR10L_bit (*(volatile union un_pr10l *)0xFFFEC).BIT
#define PR10H (*(volatile union un_pr10h *)0xFFFED).pr10h
#define PR10H_bit (*(volatile union un_pr10h *)0xFFFED).BIT
#define PR11 (*(volatile union un_pr11 *)0xFFFEE).pr11
#define PR11_bit (*(volatile union un_pr11 *)0xFFFEE).BIT
#define PR11L (*(volatile union un_pr11l *)0xFFFEE).pr11l
#define PR11L_bit (*(volatile union un_pr11l *)0xFFFEE).BIT
#define PR11H (*(volatile union un_pr11h *)0xFFFEF).pr11h
#define PR11H_bit (*(volatile union un_pr11h *)0xFFFEF).BIT
#define MDAL (*(volatile unsigned short *)0xFFFF0)
#define MULA (*(volatile unsigned short *)0xFFFF0)
#define MDAH (*(volatile unsigned short *)0xFFFF2)
#define MULB (*(volatile unsigned short *)0xFFFF2)
#define MDBH (*(volatile unsigned short *)0xFFFF4)
#define MULOH (*(volatile unsigned short *)0xFFFF4)
#define MDBL (*(volatile unsigned short *)0xFFFF6)
#define MULOL (*(volatile unsigned short *)0xFFFF6)
#define PMC (*(volatile union un_pmc *)0xFFFFE).pmc
#define PMC_bit (*(volatile union un_pmc *)0xFFFFE).BIT

/*
 Sfr bits
 */
#define ADCE ADM0_bit.no0
#define LV0 ADM0_bit.no1
#define LV1 ADM0_bit.no2
#define FR0 ADM0_bit.no3
#define FR1 ADM0_bit.no4
#define FR2 ADM0_bit.no5
#define ADMD ADM0_bit.no6
#define ADCS ADM0_bit.no7
#define ADTRS0 ADM1_bit.no0
#define ADTRS1 ADM1_bit.no1
#define ADSCM ADM1_bit.no5
#define ADTMD0 ADM1_bit.no6
#define ADTMD1 ADM1_bit.no7
#define RTCTIS00 RTCSEL_bit.no0
#define RTCTIS01 RTCSEL_bit.no1
#define RTCTIS10 RTCSEL_bit.no2
#define RTCTIS11 RTCSEL_bit.no3
#define RTCOSEL0 RTCSEL_bit.no6
#define RTCOSEL1 RTCSEL_bit.no7
#define EN1 SMPC_bit.no0
#define MOD1 SMPC_bit.no4
#define SCSI010 STSEL0_bit.no4
#define SIIC0 STSEL1_bit.no6
#define TI05SEL0 TISELSE_bit.no0
#define TI05SEL1 TISELSE_bit.no1
#define TOTICON0 TISELSE_bit.no6
#define TOTICON1 TISELSE_bit.no7
#define MDSET0 LCDMD_bit.no4
#define MDSET1 LCDMD_bit.no5
#define SCOC LCDM_bit.no6
#define LCDON LCDM_bit.no7
#define CT0 RTCC0_bit.no0
#define CT1 RTCC0_bit.no1
#define CT2 RTCC0_bit.no2
#define AMPM RTCC0_bit.no3
#define RCLOE1 RTCC0_bit.no5
#define RTCE RTCC0_bit.no7
#define RWAIT RTCC1_bit.no0
#define RWST RTCC1_bit.no1
#define RIFG RTCC1_bit.no3
#define WAFG RTCC1_bit.no4
#define WALIE RTCC1_bit.no6
#define WALE RTCC1_bit.no7
#define HIOSTOP CSC_bit.no0
#define MSTOP CSC_bit.no7
#define MOST18 OSTC_bit.no0
#define MOST17 OSTC_bit.no1
#define MOST15 OSTC_bit.no2
#define MOST13 OSTC_bit.no3
#define MOST11 OSTC_bit.no4
#define MOST10 OSTC_bit.no5
#define MOST9 OSTC_bit.no6
#define MOST8 OSTC_bit.no7
#define MCM0 CKC_bit.no4
#define MCS CKC_bit.no5
#define CCS00 CKS0_bit.no0
#define CCS01 CKS0_bit.no1
#define CCS02 CKS0_bit.no2
#define PCLOE0 CKS0_bit.no7
#define LVIF LVIM_bit.no0
#define LVIOMSK LVIM_bit.no1
#define LVISEN LVIM_bit.no7
#define LVILV LVIS_bit.no0
#define LVIMD LVIS_bit.no7
#define IFC00 DMC0_bit.no0
#define IFC01 DMC0_bit.no1
#define IFC02 DMC0_bit.no2
#define IFC03 DMC0_bit.no3
#define DWAIT0 DMC0_bit.no4
#define DS0 DMC0_bit.no5
#define DRS0 DMC0_bit.no6
#define STG0 DMC0_bit.no7
#define IFC10 DMC1_bit.no0
#define IFC11 DMC1_bit.no1
#define IFC12 DMC1_bit.no2
#define IFC13 DMC1_bit.no3
#define DWAIT1 DMC1_bit.no4
#define DS1 DMC1_bit.no5
#define DRS1 DMC1_bit.no6
#define STG1 DMC1_bit.no7
#define DST0 DRC0_bit.no0
#define DEN0 DRC0_bit.no7
#define DST1 DRC1_bit.no0
#define DEN1 DRC1_bit.no7
#define TMIF05 IF2L_bit.no0
#define TMIF06 IF2L_bit.no1
#define TMIF07 IF2L_bit.no2
#define TMIF10 IF2H_bit.no1
#define TMIF11 IF2H_bit.no2
#define TMIF12 IF2H_bit.no3
#define TMIF13 IF2H_bit.no4
#define MDIF IF2H_bit.no5
#define FLIF IF2H_bit.no7
#define TMIF14 IF3L_bit.no1
#define TMIF15 IF3L_bit.no2
#define TMIF16 IF3L_bit.no3
#define TMIF17 IF3L_bit.no4
#define TMIF20 IF3L_bit.no5
#define TMIF21 IF3L_bit.no6
#define TMIF22 IF3L_bit.no7
#define TMIF23 IF3H_bit.no0
#define TMIF24 IF3H_bit.no1
#define TMIF26 IF3H_bit.no2
#define TMMK05 MK2L_bit.no0
#define TMMK06 MK2L_bit.no1
#define TMMK07 MK2L_bit.no2
#define TMMK10 MK2H_bit.no1
#define TMMK11 MK2H_bit.no2
#define TMMK12 MK2H_bit.no3
#define TMMK13 MK2H_bit.no4
#define MDMK MK2H_bit.no5
#define FLMK MK2H_bit.no7
#define TMMK14 MK3L_bit.no1
#define TMMK15 MK3L_bit.no2
#define TMMK16 MK3L_bit.no3
#define TMMK17 MK3L_bit.no4
#define TMMK20 MK3L_bit.no5
#define TMMK21 MK3L_bit.no6
#define TMMK22 MK3L_bit.no7
#define TMMK23 MK3H_bit.no0
#define TMMK24 MK3H_bit.no1
#define TMMK26 MK3H_bit.no2
#define TMPR005 PR02L_bit.no0
#define TMPR006 PR02L_bit.no1
#define TMPR007 PR02L_bit.no2
#define TMPR010 PR02H_bit.no1
#define TMPR011 PR02H_bit.no2
#define TMPR012 PR02H_bit.no3
#define TMPR013 PR02H_bit.no4
#define MDPR0 PR02H_bit.no5
#define FLPR0 PR02H_bit.no7
#define TMPR014 PR03L_bit.no1
#define TMPR015 PR03L_bit.no2
#define TMPR016 PR03L_bit.no3
#define TMPR017 PR03L_bit.no4
#define TMPR020 PR03L_bit.no5
#define TMPR021 PR03L_bit.no6
#define TMPR022 PR03L_bit.no7
#define TMPR023 PR03H_bit.no0
#define TMPR024 PR03H_bit.no1
#define TMPR026 PR03H_bit.no2
#define TMPR105 PR12L_bit.no0
#define TMPR106 PR12L_bit.no1
#define TMPR107 PR12L_bit.no2
#define TMPR110 PR12H_bit.no1
#define TMPR111 PR12H_bit.no2
#define TMPR112 PR12H_bit.no3
#define TMPR113 PR12H_bit.no4
#define MDPR1 PR12H_bit.no5
#define FLPR1 PR12H_bit.no7
#define TMPR114 PR13L_bit.no1
#define TMPR115 PR13L_bit.no2
#define TMPR116 PR13L_bit.no3
#define TMPR117 PR13L_bit.no4
#define TMPR120 PR13L_bit.no5
#define TMPR121 PR13L_bit.no6
#define TMPR122 PR13L_bit.no7
#define TMPR123 PR13H_bit.no0
#define TMPR124 PR13H_bit.no1
#define TMPR126 PR13H_bit.no2
#define WDTIIF IF0L_bit.no0
#define LVIIF IF0L_bit.no1
#define PIF1 IF0L_bit.no3
#define PIF2 IF0L_bit.no4
#define PIF3 IF0L_bit.no5
#define PIF4 IF0L_bit.no6
#define PIF5 IF0L_bit.no7
#define CLMIF IF0H_bit.no0
#define CSIIF00 IF0H_bit.no1
#define CSIIF01 IF0H_bit.no2
#define DMAIF0 IF0H_bit.no3
#define DMAIF1 IF0H_bit.no4
#define RTCIF IF0H_bit.no5
#define ITIF IF0H_bit.no6
#define SGIF IF1L_bit.no3
#define TMIF00 IF1L_bit.no4
#define TMIF01 IF1L_bit.no5
#define TMIF02 IF1L_bit.no6
#define TMIF03 IF1L_bit.no7
#define ADIF IF1H_bit.no0
#define LTIF1 IF1H_bit.no1
#define LRIF1 IF1H_bit.no2
#define LSIF1 IF1H_bit.no3
#define PIFLR1 IF1H_bit.no4
#define IICIF11 IF1H_bit.no6
#define TMIF04 IF1H_bit.no7
#define WDTIMK MK0L_bit.no0
#define LVIMK MK0L_bit.no1
#define PMK1 MK0L_bit.no3
#define PMK2 MK0L_bit.no4
#define PMK3 MK0L_bit.no5
#define PMK4 MK0L_bit.no6
#define PMK5 MK0L_bit.no7
#define CLMMK MK0H_bit.no0
#define CSIMK00 MK0H_bit.no1
#define CSIMK01 MK0H_bit.no2
#define DMAMK0 MK0H_bit.no3
#define DMAMK1 MK0H_bit.no4
#define RTCMK MK0H_bit.no5
#define ITMK MK0H_bit.no6
#define SGMK MK1L_bit.no3
#define TMMK00 MK1L_bit.no4
#define TMMK01 MK1L_bit.no5
#define TMMK02 MK1L_bit.no6
#define TMMK03 MK1L_bit.no7
#define ADMK MK1H_bit.no0
#define LTMK1 MK1H_bit.no1
#define LRMK1 MK1H_bit.no2
#define LSMK1 MK1H_bit.no3
#define PMKLR1 MK1H_bit.no4
#define IICMK11 MK1H_bit.no6
#define TMMK04 MK1H_bit.no7
#define WDTIPR0 PR00L_bit.no0
#define LVIPR0 PR00L_bit.no1
#define PPR01 PR00L_bit.no3
#define PPR02 PR00L_bit.no4
#define PPR03 PR00L_bit.no5
#define PPR04 PR00L_bit.no6
#define PPR05 PR00L_bit.no7
#define CLMPR0 PR00H_bit.no0
#define CSIPR000 PR00H_bit.no1
#define CSIPR001 PR00H_bit.no2
#define DMAPR00 PR00H_bit.no3
#define DMAPR01 PR00H_bit.no4
#define RTCPR0 PR00H_bit.no5
#define ITPR0 PR00H_bit.no6
#define SGPR0 PR01L_bit.no3
#define TMPR000 PR01L_bit.no4
#define TMPR001 PR01L_bit.no5
#define TMPR002 PR01L_bit.no6
#define TMPR003 PR01L_bit.no7
#define ADPR0 PR01H_bit.no0
#define LTPR01 PR01H_bit.no1
#define LRPR01 PR01H_bit.no2
#define LSPR01 PR01H_bit.no3
#define PPR0LR1 PR01H_bit.no4
#define IICPR011 PR01H_bit.no6
#define TMPR004 PR01H_bit.no7
#define WDTIPR1 PR10L_bit.no0
#define LVIPR1 PR10L_bit.no1
#define PPR11 PR10L_bit.no3
#define PPR12 PR10L_bit.no4
#define PPR13 PR10L_bit.no5
#define PPR14 PR10L_bit.no6
#define PPR15 PR10L_bit.no7
#define CLMPR1 PR10H_bit.no0
#define CSIPR100 PR10H_bit.no1
#define CSIPR101 PR10H_bit.no2
#define DMAPR10 PR10H_bit.no3
#define DMAPR11 PR10H_bit.no4
#define RTCPR1 PR10H_bit.no5
#define ITPR1 PR10H_bit.no6
#define SGPR1 PR11L_bit.no3
#define TMPR100 PR11L_bit.no4
#define TMPR101 PR11L_bit.no5
#define TMPR102 PR11L_bit.no6
#define TMPR103 PR11L_bit.no7
#define ADPR1 PR11H_bit.no0
#define LTPR11 PR11H_bit.no1
#define LRPR11 PR11H_bit.no2
#define LSPR11 PR11H_bit.no3
#define PPR1LR1 PR11H_bit.no4
#define IICPR111 PR11H_bit.no6
#define TMPR104 PR11H_bit.no7
#define MAA PMC_bit.no0

/*
 Interrupt vector addresses
 */
#define RST_vect 0x0
#define INTDBG_vect 0x2
#define INTWDTI_vect 0x4
#define INTLVI_vect 0x6
#define INTP1_vect 0xA
#define INTP2_vect 0xC
#define INTP3_vect 0xE
#define INTP4_vect 0x10
#define INTP5_vect 0x12
#define INTCLM_vect 0x14
#define INTCSI00_vect 0x16
#define INTCSI01_vect 0x18
#define INTDMA0_vect 0x1A
#define INTDMA1_vect 0x1C
#define INTRTC_vect 0x1E
#define INTIT_vect 0x20
#define INTSG_vect 0x2A
#define INTTM00_vect 0x2C
#define INTTM01_vect 0x2E
#define INTTM02_vect 0x30
#define INTTM03_vect 0x32
#define INTAD_vect 0x34
#define INTLT1_vect 0x36
#define INTLR1_vect 0x38
#define INTLS1_vect 0x3A
#define INTPLR1_vect 0x3C
#define INTIIC11_vect 0x40
#define INTTM04_vect 0x42
#define INTTM05_vect 0x44
#define INTTM06_vect 0x46
#define INTTM07_vect 0x48
#define INTTM10_vect 0x56
#define INTTM11_vect 0x58
#define INTTM12_vect 0x5A
#define INTTM13_vect 0x5C
#define INTMD_vect 0x5E
#define INTFL_vect 0x62
#define INTTM14_vect 0x66
#define INTTM15_vect 0x68
#define INTTM16_vect 0x6A
#define INTTM17_vect 0x6C
#define INTTM20_vect 0x6E
#define INTTM21_vect 0x70
#define INTTM22_vect 0x72
#define INTTM23_vect 0x74
#define INTTM24_vect 0x76
#define INTTM26_vect 0x78
#define BRK_I_vect 0x7E
#endif
