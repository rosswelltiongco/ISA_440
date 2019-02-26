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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/016091762/Downloads/ISA_440-master/ISA_440-master/Register_File/regfile32_TB.v";
static const char *ng1 = "\n\nREADING REGISTERS";
static int ng2[] = {0, 0};
static int ng3[] = {16, 0};
static const char *ng4 = "Time %t || S_Addr: %h  S:%h || T_Addr:%h  T:%h";
static int ng5[] = {1, 0};
static const char *ng6 = "\n\nWRITING TO REGISTERS";
static int ng7[] = {32, 0};
static int ng8[] = {8, 0};
static int ng9[] = {65536, 0};
static const char *ng10 = "\n\nCECS440 Register File Testbench";
static const char *ng11 = "\n\nINITIALIZING REGISTERS";
static const char *ng12 = "IntReg_Lab2.dat";
static unsigned int ng13[] = {1U, 0U};
static unsigned int ng14[] = {0U, 0U};
static int ng15[] = {9, 0};
static int ng16[] = {3, 0};
static const char *ng17 = "ns";
static int ng18[] = {5, 0};



static int sp_reg_dump(char *t1, char *t2)
{
    char t8[8];
    char t20[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(90, ng0);
    t7 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t7);
    xsi_set_current_line(91, ng0);
    xsi_set_current_line(91, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB7:    t4 = (t1 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB8;

LAB9:    goto LAB4;

LAB8:    xsi_set_current_line(91, ng0);

LAB10:    xsi_set_current_line(93, ng0);
    t15 = (t2 + 88U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    xsi_wp_set_status(t17, 1);
    *((char **)t3) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(93, ng0);

LAB12:    xsi_set_current_line(94, ng0);
    t18 = ((char*)((ng2)));
    t19 = (t1 + 2632);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2792);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3432);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(97, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3112);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(98, ng0);
    t4 = (t1 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2952);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    xsi_set_current_line(99, ng0);
    t4 = (t1 + 2952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 5, t7, 32);
    t9 = (t1 + 3272);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 5);
    xsi_set_current_line(102, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(103, ng0);
    t7 = (t2 + 56U);
    t9 = *((char **)t7);
    xsi_process_wait(t9, 1000LL);
    *((char **)t3) = &&LAB14;
    t0 = 1;
    goto LAB1;

LAB14:    xsi_set_current_line(103, ng0);
    t15 = xsi_vlog_time(t20, 1000.0000000000000, 1000.0000000000000);
    t16 = (t1 + 2952);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t1 + 1912U);
    t21 = *((char **)t19);
    t19 = (t1 + 3272);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 2072U);
    t25 = *((char **)t24);
    t24 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t24, (char)118, t20, 64, (char)118, t18, 5, (char)118, t21, 32, (char)118, t23, 5, (char)118, t25, 32);
    xsi_set_current_line(91, ng0);
    t4 = (t1 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 3592);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB7;

}

static int sp_reg_write(char *t1, char *t2)
{
    char t8[8];
    char t23[8];
    char t24[8];
    char t25[8];
    char t26[8];
    char t28[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    char *t27;
    char *t29;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(110, ng0);

LAB5:    xsi_set_current_line(111, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(111, ng0);
    t7 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t7);
    xsi_set_current_line(114, ng0);
    xsi_set_current_line(114, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 3592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB7:    t4 = (t1 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB8;

LAB9:    goto LAB4;

LAB8:    xsi_set_current_line(114, ng0);

LAB10:    xsi_set_current_line(116, ng0);
    t15 = (t2 + 88U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    xsi_wp_set_status(t17, 1);
    *((char **)t3) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(117, ng0);
    t18 = (t1 + 3592);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 3112);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 5);
    xsi_set_current_line(118, ng0);
    t4 = (t1 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t6 + 4);
    memcpy(t8, t6, 8);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 4294967295U);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 4294967295U);
    t15 = ((char*)((ng8)));
    memset(t23, 0, 8);
    xsi_vlog_signed_lshift(t23, 32, t8, 32, t15, 32);
    t16 = ((char*)((ng9)));
    memset(t24, 0, 8);
    xsi_vlog_signed_unary_minus(t24, 32, t16, 32);
    t17 = (t1 + 3592);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t25, 0, 8);
    xsi_vlog_signed_multiply(t25, 32, t24, 32, t19, 32);
    memset(t26, 0, 8);
    xsi_vlog_signed_add(t26, 32, t23, 32, t25, 32);
    t20 = (t1 + 3592);
    t21 = (t20 + 56U);
    t27 = *((char **)t21);
    memset(t28, 0, 8);
    xsi_vlog_signed_add(t28, 32, t26, 32, t27, 32);
    t29 = (t1 + 3432);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);
    xsi_set_current_line(119, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2952);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(119, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(120, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 2792);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2632);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t4 = (t1 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 3592);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB7;

}

