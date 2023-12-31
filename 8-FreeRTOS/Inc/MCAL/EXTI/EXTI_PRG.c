/*
 * EXTI_PRG.c
 *
 *  Created on: Apr 23, 2023
 *      Author: TABANA
 */

#include "EXTI_Interface.h"
#include "RCC_Interface.h"

EXTI_Callback_t Global_EXTICallBack[16];

void EXTI0_IRQHandler(void)
{
	//if (Global_EXTICallBack[0] != NULL)
	Global_EXTICallBack[0]();
	SET_BIT(MEXTI->EXTI_PR,EXTI_LINE_0);
}
void EXTI1_IRQHandler(void)
{
//	if (Global_EXTICallBack[1] != NULL)
	Global_EXTICallBack[1]();
	SET_BIT(MEXTI->EXTI_PR,EXTI_LINE_1);

}

//TODO do this for all 16 Line

void MEXTI_vInit()
{
	RCC_APB2EnableCLK(SYSCFGEN);
}

void MEXTI_vSetInterruptMask(EXTI_Line_t copy_eEXTI_Line,EXTI_Masking_t copy_eEXTI_Masking)
{
	switch(copy_eEXTI_Masking)
	{
	case EXTI_Masked:
		MEXTI->EXTI_IMR&= ~(1<<copy_eEXTI_Line);
		MEXTI->EXTI_IMR|=  (0<<copy_eEXTI_Line);

		break;
	case EXTI_NotMasked:
		MEXTI->EXTI_IMR&= ~(1<<copy_eEXTI_Line);
		MEXTI->EXTI_IMR|=  (1<<copy_eEXTI_Line);
		break;

	}
}


void MEXTI_vSetRisingTrigger(EXTI_Line_t copy_eEXTI_Line)
{
	//Enable Rising
	MEXTI->EXTI_RTSR&= ~(1<<copy_eEXTI_Line);
	MEXTI->EXTI_RTSR|=  (1<<copy_eEXTI_Line);
	//disable Falling
	MEXTI->EXTI_FTSR&= ~(1<<copy_eEXTI_Line);
	MEXTI->EXTI_FTSR|=  (0<<copy_eEXTI_Line);
}
void MEXTI_vSetFallingTrigger(EXTI_Line_t copy_eEXTI_Line)
{
	//Enable Falling
	MEXTI->EXTI_FTSR&= ~(1<<copy_eEXTI_Line);
	MEXTI->EXTI_FTSR|=  (1<<copy_eEXTI_Line);
	//disable Rising
	MEXTI->EXTI_RTSR&= ~(1<<copy_eEXTI_Line);
	MEXTI->EXTI_RTSR|=  (0<<copy_eEXTI_Line);

}
void MEXTI_vSetSoftwareTrigger(EXTI_Line_t copy_eEXTI_Line)
{
	MEXTI->EXTI_SWIER&= ~(1<<copy_eEXTI_Line);
	MEXTI->EXTI_SWIER|=  (1<<copy_eEXTI_Line);

}
void MEXTI_vClearInterruptTrigger(EXTI_Line_t copy_eEXTI_Line)
{
	MEXTI->EXTI_PR|=  (1<<copy_eEXTI_Line);
}
void MEXTI_vSetEXTI_LineOnPort(EXTI_Line_t copy_eEXTI_Line,EXTI_EXTIPortCFG_t copy_eEXTI_EXTIPortCFG)
{
	MSYSCFG->SYSCFG_EXTICR[copy_eEXTI_Line/4] &= ~( 0b1111<<((copy_eEXTI_Line%4)*4));
	MSYSCFG->SYSCFG_EXTICR[copy_eEXTI_Line/4] |= copy_eEXTI_EXTIPortCFG<<((copy_eEXTI_Line%4)*4);

}
void MEXTI_vSetCallBack(EXTI_Line_t copy_eEXTI_Line,EXTI_Callback_t copy_EXTI_Callback)
{
	Global_EXTICallBack[copy_eEXTI_Line]=copy_EXTI_Callback;
}
