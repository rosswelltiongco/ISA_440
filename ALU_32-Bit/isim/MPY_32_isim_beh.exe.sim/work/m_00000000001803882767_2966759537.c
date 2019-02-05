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
static const char *ng0 = "C:/Users/Rosswell/Documents/ISA_440/ALU_32-Bit/MPY_32.v";
static unsigned int ng1[] = {1U, 1U};
static unsigned int ng2[] = {0U, 0U, 0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};



static void Always_9_0(char *t0)
{
    char t8[16];
    char t11[8];
    char t12[8];
    char t13[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 2284);
    *((int *)t2) = 1;
    t3 = (t0 + 2116);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng0);

LAB5:    xsi_set_current_line(10, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = (t0 + 1472);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(11, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1564);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(12, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    xsi_vlog_signed_multiply(t8, 64, t4, 32, t7, 32);
    t9 = (t0 + 1012);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    t10 = (t0 + 920);
    xsi_vlogvar_assign_value(t10, t8, 32, 0, 32);
    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(16, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t5) = 1;
    t6 = (t0 + 1288);
    xsi_vlogvar_assign_value(t6, t11, 0, 0, 1);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 920);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t8, 64, 64, 2U, t7, 32, t4, 32);
    t9 = ((char*)((ng2)));
    xsi_vlog_unsigned_equal(t13, 64, t8, 64, t9, 64);
    memset(t12, 0, 8);
    t10 = (t13 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t10) != 0)
        goto LAB8;

LAB9:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t20) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t12) > 0)
        goto LAB16;

LAB17:    memcpy(t11, t29, 8);

LAB18:    t30 = (t0 + 1380);
    xsi_vlogvar_assign_value(t30, t11, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB8:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    t24 = ((char*)((ng3)));
    goto LAB11;

LAB12:    t29 = ((char*)((ng4)));
    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t11, 1, t24, 1, t29, 1);
    goto LAB18;

LAB16:    memcpy(t11, t24, 8);
    goto LAB18;

}


extern void work_m_00000000001803882767_2966759537_init()
{
	static char *pe[] = {(void *)Always_9_0};
	xsi_register_didat("work_m_00000000001803882767_2966759537", "isim/MPY_32_isim_beh.exe.sim/work/m_00000000001803882767_2966759537.didat");
	xsi_register_executes(pe);
}