static void Always_48_0(char *t0)
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

LAB0:    t1 = (t0 + 4672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4480);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 2472);
    t5 = (t4 + 56U);
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
    t24 = (t0 + 2472);
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

static void Initial_50_1(char *t0)
{
    char t6[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;

LAB0:    t1 = (t0 + 4920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);

LAB4:    xsi_set_current_line(51, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(61, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3752);
    xsi_vlogfile_readmemh(ng12, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5256);
    *((int *)t2) = 1;
    t3 = (t0 + 4952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB10;

LAB1:    return;
LAB6:    xsi_set_current_line(64, ng0);

LAB8:    xsi_set_current_line(65, ng0);
    t13 = (t0 + 3752);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 3752);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3752);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3112);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t16, 32, t15, t19, t22, 2, 1, t25, 5, 2);
    t26 = (t0 + 3432);
    xsi_vlogvar_assign_value(t26, t16, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5240);
    *((int *)t2) = 1;
    t3 = (t0 + 4952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t13 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t7, 5, t13, 32);
    t14 = (t0 + 3112);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 5);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3592);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB10:    xsi_set_current_line(71, ng0);
    t4 = ((char*)((ng13)));
    t5 = (t0 + 2632);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5272);
    *((int *)t2) = 1;
    t3 = (t0 + 4952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(72, ng0);
    t4 = ((char*)((ng14)));
    t5 = (t0 + 2632);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 32, t2, 32);
    t3 = ((char*)((ng16)));
    t4 = ((char*)((ng18)));
    xsi_vlog_setTimeFormat(*((unsigned int *)t6), *((unsigned int *)t3), ng17, 0, *((unsigned int *)t4));
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4728);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB14:    t5 = (t0 + 4824);
    t7 = *((char **)t5);
    t13 = (t7 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t17 = *((char **)t15);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t27 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB16:    if (t27 != 0)
        goto LAB17;

LAB12:    t7 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t7);

LAB13:    t20 = (t0 + 4824);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4728);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4728);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB20:    t5 = (t0 + 4824);
    t7 = *((char **)t5);
    t13 = (t7 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t17 = *((char **)t15);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t27 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB22:    if (t27 != 0)
        goto LAB23;

LAB18:    t7 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t7);

LAB19:    t20 = (t0 + 4824);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 4728);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4728);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB26:    t5 = (t0 + 4824);
    t7 = *((char **)t5);
    t13 = (t7 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t17 = *((char **)t15);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t27 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB28:    if (t27 != 0)
        goto LAB29;

LAB24:    t7 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t7);

LAB25:    t20 = (t0 + 4824);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4728);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB1;

LAB15:;
LAB17:    t5 = (t0 + 4920U);
    *((char **)t5) = &&LAB14;
    goto LAB1;

LAB21:;
LAB23:    t5 = (t0 + 4920U);
    *((char **)t5) = &&LAB20;
    goto LAB1;

LAB27:;
LAB29:    t5 = (t0 + 4920U);
    *((char **)t5) = &&LAB26;
    goto LAB1;

}


extern void work_m_00000000000337355388_3061296962_init()
{
	static char *pe[] = {(void *)Always_48_0,(void *)Initial_50_1};
	static char *se[] = {(void *)sp_reg_dump,(void *)sp_reg_write};
	xsi_register_didat("work_m_00000000000337355388_3061296962", "isim/regfile32_TB_isim_beh.exe.sim/work/m_00000000000337355388_3061296962.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
