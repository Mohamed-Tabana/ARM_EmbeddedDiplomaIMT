/*
 * SPI_prv.h
 *
 *  Created on: Jun 16, 2023
 *      Author: ALTAWKEL
 */

#ifndef MCAL_SPI_SPI_PRV_H_
#define MCAL_SPI_SPI_PRV_H_

 enum {
    CPHA = 0x00,
    CPOL = 0x01,
    MSTR = 0x02,
    SPI_BR0 = 0x03,
    SPE = 0x06,
    LSBFIRST,
    SSI,
    SSM,
    RXONLY,
    DFF,
    CRCNEXT,
    SPI_CRCEN,
    BIDIOE ,
    BIDIMODE
} ;

 enum {
    RXDMAEN = 0x00,
	TXDMAEN = 0x01,
	SSOE = 0x02,
	FRF = 0x04,
	ERRIE = 0x05,
	RXNEIE = 0x06,
	TXEIE = 0x07,
} ;

 enum {
     RXNE,
     TXE ,
     CHSIDE,
     UDR,
     CRCERR,
     MODF,
     OVR,
     BSY,
     FRE
 };

#endif /* MCAL_SPI_SPI_PRV_H_ */
