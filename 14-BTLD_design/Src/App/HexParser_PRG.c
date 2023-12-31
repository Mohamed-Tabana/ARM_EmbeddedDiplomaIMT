/*
 * HexParser_PRG.c
 *
 *  Created on: May 12, 2023
 *      Author: TABANA
 */

#include "HexParser_Interface.h"

uint16_t DataBuffer[100] ;
#define FLASH_BASE_ADDR 0x08000000

void HexParser_vEraseAppArea()
{
	FMI_vEraseAppArea();
}

uint8_t HexParser_u8ASCII2HEX(uint8_t copy_u8ASCII)
{
	uint8_t copy_u8HexValue = 0;
	if (copy_u8ASCII >='0' && copy_u8ASCII<= '9')
	{
		copy_u8HexValue = copy_u8ASCII - '0';
	}
	else if (copy_u8ASCII >='A' && copy_u8ASCII<= 'F')
	{
		copy_u8HexValue = copy_u8ASCII - 'A'+10;
	}
	return copy_u8HexValue;
}

void HexParser_vParseData(char *  copy_u8Data)
{
	/* charachter Count variables */
	uint8_t CC_Low, CC_High, CC;
	/* 4 digits for conversion */
	uint8_t digit0, digit1, digit2, digit3;
	/* Address variable */
	uint32_t address;

	/* 1- convert charachter count */
	CC_High  = HexParser_u8ASCII2HEX(copy_u8Data[1]);
	CC_Low = HexParser_u8ASCII2HEX(copy_u8Data[2]);
	CC = CC_High << 4 | CC_Low;
	/* 2- convert Address */
	digit0 = HexParser_u8ASCII2HEX(copy_u8Data[3]);
	digit1 = HexParser_u8ASCII2HEX(copy_u8Data[4]);
	digit2 = HexParser_u8ASCII2HEX(copy_u8Data[5]);
	digit3 = HexParser_u8ASCII2HEX(copy_u8Data[6]);
	address = (FLASH_BASE_ADDR) | digit0<<12 | digit1<<8 | digit2<<4 | digit3;

	/* 3- convert Data */
	for(uint8_t i=0 ;i < CC/2 ; i++)
	{
		digit0 = HexParser_u8ASCII2HEX(copy_u8Data[(4*i)+9]);
		digit1 = HexParser_u8ASCII2HEX(copy_u8Data[(4*i)+10]);
		digit2 = HexParser_u8ASCII2HEX(copy_u8Data[(4*i)+11]);
		digit3 = HexParser_u8ASCII2HEX(copy_u8Data[(4*i)+12]);
		DataBuffer[i] = digit0<<12 | digit1<<8 | digit2<<4 | digit3;
	}

	 FMI_vFlashWrite(address, DataBuffer,  CC/2);
}
