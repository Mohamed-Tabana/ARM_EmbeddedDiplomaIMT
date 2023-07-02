/*
 * EXTI_Private.h
 *
 *  Created on: Apr 23, 2023
 *      Author: ALTAWKEL
 */

#ifndef MCAL_EXTI_EXTI_PRIVATE_H_
#define MCAL_EXTI_EXTI_PRIVATE_H_

#include "Utils.h"
#include "stdio.h"

typedef struct
{
	uint32_t EXTI_IMR;
	uint32_t EXTI_EMR;
	uint32_t EXTI_RTSR;
	uint32_t EXTI_FTSR;
	uint32_t EXTI_SWIER;
	uint32_t EXTI_PR;

} EXTI_REG_t;
#define MEXTI ((volatile EXTI_REG_t*)(0x40013C00))

typedef struct
{
	uint32_t SYSCFG_MEMRMP;
	uint32_t SYSCFG_PMC;
	uint32_t SYSCFG_EXTICR[4];
	uint32_t SYSCFG_CMPCR;

} SYSCFG_REG_t;
#define MSYSCFG ((volatile SYSCFG_REG_t*)(0x40013800))

typedef enum
{
	EXTI_Masked = 0,
	EXTI_NotMasked

}EXTI_Masking_t;
typedef enum
{
	EXTI_LINE_0 = 0,
	EXTI_LINE_1,
	EXTI_LINE_2,
	EXTI_LINE_3,
	EXTI_LINE_4,
	EXTI_LINE_5,
	EXTI_LINE_6,
	EXTI_LINE_7,
	EXTI_LINE_8,
	EXTI_LINE_9,
	EXTI_LINE_10,
	EXTI_LINE_11,
	EXTI_LINE_12,
	EXTI_LINE_13,
	EXTI_LINE_14,
	EXTI_LINE_15,
	EXTI_LINE_16,
	EXTI_LINE_17,
	EXTI_LINE_18,
	EXTI_LINE_21 = 21,
	EXTI_LINE_22 = 22,

} EXTI_Line_t;

typedef enum {
	EXTI_PORTA,
	EXTI_PORTB,
	EXTI_PORTC,
	EXTI_PORTD,
	EXTI_PORTE,
	EXTI_PORTH = 7,

} EXTI_EXTIPortCFG_t;

#endif /* MCAL_EXTI_EXTI_PRIVATE_H_ */
