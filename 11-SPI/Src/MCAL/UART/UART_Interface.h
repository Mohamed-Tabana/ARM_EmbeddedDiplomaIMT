/*
 * UART_Interface.h
 *
 *  Created on: May 13, 2023
 *      Author: ALTAWKEL
 */

#ifndef MCAL_UART_UART_INTERFACE_H_
#define MCAL_UART_UART_INTERFACE_H_

#include "UART_Private.h"

	void UART_vInit();
	uint8_t UART_ReceivePeriodicCheck( char* copy_pu8Buffer);
	void UART_vSendString( char* copy_pu8String);

#endif /* MCAL_UART_UART_INTERFACE_H_ */
