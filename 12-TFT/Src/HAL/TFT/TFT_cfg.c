/*
 * TFT_cfg.c
 *
 *  Created on: Jun 16, 2023
 *      Author: TABANA
 */

#include "GPIO_Interface.h"
GPIO_CFG_t Reset_Pin=
{
		.PIN_Port=PORTA,
		.PIN_Number=PIN0,
		.PIN_Type=OUTPUT,
		.PIN_OType=PUSH_PULL

};

GPIO_CFG_t Control_Pin=
{
		.PIN_Port=PORTA,
		.PIN_Number=PIN1,
		.PIN_Type=OUTPUT,
		.PIN_OType=PUSH_PULL
};
