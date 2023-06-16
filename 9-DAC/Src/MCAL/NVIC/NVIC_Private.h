/*
 * NVIC_Private.h
 *
 *  Created on: Apr 23, 2023
 *      Author: ALTAWKEL
 */

#ifndef MCAL_NVIC_NVIC_PRIVATE_H_
#define MCAL_NVIC_NVIC_PRIVATE_H_

#include "stdio.h"
/* * * * * * * * * * * * * * * * * * * * * *
 * 				NVIC Registers 		  	   *
 * * * * * * * * * * * * * * * * * * * * * */
typedef struct {
	uint32_t NVIC_ISER[32];
	uint32_t NVIC_ICER[32];
	uint32_t NVIC_ISPR[32];
	uint32_t NVIC_ICPR[32];
	uint32_t NVIC_IABR[64];
	uint8_t  NVIC_IPR[240];

}NVIC_REG_t;

#define NVIC ((volatile NVIC_REG_t*)(0xE000E100))
#define NVIC_STIR ((volatile NVIC_REG_t*)(0xE000EF00))

/* * * * * * * * * * * * * * * * * * * * * *
 * 				SCB Registers 		  	   *
 * * * * * * * * * * * * * * * * * * * * * */
typedef struct {
	uint32_t CPUID;                    /*!< Offset: 0x000 (R/ )  CPUID Base Register */
	uint32_t ICSR;                     /*!< Offset: 0x004 (R/W)  Interrupt Control and State Register */
	uint32_t VTOR;                     /*!< Offset: 0x008 (R/W)  Vector Table Offset Register */
	uint32_t AIRCR;                    /*!< Offset: 0x00C (R/W)  Application Interrupt and Reset Control Register */
	uint32_t SCR;                      /*!< Offset: 0x010 (R/W)  System Control Register */
	uint32_t CCR;                      /*!< Offset: 0x014 (R/W)  Configuration Control Register */
	uint8_t  SHP[12U];                 /*!< Offset: 0x018 (R/W)  System Handlers Priority Registers. [0] is reserved */
	uint32_t SHCSR;                    /*!< Offset: 0x024 (R/W)  System Handler Control and State Register */
} SCB__REG_t;
#define SCB ((volatile SCB__REG_t*)(0xE000ED00))

/* * * * * * * * * * * * * * * * * * * * * *
 * 		Vector table for STM32F401  	   *
 * * * * * * * * * * * * * * * * * * * * * */
