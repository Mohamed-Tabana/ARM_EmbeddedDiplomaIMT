/*
 * SPI_int.h
 *
 *  Created on: Jun 16, 2023
 *      Author: ALTAWKEL
 */

#ifndef MCAL_SPI_SPI_INT_H_
#define MCAL_SPI_SPI_INT_H_
#include "stdio.h"
#include "SPI_prv.h"

#define SPI_ADDRESS_BASE 0x40013000UL

typedef struct {
	volatile uint32_t SPI_CR1;
	volatile uint32_t SPI_CR2;
	volatile uint32_t SPI_SR;
	volatile uint32_t SPI_DR;
	volatile uint32_t SPI_CRCPR;
	volatile uint32_t SPI_RXCRCR;
	volatile uint32_t SPI_TXCRCR;
	volatile uint32_t SPI_I2SCFGR;
	volatile uint32_t SPI_I2SPR;

} SPI_RegDef_t;

#define SPI ((SPI_RegDef_t*)SPI_ADDRESS_BASE)


void SPI_vInit();
uint8_t SPI_Transceiving(uint8_t copy_u16Data);

#endif /* MCAL_SPI_SPI_INT_H_ */
