/*
 * emu_gss_pus_service129.h
 *
 *  Created on: 3 jun 2024
 *      Author: atcsol
 */

#ifndef LLSW_EMU_GSS_INCLUDE_EMU_GSS_EMU_GSS_PUS_SERVICE129_H_
#define LLSW_EMU_GSS_INCLUDE_EMU_GSS_EMU_GSS_PUS_SERVICE129_H_


class EmuGSS_TCProgram129_1:public EmuGSS_TCProgram{

	float sCVx;
	float sCVy;

	virtual void BuildTCAppData(tc_descriptor_t &tc_descriptor);

public:

	EmuGSS_TCProgram129_1(uint32_t uniTime2YK,
                 const char * brief, float CVx, float CVy);
};

class EmuGSS_TCProgram129_2:public EmuGSS_TCProgram{

	float sKpx;
	float sKpy;

	virtual void BuildTCAppData(tc_descriptor_t &tc_descriptor);

public:

	EmuGSS_TCProgram129_2(uint32_t uniTime2YK,
                 const char * brief,float Kpx,float Kpy);


};

#endif /* LLSW_EMU_GSS_INCLUDE_EMU_GSS_EMU_GSS_PUS_SERVICE129_H_ */
