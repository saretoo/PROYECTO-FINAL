/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *      Author: user
 */

#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>


#define FT_UAH_EXP_SERV_129_0666
#define FT_UAH_EXP_SERV_129_0667

#define FT_TIME_step0 (UNITIME_AFTER_POWER_ON + 4)
#define FT_TIME_step1 (UNITIME_AFTER_POWER_ON + 5)
#define FT_TIME_step2 (UNITIME_AFTER_POWER_ON + 10)

#ifdef FT_UAH_EXP_SERV_129_0666

EmuGSS_TCProgram3_31 prog_FT_129_0666_step0(FT_TIME_step0,
    "FT_SOLO_EPD_ICU_SERV_129_0666 step 0, Config report de las velocidades y la masa cada 5s",
    10, 5);

EmuGSS_TCProgram3_5 prog_FT_129_0666_step1(FT_TIME_step1,
    "FT_SOLO_EPD_ICU_SERV_129_0666 step 1, Habilitamos report parametro 10",
    10);

EmuGSS_TCProgram129_1 prog_FT_0666_step2(FT_TIME_step2,
					"FT_UAH_EXP_SERV_129_0666 step 0, Set Command Vx and Vy ", -0.7, 0.3);

#endif

#ifdef FT_UAH_EXP_SERV_129_0667
EmuGSS_TCProgram3_31 prog_FT_129_0667_step0(FT_TIME_step0,
    "FT_SOLO_EPD_ICU_SERV_129_0667 step 0, Config report de las velocidades y la masa cada 5s",
    10, 5);

EmuGSS_TCProgram3_5 prog_FT_129_0667_step1(FT_TIME_step1,
    "FT_SOLO_EPD_ICU_SERV_129_0666 step 1, Habilitamos report parametro 10",
    10);

EmuGSS_TCProgram129_2 prog_FT_129_0667_step2(FT_TIME_step2,
					"FT_UAH_EXP_SERV_129_00XX step 0, Set Kp ",0.4, 0.3);
#endif


