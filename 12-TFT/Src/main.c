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

extern uint16_t arrImage[];
#include "TFT_int.h"
#include "GPIO_Interface.h"
#include "SysTick_Interface.h"
#include "RCC_Interface.h"
#include "SPI_int.h"

int main(void)
{
	MSTK_vInit();

	TFT_vInit();
	TFT_vDisplay(arrImage);

    /* Loop forever */
	for(;;);
}
