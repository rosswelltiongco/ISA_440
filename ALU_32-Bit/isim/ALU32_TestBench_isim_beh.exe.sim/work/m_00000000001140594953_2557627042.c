/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Rosswell/Documents/ISA_440/ALU_32-Bit/MIPS_ALU32_TB.v";
static int ng1[] = {9, 0};
static int ng2[] = {1, 0};
static const char *ng3 = " ps";
static unsigned int ng4[] = {0U, 0U};
static const char *ng5 = " ";
static const char *ng6 = "***********************************************************************";
static const char *ng7 = "   C E C B    4 4 0    A_L_U    T e s t b e n c h      R e s u l t s   ";
static int ng8[] = {0, 0};
static int ng9[] = {8, 0};
static const char *ng10 = "PASS S tests";
static const char *ng11 = "PASS T tests";
static int ng12[] = {2, 0};
static const char *ng13 = "ADD tests";
static int ng14[] = {3, 0};
static const char *ng15 = "ADDU tests";
static int ng16[] = {4, 0};
static const char *ng17 = "SUB tests";
static int ng18[] = {5, 0};
static const char *ng19 = "SUBU tests";
static int ng20[] = {6, 0};
static const char *ng21 = "SLT tests";
static int ng22[] = {7, 0};
static const char *ng23 = "SLTU tests";
static unsigned int ng24[] = {37U, 0U};
static unsigned int ng25[] = {29U, 0U};
static const char *ng26 = "t=%t  S=%h, T=%h  Op=%d || Yhi=%h  Ylo=%h   c=%b v=%b n=%b z=%b";
static unsigned int ng27[] = {525U, 0U};
static unsigned int ng28[] = {4294967267U, 0U};
static unsigned int ng29[] = {4294967241U, 0U};
static unsigned int ng30[] = {13U, 0U};
static unsigned int ng31[] = {4294967196U, 0U};
static unsigned int ng32[] = {4294967197U, 0U};
static const char *ng33 = "";
static int ng34[] = {26, 0};
static const char *ng35 = "AND test";
static const char *ng36 = "OR test";
static int ng37[] = {10, 0};
static const char *ng38 = "XOR test";
static int ng39[] = {11, 0};
static const char *ng40 = "NOR test";
static int ng41[] = {12, 0};
static const char *ng42 = "SRL test";
static int ng43[] = {13, 0};
static const char *ng44 = "SRA test";
static int ng45[] = {14, 0};
static const char *ng46 = "SLL test";
static int ng47[] = {15, 0};
static const char *ng48 = "INC test";
static int ng49[] = {16, 0};
static const char *ng50 = "INC4 test";
static int ng51[] = {17, 0};
static const char *ng52 = "DEC test";
static int ng53[] = {18, 0};
static const char *ng54 = "DEC4 test";
static int ng55[] = {19, 0};
static const char *ng56 = "ZEROS test";
static int ng57[] = {20, 0};
static const char *ng58 = "ONES test";
static int ng59[] = {21, 0};
static const char *ng60 = "SP_INIT test";
static int ng61[] = {22, 0};
static const char *ng62 = "ANDI test";
static int ng63[] = {23, 0};
static const char *ng64 = "ORI test";
static int ng65[] = {24, 0};
static const char *ng66 = "LUI test";
static int ng67[] = {25, 0};
static const char *ng68 = "XORI test";
static unsigned int ng69[] = {4042275900U, 0U};
static unsigned int ng70[] = {3205494261U, 0U, 0U, 0U};
static const char *ng71 = "MULT tests";
static unsigned int ng72[] = {30U, 0U};
static const char *ng73 = "DIV tests";
static unsigned int ng74[] = {31U, 0U};



static void Always_34_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2180U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2080);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1656);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1656);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_37_1(char *t0)
{
    char t3[8];
    char t18[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);

LAB4:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 32, t2, 32);
    t4 = ((char*)((ng2)));
    t5 = ((char*)((ng1)));
    xsi_vlog_setTimeFormat(*((unsigned int *)t3), *((unsigned int *)t4), ng3, 0, *((unsigned int *)t5));
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(44, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(45, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(46, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(47, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(48, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2520);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(50, ng0);
    xsi_set_current_line(50, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t0 + 1564);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB6:    t2 = (t0 + 1564);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng9)));
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t5, 32, t6, 32);
    t7 = (t3 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(97, ng0);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB36:    t2 = (t0 + 1564);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng34)));
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t5, 32, t6, 32);
    t7 = (t3 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(128, ng0);
    xsi_vlogfile_write(1, 0, 0, ng71, 1, t0);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2568);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB7:    xsi_set_current_line(50, ng0);

