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
static const char *ng1 = "\nPERFORMING REGISTER DUMP\n";
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {16, 0};
static const char *ng6 = "t = %t || S_Addr: %h|| ALU_OUT: %h";
static int ng7[] = {1, 0};
static const char *ng8 = " ";
static const char *ng9 = "\nPERFORMING REGISTER INITIALIZATION\n";
static const char *ng10 = "IntReg_Lab3.dat";
static unsigned int ng11[] = {1U, 0U};
static const char *ng12 = "\nPERFORMING MICRO-OPERATIONS\n";
static unsigned int ng13[] = {33892U, 0U};
static unsigned int ng14[] = {146U, 0U};
static unsigned int ng15[] = {4294967291U, 0U};
static unsigned int ng16[] = {2882400001U, 0U};
static unsigned int ng17[] = {268501184U, 0U};
static unsigned int ng18[] = {34862U, 0U};
static unsigned int ng19[] = {66U, 0U};
static unsigned int ng20[] = {35844U, 0U};
static unsigned int ng21[] = {194U, 0U};
static unsigned int ng22[] = {36869U, 0U};
static unsigned int ng23[] = {226U, 0U};
static unsigned int ng24[] = {494U, 0U};
static unsigned int ng25[] = {504U, 0U};
static unsigned int ng26[] = {38912U, 0U};
static unsigned int ng27[] = {4U, 0U};
static unsigned int ng28[] = {37888U, 0U};
static unsigned int ng29[] = {3U, 0U};
static unsigned int ng30[] = {359U, 0U};
static unsigned int ng31[] = {1000U, 0U};
static unsigned int ng32[] = {40960U, 0U};
static unsigned int ng33[] = {39936U, 0U};
static unsigned int ng34[] = {45056U, 0U};
static unsigned int ng35[] = {44043U, 0U};
static unsigned int ng36[] = {178U, 0U};
static unsigned int ng37[] = {43018U, 0U};
static unsigned int ng38[] = {82U, 0U};
static unsigned int ng39[] = {42315U, 0U};
static unsigned int ng40[] = {50U, 0U};
static unsigned int ng41[] = {46080U, 0U};
static int ng42[] = {9, 0};
static const char *ng43 = " ps";



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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(103, ng0);

LAB5:    xsi_set_current_line(104, ng0);
    t5 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t5);
    xsi_set_current_line(105, ng0);
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

LAB6:    xsi_set_current_line(105, ng0);

LAB7:    xsi_set_current_line(107, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t1 + 3864);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    xsi_set_current_line(108, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(109, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4184);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4344);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4504);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(112, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4664);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(113, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(114, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4984);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(116, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(117, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(119, ng0);
    xsi_set_current_line(119, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 5624);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB8:    t4 = (t1 + 5624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
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

LAB10:    xsi_set_current_line(126, ng0);
    t4 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t4);
    goto LAB4;

LAB9:    xsi_set_current_line(119, ng0);

LAB11:    xsi_set_current_line(120, ng0);
    t15 = (t2 + 88U);
    t16 = *((char **)t15);
    t17 = (t16 + 16U);
    xsi_wp_set_status(t17, 1);
    *((char **)t3) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(121, ng0);
    t19 = xsi_vlog_time(t18, 1000.0000000000000, 1000.0000000000000);
    t20 = (t1 + 3864);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t1 + 2984U);
    t24 = *((char **)t23);
    t23 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng6, 4, t23, (char)118, t18, 64, (char)118, t22, 5, (char)118, t24, 32);
    xsi_set_current_line(123, ng0);
    t4 = (t1 + 5624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 3864);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 5);
    xsi_set_current_line(119, ng0);
    t4 = (t1 + 5624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 5624);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB8;

}

static int sp_reg_Init(char *t1, char *t2)
{
    char t9[8];
    char t18[8];
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

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(132, ng0);

LAB5:    xsi_set_current_line(134, ng0);
    t5 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t5);
    xsi_set_current_line(135, ng0);
    t4 = (t1 + 5784);
    xsi_vlogfile_readmemh(ng10, 0, t4, 0, 0, 0, 0);
    xsi_set_current_line(136, ng0);
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

LAB6:    xsi_set_current_line(136, ng0);
    t7 = ((char*)((ng11)));
    t8 = (t1 + 4344);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t1 + 4984);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t1 + 4024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(136, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(137, ng0);
    xsi_set_current_line(137, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 5624);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB7:    t4 = (t1 + 5624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t7, 32);
    t8 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(142, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4344);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB4;

LAB8:    xsi_set_current_line(137, ng0);

LAB10:    xsi_set_current_line(139, ng0);
    t15 = (t1 + 5784);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t1 + 5784);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t1 + 5784);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t1 + 4504);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t18, 32, t17, t21, t24, 2, 1, t27, 5, 2);
    t28 = (t1 + 4824);
    xsi_vlogvar_assign_value(t28, t18, 0, 0, 32);
    xsi_set_current_line(140, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(140, ng0);
    t7 = (t1 + 4504);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = ((char*)((ng11)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 5, t15, 5, t16, 5);
    t17 = (t1 + 4504);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 5);
    xsi_set_current_line(137, ng0);
    t4 = (t1 + 5624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 5624);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB7;

}

static int sp_do_Ops(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(146, ng0);

LAB5:    xsi_set_current_line(147, ng0);
    t5 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t5);
    xsi_set_current_line(150, ng0);
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

