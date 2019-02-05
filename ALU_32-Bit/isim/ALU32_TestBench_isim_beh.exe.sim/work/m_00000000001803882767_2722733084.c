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
static const char *ng0 = "C:/Users/Rosswell/Documents/ISA_440/ALU_32-Bit/DIV_32.v";
static unsigned int ng1[] = {1U, 1U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};



static void Always_25_0(char *t0)
{
    char t8[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2284);
    *((int *)t2) = 1;
    t3 = (t0 + 2116);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = (t0 + 1472);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1564);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_divide(t8, 32, t4, 32, t7, 32);
    t9 = (t0 + 1012);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_mod(t8, 32, t4, 32, t7, 32);
    t9 = (t0 + 920);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t7 = (t0 + 1288);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t18 = (t12 | t15);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB9;

LAB6:    if (t21 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t17) = 1;

LAB9:    memset(t16, 0, 8);
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t17);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t24) != 0)
        goto LAB12;

LAB13:    t31 = (t16 + 4);
    t32 = *((unsigned int *)t16);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    t36 = *((unsigned int *)t16);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t31) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t16) > 0)
        goto LAB20;

LAB21:    memcpy(t8, t40, 8);

LAB22:    t41 = (t0 + 1380);
    xsi_vlogvar_assign_value(t41, t8, 0, 0, 1);
    goto LAB2;

LAB8:    t9 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t16) = 1;
    goto LAB13;

LAB12:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB13;

LAB14:    t35 = ((char*)((ng3)));
    goto LAB15;

LAB16:    t40 = ((char*)((ng2)));
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t8, 1, t35, 1, t40, 1);
    goto LAB22;

LAB20:    memcpy(t8, t35, 8);
    goto LAB22;

}


extern void work_m_00000000001803882767_2722733084_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_00000000001803882767_2722733084", "isim/ALU32_TestBench_isim_beh.exe.sim/work/m_00000000001803882767_2722733084.didat");
	xsi_register_executes(pe);
}
