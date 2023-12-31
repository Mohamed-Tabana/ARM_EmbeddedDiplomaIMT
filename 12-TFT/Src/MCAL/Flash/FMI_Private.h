/*
 * FMI_Private.h
 *
 *  Created on: May 12, 2023
 *      Author: ALTAWKEL
 */

#ifndef MCAL_FLASH_FMI_PRIVATE_H_
#define MCAL_FLASH_FMI_PRIVATE_H_
#include "Utils.h"
#include "stdio.h"

typedef struct {
	volatile uint32_t FLASH_ACR;
	volatile uint32_t FLASH_KEYR;
	volatile uint32_t FLASH_OPTKEYR;
	volatile uint32_t FLASH_SR;
	volatile uint32_t FLASH_CR;
	volatile uint32_t FLASH_OPTCR;

}FMI_RegDef_t;

#define FMI_BASE_ADDRESS				 0x40023C00UL
#define FMI				 				 ((volatile FMI_RegDef_t*)(FMI_BASE_ADDRESS))

#define FMI_KEY1  0x45670123
#define FMI_KEY2  0xCDEF89AB

enum {
	ACR_LATENCY0 = 0,
    ACR_PRFTEN = 8,
	ACR_ICEN = 9,
	ACR_DCEN = 10,
	ACR_ICRST = 11,
	ACR_DCRST = 12,


    SR_EOP = 0,
	SR_OPERR = 1,
	SR_WRPERR = 4,
	SR_PGAERR = 5,
	SR_PGPERR = 6,
	SR_PGSERR = 7,
	SR_RDERR  = 8,
	SR_BSY = 16,

    CR_PG = 0,
    CR_SER = 1,
    CR_MER = 2,
	CR_SNB0 = 3,
	CR_PSIZE0 = 8,
    CR_STRT = 16,
    CR_EOPIE = 24,
    CR_ERRIE = 25,
    CR_LOCK = 31,

    OPTCR_OPTLOCK = 0,
    OPTCR_OPTSTRT = 1,
    OPTCR_BOR_LEV0 = 2,
    OPTCR_BOR_LEV1 = 3,
    OPTCR_WDG_SW0 = 5,

} ;






#endif /* MCAL_FLASH_FMI_PRIVATE_H_ */
