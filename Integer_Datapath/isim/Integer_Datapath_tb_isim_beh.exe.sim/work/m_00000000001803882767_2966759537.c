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
static const char *ng0 = "C:/Users/Rosswell/Documents/_440/ISA_440/Integer_Datapath/MPY_32.v";
static unsigned int ng1[] = {1U, 1U};
static unsigned int ng2[] = {0U, 0U, 0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};



static void Always_24_0(char *t0)
{
    char t8[16];
    char t11[8];
    char t18[8];
    char t19[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3968);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_signed_multiply(t8, 64, t4, 32, t7, 32);
    t9 = (t0 + 1768);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t8, 32, 0, 32);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t6 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t6);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t5) = t17;
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t8, 64, 64, 2U, t7, 32, t4, 32);
    t9 = ((char*)((ng2)));
    xsi_vlog_unsigned_equal(t19, 64, t8, 64, t9, 64);
    memset(t18, 0, 8);
    t10 = (t19 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (~(t12));
    t14 = *((unsigned int *)t19);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t10) != 0)
        goto LAB8;

LAB9:    t21 = (t18 + 4);
    t17 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t21);
    t23 = (t17 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    t27 = *((unsigned int *)t21);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t21) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t18) > 0)
        goto LAB16;

LAB17:    memcpy(t11, t29, 8);

LAB18:    t30 = (t0 + 2408);
    xsi_vlogvar_assign_value(t30, t11, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t18) = 1;
    goto LAB9;

LAB8:    t20 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t20) = 1;
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
	static char *pe[] = {(void *)Always_24_0};
	xsi_register_didat("work_m_00000000001803882767_2966759537", "isim/Integer_Datapath_tb_isim_beh.exe.sim/work/m_00000000001803882767_2966759537.didat");
	xsi_register_executes(pe);
}
