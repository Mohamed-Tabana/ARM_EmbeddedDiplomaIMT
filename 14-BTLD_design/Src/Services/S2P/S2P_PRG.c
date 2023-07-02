/*
 * S2P_PRG.c
 *
 *  Created on: Apr 26, 2023
 *      Author: TABANA
 */

#include "stdio.h"
#include "GPIO_Interface.h"
#include "S2P_Interface.h"
#include "SysTick_Interface.h"

#define S2P_NUMBER_SHIFT_REGs 2

void S2P_vInit()
{
	MGPIO_Init( &S2P_Data_Pin);
	MGPIO_Init( &S2P_Latch_Pin);
	MGPIO_Init( &S2P_Shift_Pin);


}

static void ShiftData()
{
	MGPIO_vSetOutputPinValueBSR(S2P_Shift_Pin.PIN_Port,S2P_Shift_Pin.PIN_Number,1);
	MSTK_vSetBusyWait(1);
//	for(uint8_t i=0;i<100;i++);
	MGPIO_vSetOutputPinValueBSR(S2P_Shift_Pin.PIN_Port,S2P_Shift_Pin.PIN_Number,0);

}
static void LatchData()
{
	MGPIO_vSetOutputPinValueBSR(S2P_Latch_Pin.PIN_Port,S2P_Latch_Pin.PIN_Number,1);
	MSTK_vSetBusyWait(1);

	MGPIO_vSetOutputPinValueBSR(S2P_Latch_Pin.PIN_Port,S2P_Latch_Pin.PIN_Number,0);

}
void S2P_vSendData(uint32_t copy_u32Data)
{
	for(int i = 0 ;i<8*2 ; i++)
	{
		/* 1. put data on data pin  */
		MGPIO_vSetOutputPinValueBSR(S2P_Data_Pin.PIN_Port,S2P_Data_Pin.PIN_Number,READ_BIT(copy_u32Data,i));

		/* 2. shift data on data pin
		 * a. send high
		 *
		 * b. delay
		 * c.send low */

		ShiftData();
		/* 3. send latch signal for the o/p
		 * * a. send high
		 * b. delay
		 * c.send low  */

	}
	LatchData();
}
