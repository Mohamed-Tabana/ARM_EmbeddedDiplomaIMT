/*
 * RCC_prg.c
 *
 *  Created on: Apr 17, 2023
 *      Author: TABANA
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
void RCC_PLLCONFIG(uint8_t copy_u8PLLM, uint8_t copy_u8PLLN, uint8_t copy_u8PLLP, uint8_t copy_u8PLLQ)
{
	// 1- Set PLLM Values
	RCC->RCC_PLLCFGR &= ~(0b111111);
	RCC->RCC_PLLCFGR |= copy_u8PLLM;
	// 2- Set PLLN Values
	RCC->RCC_PLLCFGR &= ~(0b111111111 << 6);
	RCC->RCC_PLLCFGR |= (copy_u8PLLN << 6);
	// 3- Set PLLP Values
	RCC->RCC_PLLCFGR &= ~(0b11 << 16);
	RCC->RCC_PLLCFGR |= (copy_u8PLLP << 16);
	// 4- Set PLLQ Values
	RCC->RCC_PLLCFGR &= ~(0b1111 << 24);
	RCC->RCC_PLLCFGR |= (copy_u8PLLQ << 24);
}
void RCC_SetBusesPrescaler(AHB_Prescaler_t copy_eAHB_Prescaler, APB_Prescaler_t copy_eAPB1_Prescaler, APB_Prescaler_t copy_eAPB2_Prescaler)
{
	// 1- Set AHB Prescaler
	RCC->RCC_CFGR &= ~(0b1111 << HPRE0);
	RCC->RCC_CFGR |= copy_eAHB_Prescaler << HPRE0;

	// 2- Set APB1 Prescaler
	RCC->RCC_CFGR &= ~(0b111 << PPRE10);
	RCC->RCC_CFGR |= copy_eAPB1_Prescaler << PPRE10;

	// 3- Set APB2 Prescaler
	RCC->RCC_CFGR &= ~(0b111 << PPRE20);
	RCC->RCC_CFGR |= copy_eAPB2_Prescaler << PPRE20;
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


void RCC_AHB1LPEnableCLK(PeripheralAHBLP1_t peripheral)
{
	SET_BIT(RCC->RCC_AHB1LPENR,peripheral);
}
void RCC_AHB1LPDisableCLK(PeripheralAHBLP1_t peripheral)
{
	CLEAR_BIT(RCC->RCC_AHB1LPENR,peripheral);
}
