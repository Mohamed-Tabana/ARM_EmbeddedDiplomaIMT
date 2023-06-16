/*
 * RCC_Private.h
 *
 *  Created on: Apr 17, 2023
 *      Author: ALTAWKEL
 */

#ifndef MCAL_RCC_PRIVATE_H_
#define MCAL_RCC_PRIVATE_H_

#include "stdio.h"
#include "Utils.h"
/* * * * * * * * * * * * * * * * * * * * * * * * * *
 *  Clock configuration register (RCC_CFGR) Pins   *
 * * * * * * * * * * * * * * * * * * * * * * * * * */
enum{
	SW0,
	SW1,
	SWS0,
	SWS1,
	HPRE0,
	HPRE1,
	HPRE2,
	HPRE3,
	PPRE10=10,
	PPRE11,
	PPRE12,
	PPRE20,
	PPRE21,
	PPRE22,
	RTCPRE0,
	RTCPRE1,
	RTCPRE2,
	RTCPRE3,
	RTCPRE4,
	MCO10,
	MCO11,
	I2SSC,
	MCO1_PRE0,
	MCO1_PRE1,
	MCO1_PRE2,
	MCO2_PRE0,
	MCO2_PRE1,
	MCO2_PRE2,
	MCO20,
	MCO21,
};
/* * * * * * * * * * * * * * * * * * * * * * * * * *
 * PLL configuration register (RCC_PLLCFGR) Pins   *
 * * * * * * * * * * * * * * * * * * * * * * * * * */
enum{
	PLLM0,
	PLLM1,
	PLLM2,
	PLLM3,
	PLLM4,
	PLLM5,
	PLLN0,
	PLLN1,
	PLLN2,
	PLLN3,
	PLLN4,
	PLLN5,
	PLLN6,
	PLLN7,
	PLLN8,
	PLLP0 = 16,
	PLLP1,
	PLLSRC = 22,
	PLLQ0 = 24,
	PLLQ1,
	PLLQ2,
	PLLQ3,

};
/* * * * * * * * * * * * * * * * * * * * * *
 *  Clock control register (RCC_CR) Pins   *
 * * * * * * * * * * * * * * * * * * * * * */
enum{
	HSION,
	HSIRDY,
	HSITRIM0 = 3,
	HSITRIM1,
	HSITRIM2,
	HSITRIM3,
	HSITRIM4,
	HSICAL0,
	HSICAL1,
	HSICAL2,
	HSICAL3,
	HSICAL4,
	HSICAL5,
	HSICAL6,
	HSICAL7,
	HSEON,
	HSERDY,
	HSEBYP,
	CSSON,
	PLLON = 24,
	PLLRDY
};
/* * * * * * * * * * * * * * * * * * * * * *
 * 				 RCC registers  		   *
 * * * * * * * * * * * * * * * * * * * * * */
typedef struct {
	uint32_t RCC_CR;
	uint32_t RCC_PLLCFGR;
	uint32_t RCC_CFGR;
	uint32_t RCC_CIR;
	uint32_t RCC_AHB1RSTR;
	uint32_t RCC_AHB2RSTR;
	uint32_t RCC_Reserved1;
	uint32_t RCC_Reserved2;
	uint32_t RCC_APB1RSTR;
	uint32_t RCC_APB2RSTR;
	uint32_t RCC_Reserved3;
	uint32_t RCC_Reserved4;
	uint32_t RCC_AHB1ENR;
	uint32_t RCC_AHB2ENR;
	uint32_t RCC_Reserved5;
	uint32_t RCC_Reserved6;
	uint32_t RCC_APB1ENR;
	uint32_t RCC_APB2ENR;
	uint32_t RCC_Reserved7;
	uint32_t RCC_Reserved8;


} RCC_REG_t;

typedef enum {
	HSI_clock,
	HSE_clock,
	PLL_clock,

} CLKtype_t;
/* * * * * * * * * * * * * * * * * * * * * *
 *  Peripheral AHB 1	   				   *
 * * * * * * * * * * * * * * * * * * * * * */
typedef enum {
	GPIOAEN = 0,
	GPIOBEN,
	GPIOCEN,
	GPIODEN,
	GPIOEEN,
	GPIOHEN = 7,
	CRCEN = 12,
	DMA1EN = 21,
	DMA2EN

} PeripheralAHB1_t;
/* * * * * * * * * * * * * * * * * * * * * *
 *  Peripheral AHB 2	   				   *
 * * * * * * * * * * * * * * * * * * * * * */
typedef enum {
	OTGFSEN = 7

} PeripheralAHB2_t;

/* * * * * * * * * * * * * * * * * * * * * *
 *  Peripheral APB1		   				   *
 * * * * * * * * * * * * * * * * * * * * * */
typedef enum {
	TIM2EN,
	TIM3EN,
	TIM4EN,
	TIM5EN,
	WWDGEN = 11,
	SPI2EN = 14,
	SPI3EN = 15,
	USART2EN = 17,
	I2C1EN = 21,
	I2C2EN = 22,
	I2C3EN = 23,
	PWREN=28
} PeripheralAPB1_t;

/* * * * * * * * * * * * * * * * * * * * * *
 *  Peripheral APB2		   				   *
 * * * * * * * * * * * * * * * * * * * * * */
typedef enum {
	TIM1EN,
	USART1EN = 4,
	USART6EN = 5,
	ADC1EN = 8,
	SDIOEN = 11,
	SPI1EN,
	SPI4EN,
	SYSCFGEN,
	TIM9EN = 16,
	TIM10EN,
	TIM11EN

} PeripheralAPB2_t;

typedef enum {
	PLL_input_clock_x_2 ,
	PLL_input_clock_x_3 ,
	PLL_input_clock_x_4 ,
	PLL_input_clock_x_5 ,
	PLL_input_clock_x_6 ,
	PLL_input_clock_x_7 ,
	PLL_input_clock_x_8 ,
	PLL_input_clock_x_9 ,
	PLL_input_clock_x_10,
	PLL_input_clock_x_11,
	PLL_input_clock_x_12,
	PLL_input_clock_x_13,
	PLL_input_clock_x_14,
	PLL_input_clock_x_15,
	PLL_input_clock_x_16,

} PLLMUL_t;

typedef enum {
	HSE_clock_not_divided,
	HSE_clock_divided_by_2,


} HSEDIV_t;

typedef enum {
	CLK_OFF,
	CLK_ON,


} CLKStatus_t;
typedef enum {

	NOTbypasseds,
	bypasseds,

} bypassedsSTS_t;
typedef enum {

	Clock_detector_OFF,
	Clock_detector_ON,

} Clock_Detector_t;

#define RCC ((volatile RCC_REG_t*)(0x40023800))


#endif /* MCAL_RCC_PRIVATE_H_ */