LAB9:    xsi_set_current_line(51, ng0);
    t13 = (t0 + 1564);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);

LAB10:    t16 = ((char*)((ng8)));
    t17 = xsi_vlog_signed_case_compare(t15, 32, t16, 32);
    if (t17 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t17 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t17 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t17 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t17 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng14)));
    t17 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t17 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng16)));
    t17 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t17 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng18)));
    t17 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t17 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng20)));
    t17 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t17 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng22)));
    t17 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t17 == 1)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2528);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB11:    xsi_set_current_line(52, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    goto LAB27;

LAB13:    xsi_set_current_line(53, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    goto LAB27;

LAB15:    xsi_set_current_line(54, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    goto LAB27;

LAB17:    xsi_set_current_line(55, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    goto LAB27;

LAB19:    xsi_set_current_line(56, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    goto LAB27;

LAB21:    xsi_set_current_line(57, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    goto LAB27;

LAB23:    xsi_set_current_line(58, ng0);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    goto LAB27;

LAB25:    xsi_set_current_line(59, ng0);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t0);
    goto LAB27;

LAB28:    xsi_set_current_line(63, ng0);
    t5 = (t0 + 1564);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 1472);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 5);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng24)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng25)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(66, ng0);
    t4 = xsi_vlog_time(t18, 1000.0000000000000, 10.000000000000000);
    t5 = (t0 + 1288);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 1380);
    t14 = (t13 + 36U);
    t16 = *((char **)t14);
    t19 = (t0 + 1472);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 600U);
    t23 = *((char **)t22);
    t22 = (t0 + 692U);
    t24 = *((char **)t22);
    t22 = (t0 + 784U);
    t25 = *((char **)t22);
    t22 = (t0 + 876U);
    t26 = *((char **)t22);
    t22 = (t0 + 968U);
    t27 = *((char **)t22);
    t22 = (t0 + 1060U);
    t28 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng26, 11, t0, (char)118, t18, 64, (char)118, t7, 32, (char)118, t16, 32, (char)118, t21, 5, (char)118, t23, 32, (char)118, t24, 32, (char)118, t25, 1, (char)118, t26, 1, (char)118, t27, 1, (char)118, t28, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2536);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(71, ng0);
    t5 = (t0 + 1564);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 1472);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 5);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng27)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng28)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(74, ng0);
    t4 = xsi_vlog_time(t18, 1000.0000000000000, 10.000000000000000);
    t5 = (t0 + 1288);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 1380);
    t14 = (t13 + 36U);
    t16 = *((char **)t14);
    t19 = (t0 + 1472);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 600U);
    t23 = *((char **)t22);
    t22 = (t0 + 692U);
    t24 = *((char **)t22);
    t22 = (t0 + 784U);
    t25 = *((char **)t22);
    t22 = (t0 + 876U);
    t26 = *((char **)t22);
    t22 = (t0 + 968U);
    t27 = *((char **)t22);
    t22 = (t0 + 1060U);
    t28 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng26, 11, t0, (char)118, t18, 64, (char)118, t7, 32, (char)118, t16, 32, (char)118, t21, 5, (char)118, t23, 32, (char)118, t24, 32, (char)118, t25, 1, (char)118, t26, 1, (char)118, t27, 1, (char)118, t28, 1);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2544);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(79, ng0);
    t5 = (t0 + 1564);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 1472);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 5);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng29)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng30)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(82, ng0);
    t4 = xsi_vlog_time(t18, 1000.0000000000000, 10.000000000000000);
    t5 = (t0 + 1288);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 1380);
    t14 = (t13 + 36U);
    t16 = *((char **)t14);
    t19 = (t0 + 1472);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 600U);
    t23 = *((char **)t22);
    t22 = (t0 + 692U);
    t24 = *((char **)t22);
    t22 = (t0 + 784U);
    t25 = *((char **)t22);
    t22 = (t0 + 876U);
    t26 = *((char **)t22);
    t22 = (t0 + 968U);
    t27 = *((char **)t22);
    t22 = (t0 + 1060U);
    t28 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng26, 11, t0, (char)118, t18, 64, (char)118, t7, 32, (char)118, t16, 32, (char)118, t21, 5, (char)118, t23, 32, (char)118, t24, 32, (char)118, t25, 1, (char)118, t26, 1, (char)118, t27, 1, (char)118, t28, 1);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2552);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(87, ng0);
    t5 = (t0 + 1564);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 1472);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 5);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng31)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng32)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(90, ng0);
    t4 = xsi_vlog_time(t18, 1000.0000000000000, 10.000000000000000);
    t5 = (t0 + 1288);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 1380);
    t14 = (t13 + 36U);
    t16 = *((char **)t14);
    t19 = (t0 + 1472);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 600U);
    t23 = *((char **)t22);
    t22 = (t0 + 692U);
    t24 = *((char **)t22);
    t22 = (t0 + 784U);
    t25 = *((char **)t22);
    t22 = (t0 + 876U);
    t26 = *((char **)t22);
    t22 = (t0 + 968U);
    t27 = *((char **)t22);
    t22 = (t0 + 1060U);
    t28 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng26, 11, t0, (char)118, t18, 64, (char)118, t7, 32, (char)118, t16, 32, (char)118, t21, 5, (char)118, t23, 32, (char)118, t24, 32, (char)118, t25, 1, (char)118, t26, 1, (char)118, t27, 1, (char)118, t28, 1);
    xsi_set_current_line(93, ng0);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1564);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 32);
    goto LAB6;

