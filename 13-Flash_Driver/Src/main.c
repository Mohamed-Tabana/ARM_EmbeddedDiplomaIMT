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

#include "RCC_Interface.h"
#include "FMI_Interface.h"

int main(void)
{
	//RCC_SetCLKSTS(HSI_clock, CLK_ON);
	RCC_AHB1LPEnableCLK(FLITFLPEN);

	uint16_t arr[3]={0x11FF,0xFF11,0xFFFF};
	FMI_vFlashWrite(0x08020000, arr, 3);
//	FMI_vFlashEraseSector(Sector2);



	for(;;);
}
