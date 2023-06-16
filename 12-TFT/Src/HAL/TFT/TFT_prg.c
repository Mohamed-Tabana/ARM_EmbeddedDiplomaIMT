/*
 * TFT_prg.c
 *
 *  Created on: Jun 16, 2023
 *      Author: ALTAWKEL
 */
#include "stdio.h"
#include "TFT_int.h"
#include "SPI_int.h"
#include "GPIO_Interface.h"
#include "SysTick_Interface.h"

void TFT_vWriteCommand(uint8_t copy_u8Command)
{
	MGPIO_vSetOutputPinValue(Control_Pin.PIN_Port,Control_Pin.PIN_Number,OUTPUT_LOW);
	SPI_Transceiving( copy_u8Command);


}
void TFT_vWriteData(uint8_t copy_u8Data)
{
	MGPIO_vSetOutputPinValue(Control_Pin.PIN_Port,Control_Pin.PIN_Number,OUTPUT_HIGH);
	SPI_Transceiving( copy_u8Data);

}
void TFT_vTFTSequense()
{

	MGPIO_vSetOutputPinValue(Reset_Pin.PIN_Port,Reset_Pin.PIN_Number,OUTPUT_HIGH);
	MSTK_vSetBusyWaitus(100);
	MGPIO_vSetOutputPinValue(Reset_Pin.PIN_Port,Reset_Pin.PIN_Number,OUTPUT_LOW);
	MSTK_vSetBusyWaitus(1);
	MGPIO_vSetOutputPinValue(Reset_Pin.PIN_Port,Reset_Pin.PIN_Number,OUTPUT_HIGH);
	MSTK_vSetBusyWaitus(100);
	MGPIO_vSetOutputPinValue(Reset_Pin.PIN_Port,Reset_Pin.PIN_Number,OUTPUT_LOW);
	MSTK_vSetBusyWaitus(100);
	MGPIO_vSetOutputPinValue(Reset_Pin.PIN_Port,Reset_Pin.PIN_Number,OUTPUT_HIGH);
	MSTK_vSetBusyWaitms(120);



}
void TFT_vInit()
{
	MGPIO_Init( &Reset_Pin);
	MGPIO_Init( &Control_Pin);
	SPI_vInit();
	MSTK_vInit();
	TFT_vTFTSequense();
	TFT_vWriteCommand(0x11); // SLeepPOUT
	MSTK_vSetBusyWaitms(15);
	TFT_vWriteCommand(0x3A); // color mode
	TFT_vWriteData(0x05); // RGB 565
	TFT_vWriteCommand(0x29); // display on

}
void TFT_vDisplay(uint16_t* copy_pu16ArrayImage)
{
	/* 1- Set X */
	TFT_vWriteCommand(0x2A);
	TFT_vWriteData(0x00);
	TFT_vWriteData(0x00);
	TFT_vWriteData(0x00);
	TFT_vWriteData(127);
	/* 1- Set Y */
	TFT_vWriteCommand(0x2B);
	TFT_vWriteData(0x00);
	TFT_vWriteData(0x00);
	TFT_vWriteData(0x00);
	TFT_vWriteData(159);

	TFT_vWriteCommand(0x2C); // send image command

	for(uint16_t i =0 ; i < 20480 ; i++)
	{
		uint8_t LowByte= (uint8_t)copy_pu16ArrayImage[i];
		uint8_t HighByte= (uint8_t)(copy_pu16ArrayImage[i]>>8);

		TFT_vWriteData(HighByte);
		TFT_vWriteData(LowByte);

	}

}