LAB37:    xsi_set_current_line(97, ng0);

LAB39:    xsi_set_current_line(98, ng0);
    t13 = (t0 + 1564);
    t14 = (t13 + 36U);
    t16 = *((char **)t14);

LAB40:    t19 = ((char*)((ng9)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t19, 32);
    if (t17 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng1)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng37)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng39)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng41)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng43)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng45)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng47)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng49)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng51)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng53)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng55)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng57)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng59)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng61)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng63)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng65)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng67)));
    t17 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t17 == 1)
        goto LAB75;

LAB76:
LAB77:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2560);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB41:    xsi_set_current_line(99, ng0);
    xsi_vlogfile_write(1, 0, 0, ng35, 1, t0);
    goto LAB77;

LAB43:    xsi_set_current_line(100, ng0);
    xsi_vlogfile_write(1, 0, 0, ng36, 1, t0);
    goto LAB77;

LAB45:    xsi_set_current_line(101, ng0);
    xsi_vlogfile_write(1, 0, 0, ng38, 1, t0);
    goto LAB77;

LAB47:    xsi_set_current_line(102, ng0);
    xsi_vlogfile_write(1, 0, 0, ng40, 1, t0);
    goto LAB77;

LAB49:    xsi_set_current_line(103, ng0);
    xsi_vlogfile_write(1, 0, 0, ng42, 1, t0);
    goto LAB77;

LAB51:    xsi_set_current_line(104, ng0);
    xsi_vlogfile_write(1, 0, 0, ng44, 1, t0);
    goto LAB77;

LAB53:    xsi_set_current_line(105, ng0);
    xsi_vlogfile_write(1, 0, 0, ng46, 1, t0);
    goto LAB77;

LAB55:    xsi_set_current_line(106, ng0);
    xsi_vlogfile_write(1, 0, 0, ng48, 1, t0);
    goto LAB77;

LAB57:    xsi_set_current_line(107, ng0);
    xsi_vlogfile_write(1, 0, 0, ng50, 1, t0);
    goto LAB77;

LAB59:    xsi_set_current_line(108, ng0);
    xsi_vlogfile_write(1, 0, 0, ng52, 1, t0);
    goto LAB77;

LAB61:    xsi_set_current_line(109, ng0);
    xsi_vlogfile_write(1, 0, 0, ng54, 1, t0);
    goto LAB77;

LAB63:    xsi_set_current_line(110, ng0);
    xsi_vlogfile_write(1, 0, 0, ng56, 1, t0);
    goto LAB77;

LAB65:    xsi_set_current_line(111, ng0);
    xsi_vlogfile_write(1, 0, 0, ng58, 1, t0);
    goto LAB77;

LAB67:    xsi_set_current_line(112, ng0);
    xsi_vlogfile_write(1, 0, 0, ng60, 1, t0);
    goto LAB77;

