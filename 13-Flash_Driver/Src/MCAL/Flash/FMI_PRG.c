/*
 * FMI_PRG.c
 *
 *  Created on: May 12, 2023
 *      Author: TABANA
 */


#include "FMI_Interface.h"


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



}
