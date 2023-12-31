/*
 * LEDMatrix_CFG.c
 *
 *  Created on: Apr 25, 2023
 *      Author: TABANA
 */

#include "GPIO_Interface.h"
#include "SysTick_Interface.h"
#include "LEDMatrix_Private.h"

/* 1- GPIO Pin CFG */
GPIO_CFG_t rows[NO_ROWS] =
{

		{.PIN_Port=PORTB,.PIN_Number=PIN0  ,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},
		{.PIN_Port=PORTB,.PIN_Number=PIN1  ,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},
		{.PIN_Port=PORTB,.PIN_Number=PIN5  ,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},
		{.PIN_Port=PORTB,.PIN_Number=PIN6  ,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},
		{.PIN_Port=PORTB,.PIN_Number=PIN7  ,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},
		{.PIN_Port=PORTB,.PIN_Number=PIN8  ,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},
		{.PIN_Port=PORTB,.PIN_Number=PIN9  ,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},
		{.PIN_Port=PORTB,.PIN_Number=PIN10 ,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},



};
GPIO_CFG_t cols[NO_COLS] =
{


		{.PIN_Port=PORTA,.PIN_Number=PIN0,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},
		{.PIN_Port=PORTA,.PIN_Number=PIN1,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},
		{.PIN_Port=PORTA,.PIN_Number=PIN2,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},
		{.PIN_Port=PORTA,.PIN_Number=PIN3,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},
		{.PIN_Port=PORTA,.PIN_Number=PIN4,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},
		{.PIN_Port=PORTA,.PIN_Number=PIN5,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},
		{.PIN_Port=PORTA,.PIN_Number=PIN6,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},
		{.PIN_Port=PORTA,.PIN_Number=PIN7,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED},


};