LAB69:    xsi_set_current_line(113, ng0);
    xsi_vlogfile_write(1, 0, 0, ng62, 1, t0);
    goto LAB77;

LAB71:    xsi_set_current_line(114, ng0);
    xsi_vlogfile_write(1, 0, 0, ng64, 1, t0);
    goto LAB77;

LAB73:    xsi_set_current_line(115, ng0);
    xsi_vlogfile_write(1, 0, 0, ng66, 1, t0);
    goto LAB77;

LAB75:    xsi_set_current_line(116, ng0);
    xsi_vlogfile_write(1, 0, 0, ng68, 1, t0);
    goto LAB77;

LAB78:    xsi_set_current_line(119, ng0);
    t5 = (t0 + 1564);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 1472);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 5);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng69)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng70)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB79:    xsi_set_current_line(122, ng0);
    t4 = xsi_vlog_time(t18, 1000.0000000000000, 10.000000000000000);
    t5 = (t0 + 1288);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 1380);
    t14 = (t13 + 36U);
    t19 = *((char **)t14);
    t20 = (t0 + 1472);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    t23 = (t0 + 600U);
    t24 = *((char **)t23);
    t23 = (t0 + 692U);
    t25 = *((char **)t23);
    t23 = (t0 + 784U);
    t26 = *((char **)t23);
    t23 = (t0 + 876U);
    t27 = *((char **)t23);
    t23 = (t0 + 968U);
    t28 = *((char **)t23);
    t23 = (t0 + 1060U);
    t29 = *((char **)t23);
    xsi_vlogfile_write(1, 0, 0, ng26, 11, t0, (char)118, t18, 64, (char)118, t7, 32, (char)118, t19, 32, (char)118, t22, 5, (char)118, t24, 32, (char)118, t25, 32, (char)118, t26, 1, (char)118, t27, 1, (char)118, t28, 1, (char)118, t29, 1);
    xsi_set_current_line(124, ng0);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1564);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 32);
    goto LAB36;

LAB80:    xsi_set_current_line(130, ng0);
    t5 = ((char*)((ng72)));
    t6 = (t0 + 1472);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng24)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng25)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2576);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB81:    xsi_set_current_line(134, ng0);
    t5 = (t0 + 2224);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB82:    xsi_set_current_line(134, ng0);
    t6 = xsi_vlog_time(t18, 1000.0000000000000, 10.000000000000000);
    t7 = (t0 + 1288);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    t19 = (t0 + 1380);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 1472);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = (t0 + 600U);
    t26 = *((char **)t25);
    t25 = (t0 + 692U);
    t27 = *((char **)t25);
    t25 = (t0 + 784U);
    t28 = *((char **)t25);
    t25 = (t0 + 876U);
    t29 = *((char **)t25);
    t25 = (t0 + 968U);
    t30 = *((char **)t25);
    t25 = (t0 + 1060U);
    t31 = *((char **)t25);
    xsi_vlogfile_write(1, 0, 0, ng26, 11, t0, (char)118, t18, 64, (char)118, t14, 32, (char)118, t21, 32, (char)118, t24, 5, (char)118, t26, 32, (char)118, t27, 32, (char)118, t28, 1, (char)118, t29, 1, (char)118, t30, 1, (char)118, t31, 1);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2584);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB83:    xsi_set_current_line(139, ng0);
    t5 = ((char*)((ng72)));
    t6 = (t0 + 1472);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng27)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng28)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2592);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB84:    xsi_set_current_line(143, ng0);
    t5 = (t0 + 2224);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB85:    xsi_set_current_line(143, ng0);
    t6 = xsi_vlog_time(t18, 1000.0000000000000, 10.000000000000000);
    t7 = (t0 + 1288);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    t19 = (t0 + 1380);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 1472);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = (t0 + 600U);
    t26 = *((char **)t25);
    t25 = (t0 + 692U);
    t27 = *((char **)t25);
    t25 = (t0 + 784U);
    t28 = *((char **)t25);
    t25 = (t0 + 876U);
    t29 = *((char **)t25);
    t25 = (t0 + 968U);
    t30 = *((char **)t25);
    t25 = (t0 + 1060U);
    t31 = *((char **)t25);
    xsi_vlogfile_write(1, 0, 0, ng26, 11, t0, (char)118, t18, 64, (char)118, t14, 32, (char)118, t21, 32, (char)118, t24, 5, (char)118, t26, 32, (char)118, t27, 32, (char)118, t28, 1, (char)118, t29, 1, (char)118, t30, 1, (char)118, t31, 1);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2600);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB86:    xsi_set_current_line(147, ng0);
    t5 = ((char*)((ng72)));
    t6 = (t0 + 1472);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng29)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng30)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 2608);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB87:    xsi_set_current_line(151, ng0);
    t5 = (t0 + 2224);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB88;
    goto LAB1;

