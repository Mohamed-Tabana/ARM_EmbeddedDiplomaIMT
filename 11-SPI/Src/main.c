/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include "Utils.h"
#include "GPIO_Interface.h"
#include "RCC_Interface.h"
#include "SPI_int.h"



int main(void)
{
	    GPIO_CFG_t ledPIN =
		{
				.PIN_Port=PORTA,
				.PIN_Number=PIN1,
				.PIN_Type=OUTPUT,
				.PIN_OType=PUSH_PULL,
				.PIN_OSpeed=LOW_SPEED,
		};
		MGPIO_Init( &ledPIN);
		SPI_vInit();
		volatile uint8_t c=0;
		c=SPI_Transceiving('M');

		if (c == 'M')
		{
			  MGPIO_vSetOutputPinValue(PORTA,PIN1,OUTPUT_HIGH);

		}
    /* Loop forever */
	for(;;);
}
