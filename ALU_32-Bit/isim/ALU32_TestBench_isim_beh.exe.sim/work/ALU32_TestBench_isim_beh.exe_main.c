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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003887424007_1926972201_init();
    work_m_00000000001803882767_2966759537_init();
    work_m_00000000001803882767_2722733084_init();
    work_m_00000000002884788528_0684797233_init();
    work_m_00000000001140594953_2557627042_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001140594953_2557627042");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
