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
static const char *ng0 = "C:/Users/Rosswell/Documents/_440/ISA_440/Integer_Datapath/Integer_Datapath_tb.v";
static const char *ng1 = " ";
static const char *ng2 = "Displaying values within the register";
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {16, 0};
static const char *ng7 = "t = %t || S at Address %h = %h || T at Address %h = %h";
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {17U, 0U};
static int ng10[] = {1, 0};
static int ng11[] = {9, 0};
static const char *ng12 = " ps";
static const char *ng13 = "IntReg_Lab3.dat";



static int sp_reg_Dump(char *t1, char *t2)
{
    char t9[8];
    char t18[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(91, ng0);

LAB5:    xsi_set_current_line(92, ng0);
    t5 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t5);
    xsi_set_current_line(93, ng0);
    t4 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t4);
    xsi_set_current_line(94, ng0);
    t4 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t4);
    xsi_set_current_line(95, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(95, ng0);

LAB7:    xsi_set_current_line(96, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 2952);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    xsi_set_current_line(97, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 3912);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 3272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 3592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(100, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 2792);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(101, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 5032);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(103, ng0);
    xsi_set_current_line(103, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 5192);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB8:    t4 = (t1 + 5192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t7, 32);
    t8 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(111, ng0);
    t4 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t4);
    goto LAB4;

LAB9:    xsi_set_current_line(103, ng0);

LAB11:    xsi_set_current_line(104, ng0);
    t15 = (t2 + 88U);
    t16 = *((char **)t15);
    t17 = (t16 + 16U);
    xsi_wp_set_status(t17, 1);
    *((char **)t3) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(105, ng0);
    t19 = xsi_vlog_time(t18, 1000.0000000000000, 1000.0000000000000);
    t20 = (t1 + 2792);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t1 + 1912U);
    t24 = *((char **)t23);
    t23 = (t1 + 3592);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t1 + 2072U);
    t28 = *((char **)t27);
    t27 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng7, 6, t27, (char)118, t18, 64, (char)118, t22, 5, (char)118, t24, 32, (char)118, t26, 5, (char)118, t28, 32);
    xsi_set_current_line(107, ng0);
    t4 = (t1 + 5192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2792);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 5);
    xsi_set_current_line(108, ng0);
    t4 = (t1 + 5192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 3592);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 5);
    xsi_set_current_line(103, ng0);
    t4 = (t1 + 5192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 5192);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB8;

}

static int sp_reg_Write(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(116, ng0);

LAB5:    xsi_set_current_line(117, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(117, ng0);
    t8 = ((char*)((ng8)));
    t9 = (t1 + 3272);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 3912);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 2952);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(117, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 5032);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(118, ng0);
    xsi_set_current_line(118, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 5192);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB7:    t4 = (t1 + 5192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t7, 32);
    t8 = (t10 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(124, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 3272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB4;

LAB8:    xsi_set_current_line(118, ng0);

LAB10:    xsi_set_current_line(119, ng0);
    t9 = (t1 + 5352);
    t16 = (t9 + 56U);
    t17 = *((char **)t16);
    t19 = (t1 + 5352);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t1 + 5352);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t1 + 3432);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t18, 32, t17, t21, t24, 2, 1, t27, 5, 2);
    t28 = (t1 + 3752);
    xsi_vlogvar_assign_value(t28, t18, 0, 0, 32);
    xsi_set_current_line(121, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(122, ng0);
    t7 = (t1 + 3432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t16 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 5, t9, 5, t16, 5);
    t17 = (t1 + 3432);
    xsi_vlogvar_assign_value(t17, t10, 0, 0, 5);
    xsi_set_current_line(118, ng0);
    t4 = (t1 + 5192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 5192);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB7;

}

static void Always_32_0(char *t0)
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

LAB0:    t1 = (t0 + 6272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 6080);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);
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

static void Initial_57_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 6520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);

LAB4:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5032);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 6328);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng11)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = ((char*)((ng10)));
    t5 = ((char*)((ng11)));
    xsi_vlog_setTimeFormat(*((unsigned int *)t4), *((unsigned int *)t3), ng12, 0, *((unsigned int *)t5));
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5352);
    xsi_vlogfile_readmemh(ng13, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 6328);
    t3 = (t0 + 1280);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t5);

LAB8:    t6 = (t0 + 6424);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB10:    if (t14 != 0)
        goto LAB11;

LAB6:    t7 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t7);

LAB7:    t15 = (t0 + 6424);
    t16 = *((char **)t15);
    t15 = (t0 + 1280);
    t17 = (t0 + 6328);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 6328);
    t3 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t5);

LAB14:    t6 = (t0 + 6424);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB16:    if (t14 != 0)
        goto LAB17;

LAB12:    t7 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t7);

LAB13:    t15 = (t0 + 6424);
    t16 = *((char **)t15);
    t15 = (t0 + 848);
    t17 = (t0 + 6328);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    goto LAB1;

LAB9:;
LAB11:    t6 = (t0 + 6520U);
    *((char **)t6) = &&LAB8;
    goto LAB1;

LAB15:;
LAB17:    t6 = (t0 + 6520U);
    *((char **)t6) = &&LAB14;
    goto LAB1;

}


extern void work_m_00000000003233991127_2007924558_init()
{
	static char *pe[] = {(void *)Always_32_0,(void *)Initial_57_1};
	static char *se[] = {(void *)sp_reg_Dump,(void *)sp_reg_Write};
	xsi_register_didat("work_m_00000000003233991127_2007924558", "isim/Integer_Datapath_tb_isim_beh.exe.sim/work/m_00000000003233991127_2007924558.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
