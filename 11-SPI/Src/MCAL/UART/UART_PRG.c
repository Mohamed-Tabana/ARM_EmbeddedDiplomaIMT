/*
 * UART_PRG.c
 *
 *  Created on: May 13, 2023
 *      Author: TABANA
 */

#include "UART_Interface.h"
#include "RCC_Interface.h"
void UART_vInit()
{
	RCC_APB2EnableCLK(USART1EN);
	// disable UART
	CLEAR_BIT(UART->CR1,13);
	//1 START 8 BIT N STOP
	CLEAR_BIT(UART->CR1,12);
	//DISABLE PARITY
	CLEAR_BIT(UART->CR1,10);
	//SET TRANSMITTER
	SET_BIT(UART->CR1,3);
	//SET RECEIVER
	SET_BIT(UART->CR1,2);
	// 1 STOP BIT
	UART->CR2 &= ~(0b11<<12);
	UART->CR2 |=  (0b00<<12);
	//  Set baud rate to 115200
	UART->BRR = 0x1117;
	//Enable UART
	SET_BIT(UART->CR1,13);
}

uint8_t UART_ReceivePeriodicCheck( char* copy_pu8Buffer)
{
	uint8_t Local_ReceivedFlag = 0;
	if (READ_BIT(UART->SR,5))
	{
		*copy_pu8Buffer=UART->DR;
		Local_ReceivedFlag=1;
	}
	else
	{
		Local_ReceivedFlag=0;

	}
	return Local_ReceivedFlag;
}


void UART_vSendString( char* copy_pu8String)
{
	for (uint8_t i =0;copy_pu8String[i];i++)
	{
		while(READ_BIT(UART->SR,7)==0);
		UART->DR = copy_pu8String[i];
	}
}
