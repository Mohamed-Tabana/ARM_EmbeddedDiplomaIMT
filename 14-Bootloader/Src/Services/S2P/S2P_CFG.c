/*
 * S2P_CFG.c
 *
 *  Created on: Apr 26, 2023
 *      Author: TABANA
 */
#include "S2P_Private.h"

	GPIO_CFG_t S2P_Data_Pin =
	{.PIN_Port=PORTA,.PIN_Number=PIN0,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED};
	GPIO_CFG_t S2P_Latch_Pin =
	{.PIN_Port=PORTA,.PIN_Number=PIN1,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED};
	GPIO_CFG_t S2P_Shift_Pin =
	{.PIN_Port=PORTA,.PIN_Number=PIN2,.PIN_Type=OUTPUT,.PIN_OType=PUSH_PULL,.PIN_OSpeed=LOW_SPEED};

