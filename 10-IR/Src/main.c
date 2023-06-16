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
#include "IR_Interface.h"
#include "GPIO_Interface.h"
#include "NVIC_Interface.h"
#include "RCC_Interface.h"

extern uint8_t data;
GPIO_CFG_t ir_pin=
{
		.PIN_Type=INPUT,.PIN_Port=PORTA,.PIN_Number=PIN0
};
GPIO_CFG_t RGB_pin[3]=
{
		{.PIN_Type=OUTPUT,.PIN_Port=PORTA,.PIN_Number=PIN1,.PIN_OValue=OUTPUT_HIGH},
		{.PIN_Type=OUTPUT,.PIN_Port=PORTA,.PIN_Number=PIN2,.PIN_OValue=OUTPUT_HIGH},
		{.PIN_Type=OUTPUT,.PIN_Port=PORTA,.PIN_Number=PIN3,.PIN_OValue=OUTPUT_HIGH},

};
void RGB ()
{

	switch (data)
	{

	case 12:

		MGPIO_vToggleOutputPinValue(RGB_pin[0].PIN_Port,RGB_pin[0].PIN_Number);
		data=0;
		break;
	case 24:
		MGPIO_vToggleOutputPinValue(RGB_pin[1].PIN_Port,RGB_pin[1].PIN_Number);
		data=0;

		break;

	case 94:
		MGPIO_vToggleOutputPinValue(RGB_pin[2].PIN_Port,RGB_pin[2].PIN_Number);
		data=0;

		break;



	}
}
int main(void)
{

	RCC_APB2EnableCLK(SYSCFGEN); // enable EXTI
	RCC_AHB1EnableCLK(GPIOAEN);
	RCC_AHB1EnableCLK(GPIOBEN);
	NVIC_vSetInterruptEnable(NVIC_IEXTI0);
	MSTK_vInit();
	MGPIO_Init( &ir_pin);
	MGPIO_Init( &RGB_pin[0]);
	MGPIO_Init( &RGB_pin[1]);
	MGPIO_Init( &RGB_pin[2]);
	IR_Init();





	/* Loop forever */
	for(;;)
	{
	//	RGB ();
		//		MGPIO_vToggleOutputPinValue(RGB_pin[0].PIN_Port,RGB_pin[0].PIN_Number);
		//		MSTK_vSetBusyWait(1000000);
		//		MGPIO_vSetOutputPinValue(RGB_pin[0].PIN_Port,RGB_pin[0].PIN_Number,0);
		//		MSTK_vSetBusyWait(1000000);


	}
}
