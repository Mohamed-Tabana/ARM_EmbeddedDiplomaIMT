/*
 * DAC_PRG.c
 *
 *  Created on: May 5, 2023
 *      Author: TABANA
 */
#include "DAC_Interface.h"
#include "DAC_CFG.h"
#include "SysTick_Interface.h"
#include "Utils.h"
#include "GPIO_Interface.h"

extern GPIO_CFG_t DAC_Pins[8];
extern unsigned int sound_raw_len;
extern unsigned char sound_raw[];



void DAC_Init()
{
	for(int i=0;i<8;i++)
	{
		MGPIO_Init(&DAC_Pins[i]);

	}
}

void DAC_ISR()
{
	static uint32_t i=0;

	MGPIO_vSetOutputPortValue(DAC_PORT,sound_raw[i]);
	i++;
	if (i==sound_raw_len)
	{
		i=0;
	}

}
void DAC_Start()
{
	MSTK_vInit();
	MSTK_vSetIntervalPeriodic(250,DAC_ISR);

}
