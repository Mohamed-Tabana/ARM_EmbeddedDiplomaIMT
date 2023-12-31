/*
 * LEDMatrix_PRG.c
 *
 *  Created on: Apr 25, 2023
 *      Author: TABANA
 */


#include "GPIO_Interface.h"
#include "SysTick_Interface.h"

#include "LEDMatrix_Interface.h"
#include "S2P_Interface.h"

#define ShiftREG
void LEDMTX_vInit()
{
	S2P_vInit();

	for (uint8_t i=0;i<NO_ROWS;i++)
	{
		MGPIO_Init(&rows[i]);
		MGPIO_Init(&cols[i]);
	}

	MSTK_vInit();
}
void LEDMTX_vClearAllColumns()
{
	for(uint8_t i = 0;i<NO_ROWS;i++)
	{
		MGPIO_vSetOutputPinValue(cols[i].PIN_Port,cols[i].PIN_Number,0);
	}
}
void LEDMTX_vSetTheSpecificColumn(uint8_t copy_u8ColNumb)
{
	MGPIO_vSetOutputPinValue(cols[copy_u8ColNumb].PIN_Port,cols[copy_u8ColNumb].PIN_Number,1);

}
void LEDMTX_vSetTheRowsWithValue(uint8_t copy_u8frame)
{
	for(uint8_t i = 0;i<NO_ROWS;i++)
	{
		MGPIO_vSetOutputPinValue(rows[i].PIN_Port,rows[i].PIN_Number,READ_BIT(copy_u8frame,i));

	}
}


void LEDMTX_vDisplayFrame  (uint8_t* frame,uint32_t frame_delay)
{
	//	for(uint8_t i = 0;i<NO_ROWS;i++)
	//	{
	//#ifdef NOShiftREG
	//		/*1. clear all COLS*/
	//		LEDMTX_vClearAllColumns();
	//		/*2. set the i column*/
	//		LEDMTX_vSetTheSpecificColumn(i);
	//
	//		/*3. set the [i] of array*/
	//		LEDMTX_vSetTheRowsWithValue(frame[i]);
	//
	//		/*4. busy wait 2.5 ms*/
	//		MSTK_vSetBusyWait(1250);
	//#elifdef
	//
	//
	//#endif
	//
	//#ifdef ShiftREG
	uint32_t Local_u32Data;
	//		/*1. clear all COLS*/
	//		Local_u32Data=0X00FF;
	//		S2P_vSendData(Local_u32Data);
	//
	//		/*2. set the i column*/ 		/*3. set the [i] of array*/
	//		Local_u32Data=(0X0000) | (1<<(i+8)) | (uint8_t)(frame[i]);
	//		S2P_vSendData(Local_u32Data);
	//
	//		/*4. busy wait 2.5 ms*/
	//		MSTK_vSetBusyWait(1250);
	//#endif
	Local_u32Data=(0X0000) | (uint16_t)(0xF0)<<8;
	S2P_vSendData(Local_u32Data);
	MSTK_vSetBusyWait(2000000);
	Local_u32Data=(0X0000) | (uint16_t)(0x0F)<<8;
	S2P_vSendData(Local_u32Data);
	MSTK_vSetBusyWait(2000000);

}



void LEDMTX_vDisplayMatrix (uint8_t matrix[][NO_COLS],uint32_t matrix_delay);
