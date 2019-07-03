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
    work_m_02454013764744722410_3140454629_init();
    work_m_02905987982329347328_0332702501_init();
    work_m_00853707690152438580_0262537533_init();
    work_m_04822518825892581234_0398623751_init();
    work_m_03399231259286773778_1627809806_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_03399231259286773778_1627809806");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