typedef enum {
	NVIC_INonMaskableInt         = -14,  /*!< Non Maskable Interrupt */
	NVIC_IHardFault              = -13,  /*!< Hard Fault Interrupt */
	NVIC_IMemoryManagement       = -12,  /*!< Memory Management Interrupt */
	NVIC_IBusFault               = -11,  /*!< Bus Fault Interrupt */
	NVIC_IUsageFault             = -10,  /*!< Usage Fault Interrupt */
	NVIC_ISVCall                 = -5,   /*!< SV Call Interrupt */
	NVIC_IDebugMonitor           = -4,   /*!< Debug Monitor Interrupt */
	NVIC_IPendSV                 = -2,   /*!< Pend SV Interrupt */
	NVIC_ISysTick                = -1,   /*!< System Tick Interrupt */
	NVIC_IWWDG                   = 0,    /*!< Window Watchdog Interrupt */
	NVIC_IPVD                    = 1,    /*!< PVD through EXTI Line Detection Interrupt */
	NVIC_ITAMP_STAMP             = 2,    /*!< Tamper and TimeStamp interrupts through the EXTI line */
	NVIC_IRTC_WKUP               = 3,    /*!< RTC Wakeup interrupt through the EXTI line */
	NVIC_IFLASH                  = 4,    /*!< FLASH global Interrupt */
	NVIC_IRCC                    = 5,    /*!< RCC global Interrupt */
	NVIC_IEXTI0                  = 6,    /*!< EXTI Line0 Interrupt */
	NVIC_IEXTI1                  = 7,    /*!< EXTI Line1 Interrupt */
	NVIC_IEXTI2                  = 8,    /*!< EXTI Line2 Interrupt */
	NVIC_IEXTI3                  = 9,    /*!< EXTI Line3 Interrupt */
	NVIC_IEXTI4                  = 10,   /*!< EXTI Line4 Interrupt */
	NVIC_IDMA1_Stream0           = 11,   /*!< DMA1 Stream 0 global Interrupt */
	NVIC_IDMA1_Stream1           = 12,   /*!< DMA1 Stream 1 global Interrupt */
	NVIC_IDMA1_Stream2           = 13,   /*!< DMA1 Stream 2 global Interrupt */
	NVIC_IDMA1_Stream3           = 14,   /*!< DMA1 Stream 3 global Interrupt */
	NVIC_IDMA1_Stream4           = 15,   /*!< DMA1 Stream 4 global Interrupt */
	NVIC_IDMA1_Stream5           = 16,   /*!< DMA1 Stream 5 global Interrupt */
	NVIC_IDMA1_Stream6           = 17,   /*!< DMA1 Stream 6 global Interrupt */
	NVIC_IADC                    = 18,   /*!< ADC1, ADC2 and ADC3 global Interrupts */
	NVIC_ICAN1_TX                = 19,   /*!< CAN1 TX Interrupt */
	NVIC_ICAN1_RX0               = 20,   /*!< CAN1 RX0 Interrupt */
	NVIC_ICAN1_RX1               = 21,   /*!< CAN1 RX1 Interrupt */
	NVIC_ICAN1_SCE               = 22,   /*!< CAN1 SCE Interrupt */
	NVIC_IEXTI9_5                = 23,   /*!< External Line[9:5] Interrupts */
	NVIC_ITIM1_BRK_TIM9          = 24,   /*!< TIM1 Break interrupt and TIM9 global interrupt */
	NVIC_ITIM1_UP_TIM10          = 25,   /*!< TIM1 Update Interrupt and TIM10 global interrupt */
	NVIC_ITIM1_TRG_COM_TIM11     = 26,   /*!< TIM1 Trigger and Commutation Interrupt and TIM11 global interrupt */
	NVIC_ITIM1_CC                = 27,   /*!< TIM1 Capture Compare Interrupt */
	NVIC_ITIM2                   = 28,   /*!< TIM2 global Interrupt */
	NVIC_ITIM3                   = 29,   /*!< TIM3 global Interrupt */
	NVIC_ITIM4                   = 30,   /*!< TIM4 global Interrupt */
	NVIC_II2C1_EV                = 31,   /*!< I2C1 Event Interrupt */
	NVIC_II2C1_ER                = 32,   /*!< I2C1 Error Interrupt */
	NVIC_II2C2_EV                = 33,   /*!< I2C2 Event Interrupt */
	NVIC_II2C2_ER                = 34,   /*!< I2C2 Error Interrupt */
	NVIC_ISPI1                   = 35,   /*!< SPI1 global Interrupt */
	NVIC_ISPI2                   = 36,   /*!< SPI2 global Interrupt */
	NVIC_IUSART1                 = 37,   /*!< USART1 global Interrupt */
	NVIC_IUSART2                 = 38,   /*!< USART2 global Interrupt */
	NVIC_IUSART3                 = 39,   /*!< USART3 global Interrupt */
	NVIC_IEXTI15_10              = 40,   /*!< External Line[15:10] Interrupts */
	NVIC_IRTC_Alarm              = 41,   /*!< RTC Alarm (A and B) through EXTI Line Interrupt */
	NVIC_IOTG_FS_WKUP            = 42,   /*!< USB OTG FS Wakeup through EXTI line interrupt */
	NVIC_ITIM8_BRK_TIM12         = 43,   /*!< TIM8 Break Interrupt and TIM12 global interrupt */
	NVIC_ITIM8_UP_TIM13          = 44,   /*!< TIM8 Update Interrupt and TIM13 global interrupt */
	NVIC_ITIM8_TRG_COM_TIM14     = 45,   /*!< TIM8 Trigger and Commutation Interrupt and TIM14 global interrupt */
	NVIC_ITIM8_CC                = 46,   /*!< TIM8 Capture Compare Interrupt */
	NVIC_IDMA1_Stream7           = 47,   /*!< DMA1 Stream7 Interrupt */
	NVIC_IFMC                    = 48,   /*!< FMC global Interrupt */
	NVIC_ISDIO                   = 49,   /*!< SDIO global Interrupt */
	NVIC_ITIM5                   = 50,   /*!< TIM5 global Interrupt */
	NVIC_ISPI3                   = 51,   /*!< SPI3 global Interrupt */
	NVIC_IUART4                  = 52,   /*!< UART4 global Interrupt */
	NVIC_IUART5                  = 53,   /*!< UART5 global Interrupt */
	NVIC_ITIM6_DAC               = 54,   /*!< TIM6 global and DAC1&2 underrun error */
	NVIC_ITIM7                   = 55,   /*!< TIM7 global interrupt */
	NVIC_IDMA2_Stream0           = 56,   /*!< DMA2 Stream 0 global Interrupt */
	NVIC_IDMA2_Stream1           = 57,   /*!< DMA2 Stream 1 global Interrupt */
	NVIC_IDMA2_Stream2           = 58,   /*!< DMA2 Stream 2 global Interrupt */
	NVIC_IDMA2_Stream3           = 59,   /*!< DMA2 Stream 3 global Interrupt */
	NVIC_IDMA2_Stream4           = 60,   /*!< DMA2 Stream 4 global Interrupt */
	NVIC_IETH                    = 61,   /*!< Ethernet global Interrupt */
	NVIC_IETH_WKUP               = 62,   /*!< Ethernet Wakeup through EXTI line Interrupt */
	NVIC_ICAN2_TX                = 63,   /*!< CAN2 TX Interrupt */
	NVIC_ICAN2_RX0               = 64,   /*!< CAN2 RX0 Interrupt */
	NVIC_ICAN2_RX1               = 65,   /*!< CAN2 RX1 Interrupt */
	NVIC_ICAN2_SCE               = 66,   /*!< CAN2 SCE Interrupt */
	NVIC_IOTG_FS                 = 67,   /*!< USB OTG FS global Interrupt */
	NVIC_IDMA2_Stream5           = 68,   /*!< DMA2 Stream 5 global interrupt */
	NVIC_IDMA2_Stream6           = 69,   /*!< DMA2 Stream 6 global interrupt */
	NVIC_IDMA2_Stream7           = 70,   /*!< DMA2 Stream 7 global interrupt */
	NVIC_IUSART6                 = 71,   /*!< USART6 global interrupt */
	NVIC_II2C3_EV                = 72,   /*!< I2C3 event interrupt */
	NVIC_II2C3_ER                = 73,   /*!< I2C3 error interrupt */
	NVIC_IFPU					   = 81,
	NVIC_ISPI4				   = 84
}Interrupt_t;

typedef enum
{

	Four_bit_Group	= 0,
	Three_bit_Group	= 4,
	Two_bit_Group	= 5,
	One_bit_Group	= 6,
	Zero_bit_Group	= 7,

}PriorityCFG_t;

#endif /* MCAL_NVIC_NVIC_PRIVATE_H_ */
