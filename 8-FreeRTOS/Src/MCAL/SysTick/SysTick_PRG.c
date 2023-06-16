/*
 * SysTick_PRG.c
 *
 *  Created on: Apr 24, 2023
 *      Author: TABANA
 */
#include "SysTick_Interface.h"
STK_Callback_t Global_SysTickCallback;
Interval_t Global_Interval;

void SysTick_Handler(void)
{
	if (Global_Interval == Interval_Single)
	{
		//disable counter
		CLEAR_BIT(MSTK->STK_CTRL,ENABLE);
	}
	if (Global_SysTickCallback != 0)
	{
		Global_SysTickCallback();
	}
}

void MSTK_vInit()
{
	/*1. CLK SRC*/
	CLEAR_BIT(MSTK->STK_CTRL,CLKSOURCE); // AHB/8 = 2 MHz

	/*2. interrupt enable  */
	SET_BIT(MSTK->STK_CTRL,TICKINT); // AHB/8


}

void MSTK_vStartTimer(uint32_t copy_u32Ticks)
{
	// reset timer value to clear count flag
	MSTK->STK_VAL = 0 ;
	// load timer
	MSTK->STK_LOAD=copy_u32Ticks;
	//Enable timer
	SET_BIT(MSTK->STK_CTRL,ENABLE);
}
void MSTK_vStopTimer()
{
	// reset timer value to clear count flag
	MSTK->STK_VAL = 0 ;

	//disable counter
	CLEAR_BIT(MSTK->STK_CTRL,ENABLE);
}


void MSTK_vSetBusyWait(uint32_t copy_u32Ticks)
{
	// reset timer value to clear count flag
	MSTK->STK_VAL = 0 ;
	// load timer
	MSTK->STK_LOAD=copy_u32Ticks;
	//Enable timer
	SET_BIT(MSTK->STK_CTRL,ENABLE);
	//Busy wait
	while(READ_BIT(MSTK->STK_CTRL,COUNTFLAG) != 1);
	// stop timer
	CLEAR_BIT(MSTK->STK_CTRL,ENABLE);

}
void MSTK_vSetIntervalSingle(uint32_t copy_u32Ticks,STK_Callback_t copy_pSTK_Callback)
{
	// callback
	Global_Interval=Interval_Single;
	Global_SysTickCallback=copy_pSTK_Callback;

	// reset timer value to clear count flag
	MSTK->STK_VAL = 0 ;

	// load timer
	MSTK->STK_LOAD=copy_u32Ticks;
	//Enable timer
	SET_BIT(MSTK->STK_CTRL,ENABLE);
}
void MSTK_vSetIntervalPeriodic(uint32_t copy_u32Ticks,STK_Callback_t copy_pSTK_Callback)
{

	// callback
	Global_Interval=Interval_Periodic;
	Global_SysTickCallback=copy_pSTK_Callback;

	// reset timer value to clear count flag
	MSTK->STK_VAL = 0 ;

	// load timer
	MSTK->STK_LOAD=copy_u32Ticks;
	//Enable timer
	SET_BIT(MSTK->STK_CTRL,ENABLE);

}

uint32_t MSTK_vGetElapsedTime()
{
	return ( MSTK->STK_LOAD - MSTK->STK_VAL) ;
}
uint32_t MSTK_vGetRemainingTime()
{
	return MSTK->STK_VAL ;
}
