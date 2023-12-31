/*
 * IR_PRG.c
 *
 *  Created on: May 5, 2023
 *      Author: TABANA
 */


#include "IR_Interface.h"
#include "RCC_Interface.h"
#include "Utils.h"

static uint32_t Results[33]={0};
uint8_t data=0;

static uint8_t Global_u8counter=0;
static uint8_t Global_u8firstTimeFlag=0;

void ParseFrame()
{
	MSTK_vStopTimer();
	for(uint8_t local_u8i=0;local_u8i<8;local_u8i++)
	{
		if (Results[17+local_u8i] >=2000 && Results[17+local_u8i] <=2600)
		{
			CLEAR_BIT(data,local_u8i);
		}
		else if (Results[17+local_u8i] >=4000 && Results[17+local_u8i] <=5000)
		{
			SET_BIT(data,local_u8i);

		}
	}

	Global_u8counter=0;
	Global_u8firstTimeFlag=0;
}

void GetFrame()
{

	if (Global_u8firstTimeFlag == 0)
	{
		Global_u8firstTimeFlag=1;
		MSTK_vSetIntervalSingle(30000,ParseFrame);



	}
	else
	{
		Results[Global_u8counter++]=MSTK_vGetElapsedTime();
		MSTK_vSetIntervalSingle(30000,ParseFrame);

	}
	MEXTI_vClearInterruptTrigger(EXTI_LINE_0);

}
void IR_Init()
{
	RCC_APB2EnableCLK(SYSCFGEN);
	MSTK_vInit();
	MEXTI_vSetCallBack(EXTI_LINE_0,GetFrame);
	MEXTI_vSetFallingTrigger(EXTI_LINE_0);
	MEXTI_vSetEXTI_LineOnPort(EXTI_LINE_0,EXTI_PORTA);
	MEXTI_vSetInterruptMask(EXTI_LINE_0,EXTI_NotMasked);

}
uint8_t IR_GetPressedKey()
{
	return data;
}