LAB88:    xsi_set_current_line(151, ng0);
    t6 = xsi_vlog_time(t18, 1000.0000000000000, 10.000000000000000);
    t7 = (t0 + 1288);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    t19 = (t0 + 1380);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 1472);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = (t0 + 600U);
    t26 = *((char **)t25);
    t25 = (t0 + 692U);
    t27 = *((char **)t25);
    t25 = (t0 + 784U);
    t28 = *((char **)t25);
    t25 = (t0 + 876U);
    t29 = *((char **)t25);
    t25 = (t0 + 968U);
    t30 = *((char **)t25);
    t25 = (t0 + 1060U);
    t31 = *((char **)t25);
    xsi_vlogfile_write(1, 0, 0, ng26, 11, t0, (char)118, t18, 64, (char)118, t14, 32, (char)118, t21, 32, (char)118, t24, 5, (char)118, t26, 32, (char)118, t27, 32, (char)118, t28, 1, (char)118, t29, 1, (char)118, t30, 1, (char)118, t31, 1);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 2616);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB89:    xsi_set_current_line(155, ng0);
    t5 = ((char*)((ng72)));
    t6 = (t0 + 1472);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng32)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng31)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 2624);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB90:    xsi_set_current_line(159, ng0);
    t5 = (t0 + 2224);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB91:    xsi_set_current_line(159, ng0);
    t6 = xsi_vlog_time(t18, 1000.0000000000000, 10.000000000000000);
    t7 = (t0 + 1288);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    t19 = (t0 + 1380);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 1472);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = (t0 + 600U);
    t26 = *((char **)t25);
    t25 = (t0 + 692U);
    t27 = *((char **)t25);
    t25 = (t0 + 784U);
    t28 = *((char **)t25);
    t25 = (t0 + 876U);
    t29 = *((char **)t25);
    t25 = (t0 + 968U);
    t30 = *((char **)t25);
    t25 = (t0 + 1060U);
    t31 = *((char **)t25);
    xsi_vlogfile_write(1, 0, 0, ng26, 11, t0, (char)118, t18, 64, (char)118, t14, 32, (char)118, t21, 32, (char)118, t24, 5, (char)118, t26, 32, (char)118, t27, 32, (char)118, t28, 1, (char)118, t29, 1, (char)118, t30, 1, (char)118, t31, 1);
    xsi_set_current_line(161, ng0);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);
    xsi_set_current_line(164, ng0);
    xsi_vlogfile_write(1, 0, 0, ng73, 1, t0);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 2632);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB92;
    goto LAB1;

LAB92:    xsi_set_current_line(166, ng0);
    t5 = ((char*)((ng74)));
    t6 = (t0 + 1472);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng24)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng25)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 2640);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB93;
    goto LAB1;

LAB93:    xsi_set_current_line(170, ng0);
    t5 = (t0 + 2224);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB94;
    goto LAB1;

LAB94:    xsi_set_current_line(170, ng0);
    t6 = xsi_vlog_time(t18, 1000.0000000000000, 10.000000000000000);
    t7 = (t0 + 1288);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    t19 = (t0 + 1380);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 1472);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = (t0 + 600U);
    t26 = *((char **)t25);
    t25 = (t0 + 692U);
    t27 = *((char **)t25);
    t25 = (t0 + 784U);
    t28 = *((char **)t25);
    t25 = (t0 + 876U);
    t29 = *((char **)t25);
    t25 = (t0 + 968U);
    t30 = *((char **)t25);
    t25 = (t0 + 1060U);
    t31 = *((char **)t25);
    xsi_vlogfile_write(1, 0, 0, ng26, 11, t0, (char)118, t18, 64, (char)118, t14, 32, (char)118, t21, 32, (char)118, t24, 5, (char)118, t26, 32, (char)118, t27, 32, (char)118, t28, 1, (char)118, t29, 1, (char)118, t30, 1, (char)118, t31, 1);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 2648);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB95:    xsi_set_current_line(175, ng0);
    t5 = ((char*)((ng74)));
    t6 = (t0 + 1472);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng27)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng28)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 2656);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB96;
    goto LAB1;

