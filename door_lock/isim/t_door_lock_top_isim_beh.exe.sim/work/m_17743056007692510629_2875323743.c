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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Door Lock/doorlock/door_lock_FSM.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static int ng9[] = {3, 0};
static unsigned int ng10[] = {1U, 1U};
static unsigned int ng11[] = {3U, 3U};
static unsigned int ng12[] = {7U, 7U};



static void Always_38_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 6072);
    *((int *)t2) = 1;
    t3 = (t0 + 5288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 3864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 3, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    goto LAB2;

}

static void Always_45_1(char *t0)
{
    char t16[8];
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
    int t13;
    char *t14;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
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
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 6088);
    *((int *)t2) = 1;
    t3 = (t0 + 5536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 2344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(54, ng0);

LAB10:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:    xsi_set_current_line(164, ng0);

LAB109:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB26:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4024);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB8;

LAB12:    xsi_set_current_line(62, ng0);

LAB27:    xsi_set_current_line(63, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4024);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(69, ng0);

LAB32:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB30:    goto LAB26;

LAB14:    xsi_set_current_line(74, ng0);

LAB33:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 3064);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 4024);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4184);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(88, ng0);

LAB51:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4344);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 2);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3864);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 3);

LAB49:
LAB36:    goto LAB26;

LAB16:    xsi_set_current_line(95, ng0);

LAB52:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 4024);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(109, ng0);

LAB70:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4344);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 2);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3864);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 3);

LAB68:
LAB55:    goto LAB26;

LAB18:    xsi_set_current_line(116, ng0);

LAB71:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4024);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng6)));
    memset(t16, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t12);
    t21 = *((unsigned int *)t14);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB75;

LAB72:    if (t22 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t16) = 1;

LAB75:    t17 = (t16 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(133, ng0);

LAB97:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4344);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 2);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3864);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 3);

LAB95:
LAB82:
LAB78:    goto LAB26;

LAB20:    xsi_set_current_line(139, ng0);

LAB98:    xsi_set_current_line(140, ng0);
    t3 = (t0 + 2024U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB103;

LAB104:    xsi_set_current_line(151, ng0);

LAB107:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4344);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 2);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 3064);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4024);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4184);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3864);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 3);

LAB105:
LAB101:    goto LAB26;

LAB22:    xsi_set_current_line(158, ng0);

LAB108:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4024);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3864);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 3);
    goto LAB26;

LAB28:    xsi_set_current_line(66, ng0);

LAB31:    xsi_set_current_line(67, ng0);
    t5 = (t0 + 1864U);
    t11 = *((char **)t5);
    t5 = (t0 + 3544);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 12);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB30;

LAB34:    xsi_set_current_line(77, ng0);

LAB37:    xsi_set_current_line(78, ng0);
    t5 = (t0 + 3544);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 1864U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t12 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB41;

LAB38:    if (t27 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t16) = 1;

LAB41:    t31 = (t16 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t16);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(81, ng0);

LAB46:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 2, t11, 32);
    t12 = (t0 + 4344);
    xsi_vlogvar_assign_value(t12, t16, 0, 0, 2);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB44:    goto LAB36;

LAB40:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(78, ng0);

LAB45:    xsi_set_current_line(79, ng0);
    t37 = ((char*)((ng1)));
    t38 = (t0 + 4344);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 2);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB44;

LAB47:    xsi_set_current_line(85, ng0);

LAB50:    xsi_set_current_line(86, ng0);
    t5 = (t0 + 3384);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 4344);
    xsi_vlogvar_assign_value(t14, t12, 0, 0, 2);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB49;

LAB53:    xsi_set_current_line(98, ng0);

LAB56:    xsi_set_current_line(99, ng0);
    t5 = (t0 + 3544);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 1864U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t12 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB60;

LAB57:    if (t27 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t16) = 1;

LAB60:    t31 = (t16 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t16);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(102, ng0);

LAB65:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 2, t11, 32);
    t12 = (t0 + 4344);
    xsi_vlogvar_assign_value(t12, t16, 0, 0, 2);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB63:    goto LAB55;

LAB59:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(99, ng0);

LAB64:    xsi_set_current_line(100, ng0);
    t37 = ((char*)((ng1)));
    t38 = (t0 + 4344);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 2);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB63;

LAB66:    xsi_set_current_line(106, ng0);

LAB69:    xsi_set_current_line(107, ng0);
    t5 = (t0 + 3384);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 4344);
    xsi_vlogvar_assign_value(t14, t12, 0, 0, 2);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB68;

LAB74:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(119, ng0);

LAB79:    xsi_set_current_line(120, ng0);
    t30 = (t0 + 3384);
    t31 = (t30 + 56U);
    t37 = *((char **)t31);
    t38 = (t0 + 4344);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 2);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB78;

LAB80:    xsi_set_current_line(122, ng0);

LAB83:    xsi_set_current_line(123, ng0);
    t5 = (t0 + 3544);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 1864U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t12 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB87;

LAB84:    if (t27 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t16) = 1;

LAB87:    t31 = (t16 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t16);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(126, ng0);

LAB92:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 2, t11, 32);
    t12 = (t0 + 4344);
    xsi_vlogvar_assign_value(t12, t16, 0, 0, 2);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB90:    goto LAB82;

LAB86:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(123, ng0);

LAB91:    xsi_set_current_line(124, ng0);
    t37 = ((char*)((ng1)));
    t38 = (t0 + 4344);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 2);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB90;

LAB93:    xsi_set_current_line(130, ng0);

LAB96:    xsi_set_current_line(131, ng0);
    t5 = (t0 + 3384);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 4344);
    xsi_vlogvar_assign_value(t14, t12, 0, 0, 2);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB95;

LAB99:    xsi_set_current_line(140, ng0);

LAB102:    xsi_set_current_line(141, ng0);
    t11 = (t0 + 1864U);
    t12 = *((char **)t11);
    t11 = (t0 + 3544);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 12);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB101;

LAB103:    xsi_set_current_line(146, ng0);

LAB106:    xsi_set_current_line(147, ng0);
    t5 = (t0 + 3384);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 4344);
    xsi_vlogvar_assign_value(t14, t12, 0, 0, 2);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3064);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4024);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4184);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 1);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB105;

}

static void Cont_173_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 6104);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_17743056007692510629_2875323743_init()
{
	static char *pe[] = {(void *)Always_38_0,(void *)Always_45_1,(void *)Cont_173_2};
	xsi_register_didat("work_m_17743056007692510629_2875323743", "isim/t_door_lock_top_isim_beh.exe.sim/work/m_17743056007692510629_2875323743.didat");
	xsi_register_executes(pe);
}
