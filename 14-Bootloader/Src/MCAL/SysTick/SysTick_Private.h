/*
 * SysTick_Private.h
 *
 *  Created on: Apr 24, 2023
 *      Author: ALTAWKEL
 */

#ifndef MCAL_SYSTICK_SYSTICK_PRIVATE_H_
#define MCAL_SYSTICK_SYSTICK_PRIVATE_H_
#include "Utils.h"
#include "stdio.h"


/* * * * * * * * * * * * * * * * * * * * * *
 * 				SysTick Registers	  	   *
 * * * * * * * * * * * * * * * * * * * * * */
typedef struct{
	uint32_t STK_CTRL;
	uint32_t STK_LOAD;
	uint32_t STK_VAL;
	uint32_t STK_CALIB;

}MSTK_REG_t;

#define MSTK ((volatile MSTK_REG_t*)(0xE000E010))

/* * * * * * * * * * * * * * * * * * * * * *
 * 				STK_CTRL Pins 		  	   *
 * * * * * * * * * * * * * * * * * * * * * */

enum {
	ENABLE,
	TICKINT,
	CLKSOURCE,
	COUNTFLAG = 16
};

/* * * * * * * * * * * * * * * * * * * * * *
 * 				STK_CALIB Pins 		  	   *
 * * * * * * * * * * * * * * * * * * * * * */

enum {
	TENMS0,
	SKEW = 30,
	NOREF = 31
};

typedef enum
{
	Interval_Single,
	Interval_Periodic
}Interval_t;


#endif /* MCAL_SYSTICK_SYSTICK_PRIVATE_H_ */