LAB96:    xsi_set_current_line(179, ng0);
    t5 = (t0 + 2224);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB97:    xsi_set_current_line(179, ng0);
    t6 = xsi_vlog_time(t18, 1000.0000000000000, 10.000000000000000);
    t7 = (t0 + 1288);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    t19 = (t0 + 1380);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 1472);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = (t0 + 600U);
    t26 = *((char **)t25);
    t25 = (t0 + 692U);
    t27 = *((char **)t25);
    t25 = (t0 + 784U);
    t28 = *((char **)t25);
    t25 = (t0 + 876U);
    t29 = *((char **)t25);
    t25 = (t0 + 968U);
    t30 = *((char **)t25);
    t25 = (t0 + 1060U);
    t31 = *((char **)t25);
    xsi_vlogfile_write(1, 0, 0, ng26, 11, t0, (char)118, t18, 64, (char)118, t14, 32, (char)118, t21, 32, (char)118, t24, 5, (char)118, t26, 32, (char)118, t27, 32, (char)118, t28, 1, (char)118, t29, 1, (char)118, t30, 1, (char)118, t31, 1);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 2664);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB98;
    goto LAB1;

LAB98:    xsi_set_current_line(183, ng0);
    t5 = ((char*)((ng74)));
    t6 = (t0 + 1472);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng29)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng30)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 2672);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB99:    xsi_set_current_line(187, ng0);
    t5 = (t0 + 2224);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB100;
    goto LAB1;

LAB100:    xsi_set_current_line(187, ng0);
    t6 = xsi_vlog_time(t18, 1000.0000000000000, 10.000000000000000);
    t7 = (t0 + 1288);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    t19 = (t0 + 1380);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 1472);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = (t0 + 600U);
    t26 = *((char **)t25);
    t25 = (t0 + 692U);
    t27 = *((char **)t25);
    t25 = (t0 + 784U);
    t28 = *((char **)t25);
    t25 = (t0 + 876U);
    t29 = *((char **)t25);
    t25 = (t0 + 968U);
    t30 = *((char **)t25);
    t25 = (t0 + 1060U);
    t31 = *((char **)t25);
    xsi_vlogfile_write(1, 0, 0, ng26, 11, t0, (char)118, t18, 64, (char)118, t14, 32, (char)118, t21, 32, (char)118, t24, 5, (char)118, t26, 32, (char)118, t27, 32, (char)118, t28, 1, (char)118, t29, 1, (char)118, t30, 1, (char)118, t31, 1);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 2680);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB101:    xsi_set_current_line(191, ng0);
    t5 = ((char*)((ng74)));
    t6 = (t0 + 1472);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng32)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng31)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 2688);
    *((int *)t2) = 1;
    t4 = (t0 + 2352);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB102:    xsi_set_current_line(195, ng0);
    t5 = (t0 + 2224);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB103:    xsi_set_current_line(195, ng0);
    t6 = xsi_vlog_time(t18, 1000.0000000000000, 10.000000000000000);
    t7 = (t0 + 1288);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    t19 = (t0 + 1380);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 1472);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = (t0 + 600U);
    t26 = *((char **)t25);
    t25 = (t0 + 692U);
    t27 = *((char **)t25);
    t25 = (t0 + 784U);
    t28 = *((char **)t25);
    t25 = (t0 + 876U);
    t29 = *((char **)t25);
    t25 = (t0 + 968U);
    t30 = *((char **)t25);
    t25 = (t0 + 1060U);
    t31 = *((char **)t25);
    xsi_vlogfile_write(1, 0, 0, ng26, 11, t0, (char)118, t18, 64, (char)118, t14, 32, (char)118, t21, 32, (char)118, t24, 5, (char)118, t26, 32, (char)118, t27, 32, (char)118, t28, 1, (char)118, t29, 1, (char)118, t30, 1, (char)118, t31, 1);
    xsi_set_current_line(197, ng0);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);
    xsi_set_current_line(199, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000001140594953_2557627042_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Initial_37_1};
	xsi_register_didat("work_m_00000000001140594953_2557627042", "isim/ALU32_TestBench_isim_beh.exe.sim/work/m_00000000001140594953_2557627042.didat");
	xsi_register_executes(pe);
}
