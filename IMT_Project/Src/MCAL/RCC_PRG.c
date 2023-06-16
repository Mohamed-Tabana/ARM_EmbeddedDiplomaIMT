/*
 * RCC_prg.c
 *
 *  RCC_CReated on: Apr 17, 2023
 *      Author: ALTAWKEL
 */
#include "RCC_Interface.h"
void RCC_SetCLKSTS(CLKtype_t copy_tCLKtype, CLKStatus_t copy_tCLKStatus)
{
	switch(copy_tCLKtype)
	{
	case HSI_clock :
		if (copy_tCLKStatus==CLK_OFF)
		{
			CLEAR_BIT(RCC->RCC_CR,HSION);
		}
		else if (copy_tCLKStatus==CLK_ON)
		{
			SET_BIT(RCC->RCC_CR,HSION);
			while(READ_BIT(RCC->RCC_CR,HSIRDY));
		}
		break;
	case HSE_clock:
		if (copy_tCLKStatus==CLK_OFF)
		{
			CLEAR_BIT(RCC->RCC_CR,HSEON);
		}
		else if (copy_tCLKStatus==CLK_ON)
		{
			SET_BIT(RCC->RCC_CR,HSEON);
			while(READ_BIT(RCC->RCC_CR,HSERDY));
		}
		break;
	case PLL_clock:
		if (copy_tCLKStatus==CLK_OFF)
		{
			CLEAR_BIT(RCC->RCC_CR,PLLON);
		}
		else if (copy_tCLKStatus==CLK_ON)
		{
			SET_BIT(RCC->RCC_CR,PLLON);
			while(READ_BIT(RCC->RCC_CR,PLLRDY));
		}
		break;
	}
}

void RCC_SetSYSCLK(CLKtype_t copy_tCLKtype)
{
	RCC->RCC_CFGR &= ~(0b11<<SW0);
	RCC->RCC_CFGR |= (copy_tCLKtype<<SW0);
}

void RCC_HSECONFIG(HSEDIV_t copy_tHSEDIV)
{
//	switch(copy_tHSEDIV)
//	{
//	case HSE_clock_not_divided:
//		CLEAR_BIT(RCC->RCC_CFGR,PLLXTPRE);
//		break;
//	case HSE_clock_divided_by_2:
//		SET_BIT(RCC->RCC_CFGR,PLLXTPRE);
//		break;
//	}
}
void RCC_PLLCONFIG(PLLMUL_t copy_tPLLMUX,CLKtype_t copy_tCLKtype)
{
//	RCC->RCC_CFGR &= ~(0b1111<<PLLMUL0);
//	RCC->RCC_CFGR |= (copy_tCLKtype<<PLLMUL0);
//	switch(copy_tCLKtype)
//	{
//	case HSI_clock:
//		CLEAR_BIT(RCC->RCC_CFGR,PLLSRC);
//		break;
//	case HSE_clock:
//		SET_BIT(RCC->RCC_CFGR,PLLSRC);
//		break;
//	}
}
void RCC_HSEBYP(bypassedsSTS_t copy_ebypassedsSTS)
{
	RCC->RCC_CR&= ~(1<<HSEBYP);
	RCC->RCC_CR|=(copy_ebypassedsSTS<<HSEBYP);
}
void RCC_CSSCFG(Clock_Detector_t copy_eClock_detector)
{
	RCC->RCC_CR&= ~(1<<CSSON);
	RCC->RCC_CR|=(copy_eClock_detector<<CSSON);
}

void RCC_AHB1EnableCLK(PeripheralAHB1_t peripheral)
{
	SET_BIT(RCC->RCC_AHB1ENR,peripheral);
}
void RCC_AHB1DisableCLK(PeripheralAHB1_t peripheral)
{
	CLEAR_BIT(RCC->RCC_AHB1ENR,peripheral);

}

void RCC_APB1EnableCLK(PeripheralAPB1_t peripheral)
{
	SET_BIT(RCC->RCC_APB1ENR,peripheral);

}
void RCC_APB1DisableCLK(PeripheralAPB1_t peripheral)
{
	CLEAR_BIT(RCC->RCC_APB1ENR,peripheral);

}

void RCC_APB2EnableCLK(PeripheralAPB2_t peripheral)
{
	SET_BIT(RCC->RCC_APB2ENR,peripheral);

}
void RCC_APB2DisableCLK(PeripheralAPB2_t peripheral)
{
	CLEAR_BIT(RCC->RCC_APB2ENR,peripheral);

}



