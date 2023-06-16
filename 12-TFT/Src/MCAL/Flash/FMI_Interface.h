/*
 * FMI_Interface.h
 *
 *  Created on: May 12, 2023
 *      Author: ALTAWKEL
 */

#ifndef MCAL_FLASH_FMI_INTERFACE_H_
#define MCAL_FLASH_FMI_INTERFACE_H_

#include "FMI_Private.h"
#include "FMI_CFG.h"

typedef enum {
	Sector0,
	Sector1,
	Sector2,
	Sector3,
	Sector4,
	Sector5,
	Sector6,
	Sector7

}FMI_Sector_t;

void FMI_vFlashEraseSector(FMI_Sector_t copy_eFMI_Sector);
void FMI_vEraseAppArea();
void FMI_vFlashEraseMass();
void FMI_vFlashWrite(uint32_t copy_u32Address, uint16_t* copy_pu16Data, uint32_t copy_u32Size);

#endif /* MCAL_FLASH_FMI_INTERFACE_H_ */
