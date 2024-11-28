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
static const char *ng0 = "D:/SUT/EE/8th Semester/ASIC and FPGA Chip Design - Shabany/Project/Phase 2/Check/Test_Header/HeaderCreator.v";
static unsigned int ng1[] = {65535U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};



static void Initial_15_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(15, ng0);

LAB2:    xsi_set_current_line(16, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    t5 = (t0 + 1928);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 1928);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(17, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    t5 = (t0 + 1928);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 1928);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(18, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    t5 = (t0 + 1928);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 1928);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t4), t22, 0LL);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t4), t22, 0LL);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t4), t22, 0LL);
    goto LAB8;

}

static void Always_21_1(char *t0)
{
    char t14[8];
    char t23[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 3896);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:
LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(22, ng0);

LAB9:    xsi_set_current_line(30, ng0);
    t11 = (t0 + 1928);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 1928);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 1928);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t14, 16, t13, t17, t20, 2, 1, t21, 32, 1);
    t22 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t22, t14, 0, 0, 16, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 1928);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t14, 16, t4, t12, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 1928);
    t19 = (t0 + 1928);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 1928);
    t25 = (t22 + 64U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t23, t24, t21, t26, 2, 1, t27, 32, 1);
    t28 = (t23 + 4);
    t6 = *((unsigned int *)t28);
    t29 = (!(t6));
    t30 = (t24 + 4);
    t7 = *((unsigned int *)t30);
    t31 = (!(t7));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 1928);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t14, 16, t4, t12, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 1928);
    t19 = (t0 + 1928);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 1928);
    t25 = (t22 + 64U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t23, t24, t21, t26, 2, 1, t27, 32, 1);
    t28 = (t23 + 4);
    t6 = *((unsigned int *)t28);
    t29 = (!(t6));
    t30 = (t24 + 4);
    t7 = *((unsigned int *)t30);
    t31 = (!(t7));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 1928);
    t13 = (t12 + 64U);
    t15 = *((char **)t13);
    t16 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t14, t23, t11, t15, 2, 1, t16, 32, 1);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t17);
    t29 = (!(t6));
    t18 = (t23 + 4);
    t7 = *((unsigned int *)t18);
    t31 = (!(t7));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB8;

LAB10:    t8 = *((unsigned int *)t23);
    t9 = *((unsigned int *)t24);
    t33 = (t8 - t9);
    t34 = (t33 + 1);
    xsi_vlogvar_wait_assign_value(t18, t14, 0, *((unsigned int *)t24), t34, 0LL);
    goto LAB11;

LAB12:    t8 = *((unsigned int *)t23);
    t9 = *((unsigned int *)t24);
    t33 = (t8 - t9);
    t34 = (t33 + 1);
    xsi_vlogvar_wait_assign_value(t18, t14, 0, *((unsigned int *)t24), t34, 0LL);
    goto LAB13;

LAB14:    t8 = *((unsigned int *)t14);
    t9 = *((unsigned int *)t23);
    t33 = (t8 - t9);
    t34 = (t33 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t23), t34, 0LL);
    goto LAB15;

LAB16:    xsi_set_current_line(38, ng0);

LAB19:    xsi_set_current_line(39, ng0);
    t11 = (t0 + 2248);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t16 = (t13 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB21;

LAB20:    t17 = (t15 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t13) < *((unsigned int *)t15))
        goto LAB22;

LAB23:    t19 = (t14 + 4);
    t35 = *((unsigned int *)t19);
    t36 = (~(t35));
    t37 = *((unsigned int *)t14);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(45, ng0);

LAB33:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 1928);
    t13 = (t12 + 64U);
    t15 = *((char **)t13);
    t16 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t14, t23, t11, t15, 2, 1, t16, 32, 1);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t17);
    t29 = (!(t6));
    t18 = (t23 + 4);
    t7 = *((unsigned int *)t18);
    t31 = (!(t7));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 1928);
    t13 = (t12 + 64U);
    t15 = *((char **)t13);
    t16 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t14, t23, t11, t15, 2, 1, t16, 32, 1);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t17);
    t29 = (!(t6));
    t18 = (t23 + 4);
    t7 = *((unsigned int *)t18);
    t31 = (!(t7));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 1928);
    t13 = (t12 + 64U);
    t15 = *((char **)t13);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t14, t23, t11, t15, 2, 1, t16, 32, 1);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t17);
    t29 = (!(t6));
    t18 = (t23 + 4);
    t7 = *((unsigned int *)t18);
    t31 = (!(t7));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB38;

LAB39:
LAB27:    goto LAB18;

LAB21:    t18 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB23;

LAB22:    *((unsigned int *)t14) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(39, ng0);

LAB28:    xsi_set_current_line(40, ng0);
    t20 = (t0 + 2248);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t25 = ((char*)((ng3)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t22, 3, t25, 32);
    t26 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t26, t23, 0, 0, 3, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 1928);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t14, 16, t4, t12, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t18, t14, 0, 0, 16, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 1928);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t14, 16, t4, t12, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 1928);
    t19 = (t0 + 1928);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 1928);
    t25 = (t22 + 64U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t23, t24, t21, t26, 2, 1, t27, 32, 1);
    t28 = (t23 + 4);
    t6 = *((unsigned int *)t28);
    t29 = (!(t6));
    t30 = (t24 + 4);
    t7 = *((unsigned int *)t30);
    t31 = (!(t7));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 1928);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t14, 16, t4, t12, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 1928);
    t19 = (t0 + 1928);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 1928);
    t25 = (t22 + 64U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t23, t24, t21, t26, 2, 1, t27, 32, 1);
    t28 = (t23 + 4);
    t6 = *((unsigned int *)t28);
    t29 = (!(t6));
    t30 = (t24 + 4);
    t7 = *((unsigned int *)t30);
    t31 = (!(t7));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB31;

LAB32:    goto LAB27;

LAB29:    t8 = *((unsigned int *)t23);
    t9 = *((unsigned int *)t24);
    t33 = (t8 - t9);
    t34 = (t33 + 1);
    xsi_vlogvar_wait_assign_value(t18, t14, 0, *((unsigned int *)t24), t34, 0LL);
    goto LAB30;

LAB31:    t8 = *((unsigned int *)t23);
    t9 = *((unsigned int *)t24);
    t33 = (t8 - t9);
    t34 = (t33 + 1);
    xsi_vlogvar_wait_assign_value(t18, t14, 0, *((unsigned int *)t24), t34, 0LL);
    goto LAB32;

LAB34:    t8 = *((unsigned int *)t14);
    t9 = *((unsigned int *)t23);
    t33 = (t8 - t9);
    t34 = (t33 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t23), t34, 0LL);
    goto LAB35;

LAB36:    t8 = *((unsigned int *)t14);
    t9 = *((unsigned int *)t23);
    t33 = (t8 - t9);
    t34 = (t33 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t23), t34, 0LL);
    goto LAB37;

LAB38:    t8 = *((unsigned int *)t14);
    t9 = *((unsigned int *)t23);
    t33 = (t8 - t9);
    t34 = (t33 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t23), t34, 0LL);
    goto LAB39;

}


extern void work_m_00000000001220745755_0239464265_init()
{
	static char *pe[] = {(void *)Initial_15_0,(void *)Always_21_1};
	xsi_register_didat("work_m_00000000001220745755_0239464265", "isim/tb_isim_beh.exe.sim/work/m_00000000001220745755_0239464265.didat");
	xsi_register_executes(pe);
}