LAB6:    xsi_set_current_line(151, ng0);
    t7 = ((char*)((ng13)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(152, ng0);
    t4 = ((char*)((ng14)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(154, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(155, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(156, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(159, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(160, ng0);
    t7 = ((char*)((ng18)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(161, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(163, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(164, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(165, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(168, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(169, ng0);
    t7 = ((char*)((ng20)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(170, ng0);
    t4 = ((char*)((ng21)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(172, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(173, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(174, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(177, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 48U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(178, ng0);
    t7 = ((char*)((ng22)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(179, ng0);
    t4 = ((char*)((ng23)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(181, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(182, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(183, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(187, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 64U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(188, ng0);
    t7 = ((char*)((ng24)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(189, ng0);
    t4 = ((char*)((ng25)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(191, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(192, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(193, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(194, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 80U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(195, ng0);
    t7 = ((char*)((ng26)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(196, ng0);
    t4 = ((char*)((ng27)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(198, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(199, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(200, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(201, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 96U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(202, ng0);
    t7 = ((char*)((ng28)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(203, ng0);
    t4 = ((char*)((ng29)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(205, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(206, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(207, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(211, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 112U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(212, ng0);
    t7 = ((char*)((ng30)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(213, ng0);
    t4 = ((char*)((ng31)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(215, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(216, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(217, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(218, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 128U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(219, ng0);
    t7 = ((char*)((ng32)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(220, ng0);
    t4 = ((char*)((ng27)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(222, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(223, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(224, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(225, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 144U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(226, ng0);
    t7 = ((char*)((ng33)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(227, ng0);
    t4 = ((char*)((ng29)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(229, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(230, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(231, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(234, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 160U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(235, ng0);
    t7 = ((char*)((ng34)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(236, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(238, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(239, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(240, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(243, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 176U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(244, ng0);
    t7 = ((char*)((ng35)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(245, ng0);
    t4 = ((char*)((ng36)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(247, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(248, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(249, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(252, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 192U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(253, ng0);
    t7 = ((char*)((ng37)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(254, ng0);
    t4 = ((char*)((ng38)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(256, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(257, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(258, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(261, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 208U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(262, ng0);
    t7 = ((char*)((ng39)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(263, ng0);
    t4 = ((char*)((ng40)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(265, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(266, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(267, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(270, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 224U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(271, ng0);
    t7 = ((char*)((ng41)));
    t8 = (t1 + 4664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t7, 5, 0, 5);
    t10 = (t1 + 4504);
    xsi_vlogvar_assign_value(t10, t7, 10, 0, 5);
    t11 = (t1 + 4344);
    xsi_vlogvar_assign_value(t11, t7, 15, 0, 1);
    xsi_set_current_line(272, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t4, 3, 0, 1);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t4, 4, 0, 5);
    t8 = (t1 + 4984);
    xsi_vlogvar_assign_value(t8, t4, 9, 0, 1);
    xsi_set_current_line(274, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(275, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(276, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB4;

}

static void Always_69_0(char *t0)
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

LAB0:    t1 = (t0 + 6704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 6512);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 3544);
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
    t24 = (t0 + 3544);
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

static void Initial_74_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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

LAB0:    t1 = (t0 + 6952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);

LAB4:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng42)));
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 32, t2, 32);
    t4 = ((char*)((ng7)));
    t5 = ((char*)((ng42)));
    xsi_vlog_setTimeFormat(*((unsigned int *)t3), *((unsigned int *)t4), ng43, 0, *((unsigned int *)t5));
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3544);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3704);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4504);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4664);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4824);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4984);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 5144);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 5464);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 7272);
    *((int *)t2) = 1;
    t4 = (t0 + 6984);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(91, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 3704);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 7288);
    *((int *)t2) = 1;
    t4 = (t0 + 6984);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(92, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t0 + 3704);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6760);
    t4 = (t0 + 1280);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB9:    t6 = (t0 + 6856);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB11:    if (t14 != 0)
        goto LAB12;

LAB7:    t7 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t7);

LAB8:    t15 = (t0 + 6856);
    t16 = *((char **)t15);
    t15 = (t0 + 1280);
    t17 = (t0 + 6760);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6760);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB15:    t6 = (t0 + 6856);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB17:    if (t14 != 0)
        goto LAB18;

LAB13:    t7 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t7);

LAB14:    t15 = (t0 + 6856);
    t16 = *((char **)t15);
    t15 = (t0 + 848);
    t17 = (t0 + 6760);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 6760);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB21:    t6 = (t0 + 6856);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB23:    if (t14 != 0)
        goto LAB24;

LAB19:    t7 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t7);

LAB20:    t15 = (t0 + 6856);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t17 = (t0 + 6760);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 6760);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB27:    t6 = (t0 + 6856);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB29:    if (t14 != 0)
        goto LAB30;

LAB25:    t7 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t7);

LAB26:    t15 = (t0 + 6856);
    t16 = *((char **)t15);
    t15 = (t0 + 848);
    t17 = (t0 + 6760);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    goto LAB1;

LAB10:;
LAB12:    t6 = (t0 + 6952U);
    *((char **)t6) = &&LAB9;
    goto LAB1;

LAB16:;
LAB18:    t6 = (t0 + 6952U);
    *((char **)t6) = &&LAB15;
    goto LAB1;

LAB22:;
LAB24:    t6 = (t0 + 6952U);
    *((char **)t6) = &&LAB21;
    goto LAB1;

LAB28:;
LAB30:    t6 = (t0 + 6952U);
    *((char **)t6) = &&LAB27;
    goto LAB1;

}


extern void work_m_00000000003199294297_2007924558_init()
{
	static char *pe[] = {(void *)Always_69_0,(void *)Initial_74_1};
	static char *se[] = {(void *)sp_reg_Dump,(void *)sp_reg_Init,(void *)sp_do_Ops};
	xsi_register_didat("work_m_00000000003199294297_2007924558", "isim/Integer_Datapath_tb_isim_beh.exe.sim/work/m_00000000003199294297_2007924558.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
