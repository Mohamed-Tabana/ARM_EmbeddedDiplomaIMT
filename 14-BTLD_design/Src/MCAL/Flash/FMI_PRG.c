/*
 * FMI_PRG.c
 *
 *  Created on: May 12, 2023
 *      Author: TABANA
 */


#include "FMI_Interface.h"
#include "RCC_Interface.h"
void FMI_vInit()
{
	RCC_AHB1LPEnableCLK(FLITFLPEN);
}

void FMI_vFlashEraseSector(FMI_Sector_t copy_eFMI_Sector)
{
	/* 0. unlock control register in FLASH_KEYR */
	if(READ_BIT(FMI->FLASH_CR, CR_LOCK) )
	{
		FMI->FLASH_KEYR = FMI_KEY1;
		FMI->FLASH_KEYR = FMI_KEY2;
	}
	/* 1. check busy bit */
	while(READ_BIT(FMI->FLASH_SR,SR_BSY));
	/* 2. Set the SER bit and select the sector out of the 5 sectors */
	SET_BIT(FMI->FLASH_CR,CR_SER);

	FMI->FLASH_CR &= ~ (0b1111 << CR_SNB0);
	FMI->FLASH_CR |= copy_eFMI_Sector << CR_SNB0;
	/* 3. Set the STRT bit in the FLASH_CR register*/
	SET_BIT(FMI->FLASH_CR,CR_STRT);

	/* 4. Wait for the BSY bit to be cleared */
	while(READ_BIT(FMI->FLASH_SR,SR_BSY));
	/* 5- Clear EOP flag   */
	SET_BIT(FMI->FLASH_SR, SR_EOP);

	/* 6- DeSelect Erase Operation (reverse of step 2) */
	CLEAR_BIT(FMI->FLASH_CR, CR_SER);

}
void FMI_vEraseAppArea()
{
	for(uint8_t Local_u8Counter = 1;Local_u8Counter<8; Local_u8Counter++)
	{
		FMI_vFlashEraseSector(Local_u8Counter++);
	}
}

void FMI_vFlashEraseMass()
{
	/* 0. unlock control register in FLASH_KEYR */
	if(READ_BIT(FMI->FLASH_CR, CR_LOCK) )
	{
		FMI->FLASH_KEYR = FMI_KEY1;
		FMI->FLASH_KEYR = FMI_KEY2;
	}
	/* 1. check busy bit */
	while(READ_BIT(FMI->FLASH_SR,SR_BSY));
	/* 2. Set the MER bit */
	SET_BIT(FMI->FLASH_CR,CR_MER);
	/* 3. Set the STRT bit in the FLASH_CR register*/
	SET_BIT(FMI->FLASH_CR,CR_STRT);
	/* 4. Wait for the BSY bit to be cleared */
	while(READ_BIT(FMI->FLASH_SR,SR_BSY));
	/* 5- Clear EOP flag   */
	SET_BIT(FMI->FLASH_SR, SR_EOP);

	/* 6- DeSelect Erase Operation (reverse of step 2) */
	CLEAR_BIT(FMI->FLASH_CR, CR_SER);
}
void FMI_vFlashWrite(uint32_t copy_u32Address, uint16_t* copy_pu16Data, uint32_t copy_u32Size)
{
	//	FMI_vFlashEraseSector(Sector2);

	/* 0. unlock control register in FLASH_KEYR */
	if(READ_BIT(FMI->FLASH_CR, CR_LOCK) )
	{
		FMI->FLASH_KEYR = FMI_KEY1;
		FMI->FLASH_KEYR = FMI_KEY2;
	}
	/* 1. check busy bit */
	while(READ_BIT(FMI->FLASH_SR,SR_BSY));
	/* 2. Set the PG bit */
	SET_BIT(FMI->FLASH_CR,CR_PG);
	/* 3. Select PSIZEt */
	FMI->FLASH_CR &= ~ (0b11 << CR_PSIZE0);
	FMI->FLASH_CR |= 0b01 << CR_PSIZE0;

	/* 4. Assign data*/
	for(uint32_t Local_u32counter=0;Local_u32counter<copy_u32Size;Local_u32counter++)
	{
		*((volatile uint16_t*)copy_u32Address) = copy_pu16Data[Local_u32counter];
		/* 5. Wait for the BSY bit to be cleared */
		while(READ_BIT(FMI->FLASH_SR,SR_BSY));
		/* 6- Clear EOP flag   */
		SET_BIT(FMI->FLASH_SR, SR_EOP);
		copy_u32Address += 2;
	}
	/* 7 - deactivate programming mode */
	CLEAR_BIT(FMI->FLASH_CR,CR_PG);

	//	/* 1- Wait if Flash is Busy (BSY) */
	//	while(READ_BIT(FMI->FLASH_SR, 16) == 1){}
	//	/* 2- Unlock Flash Register using KEYR */
	//	if(READ_BIT(FMI->FLASH_CR, 31) == 1)
	//	{
	//		FMI->FLASH_KEYR = FMI_KEY1 ;
	//		FMI->FLASH_KEYR = FMI_KEY2 ;
	//	}
	//
	//	/* 3- select element size (PSIZE)  */
	//	FMI->FLASH_CR &=~((uint32_t)(0b11<<8)) ;
	//	FMI->FLASH_CR |= (0b01<<8);
	//
	//	/* 4- Activate Programming Mode (PG bit) */
	//	SET_BIT(FMI->FLASH_CR, 0);
	//
	//	/* 5- Write Data Array on Flash address */
	//	for(uint16_t i=0; i<copy_u32Size; i++)
	//	{
	//		*((volatile uint16_t*)copy_u32Address) = copy_pu16Data[i];
	//		copy_u32Address += 2 ;
	//
	//		/* 6- wait for Busy Flag    */
	//		while(READ_BIT(FMI->FLASH_SR, 16) == 1){}
	//		/* 7- Clear EOP flag   */
	//		SET_BIT(FMI->FLASH_SR, 0);
	//	}
	//	/* 8- deactivate programming mode */
	//	READ_BIT(FMI->FLASH_CR, 0);


}
