/*
 * GPIO_Private.h
 *
 *  Created on: Apr 21, 2023
 *      Author: ALTAWKEL
 */
#ifndef MCAL_GPIO_GPIO_Private_H_
#define MCAL_GPIO_GPIO_Private_H_

#include "stdio.h"
#include "Utils.h"

#define GPIOA_BASE_ADDR 0x40020000
#define GPIOB_BASE_ADDR 0x40020400
#define GPIOC_BASE_ADDR 0x40020800
#define GPIOD_BASE_ADDR 0x40020C00
#define GPIOE_BASE_ADDR 0x40021000
#define GPIOH_BASE_ADDR 0x40021C00

typedef struct
{
	uint32_t GPIO_MODER;
	uint32_t GPIO_OTYPER;
	uint32_t GPIO_OSPEEDR;
	uint32_t GPIO_PUPDR;
	uint32_t GPIO_IDR;
	uint32_t GPIO_ODR;
	uint32_t GPIO_BSRR;
	uint32_t GPIO_LCKR;
	uint32_t GPIO_AFR[2];

} GPIO_REG_t;

#define GPIOA ((volatile GPIO_REG_t*)GPIOA_BASE_ADDR)
#define GPIOB ((volatile GPIO_REG_t*)GPIOB_BASE_ADDR)
#define GPIOC ((volatile GPIO_REG_t*)GPIOC_BASE_ADDR)
#define GPIOD ((volatile GPIO_REG_t*)GPIOD_BASE_ADDR)
#define GPIOE ((volatile GPIO_REG_t*)GPIOE_BASE_ADDR)
#define GPIOH ((volatile GPIO_REG_t*)GPIOH_BASE_ADDR)




/* * * * * * * * * * * * * * * * * *
 *  GPIO mode register (GPIOx_MODER)*
 * * * * * * * * * * * * * * * * * */
enum {
	MODER0 = 0,
	MODER1 = 2,
	MODER2 = 4,
	MODER3 = 6,
	MODER4 = 8,
	MODER5 = 10,
	MODER6 = 12,
	MODER7 = 14,
	MODER8 = 16,
	MODER9 = 18,
	MODER10 = 20,
	MODER11 = 22,
	MODER12 = 24,
	MODER13 = 26,
	MODER14 = 28,
	MODER15 = 30,
};

/* * * * * * * * * * * * * * * * * *
 *  GPIO output type register     *
 *         (GPIOx_OTYPER)         *
 * * * * * * * * * * * * * * * * * */
enum {
	OT0 = 0,
	OT1 = 1,
	OT2 = 2,
	OT3 = 3,
	OT4 = 4,
	OT5 = 5,
	OT6 = 6,
	OT7 = 7,
	OT8 = 8,
	OT9 = 9,
	OT10 = 10,
	OT11 = 11,
	OT12 = 12,
	OT13 = 13,
	OT14 = 14,
	OT15 = 15,
};

/* * * * * * * * * * * * * * * * * *
 *  GPIO output speed register    *
 *       (GPIOx_OSPEEDR)          *
 * * * * * * * * * * * * * * * * * */
enum {
	OSPEEDR0 = 0,
	OSPEEDR1 = 2,
	OSPEEDR2 = 4,
	OSPEEDR3 = 6,
	OSPEEDR4 = 8,
	OSPEEDR5 = 10,
	OSPEEDR6 = 12,
	OSPEEDR7 = 14,
	OSPEEDR8 = 16,
	OSPEEDR9 = 18,
	OSPEEDR10 = 20,
	OSPEEDR11 = 22,
	OSPEEDR12 = 24,
	OSPEEDR13 = 26,
	OSPEEDR14 = 28,
	OSPEEDR15 = 30,
};

/* * * * * * * * * * * * * * * * * *
 *  GPIO pull-up/pull-down register*
 *         (GPIOx_PUPDR)          *
 * * * * * * * * * * * * * * * * * */
enum {
	PUPDR0 = 0,
	PUPDR1 = 2,
	PUPDR2 = 4,
	PUPDR3 = 6,
	PUPDR4 = 8,
	PUPDR5 = 10,
	PUPDR6 = 12,
	PUPDR7 = 14,
	PUPDR8 = 16,
	PUPDR9 = 18,
	PUPDR10 = 20,
	PUPDR11 = 22,
	PUPDR12 = 24,
	PUPDR13 = 26,
	PUPDR14 = 28,
	PUPDR15 = 30,
};

/* * * * * * * * * * * * * * * * * *
 *  GPIO input data register      *
 *          (GPIOx_IDR)           *
 * * * * * * * * * * * * * * * * * */
enum {
	IDR0,
	IDR1,
	IDR2,
	IDR3,
	IDR4,
	IDR5,
	IDR6,
	IDR7,
	IDR8,
	IDR9,
	IDR10,
	IDR11,
	IDR12,
	IDR13,
	IDR14,
	IDR15,
};

/* * * * * * * * * * * * * * * * * *
 *  GPIO output data register     *
 *          (GPIOx_ODR)           *
 * * * * * * * * * * * * * * * * * */
enum {
	ODR0,
	ODR1,
	ODR2,
	ODR3,
	ODR4,
	ODR5,
	ODR6,
	ODR7,
	ODR8,
	ODR9,
	ODR10,
	ODR11,
	ODR12,
	ODR13,
	ODR14,
	ODR15,
};

/* * * * * * * * * * * * * * * * * * * * * *
 *  GPIO bit set/reset register (GPIOx_BSRR)*
 * * * * * * * * * * * * * * * * * * * * * */
enum {
	BS0,
	BS1,
	BS2,
	BS3,
	BS4,
	BS5,
	BS6,
	BS7,
	BS8,
	BS9,
	BS10,
	BS11,
	BS12,
	BS13,
	BS14,
	BS15,
	BR0 = 16,
	BR1,
	BR2,
	BR3,
	BR4,
	BR5,
	BR6,
	BR7,
	BR8,
	BR9,
	BR10,
	BR11,
	BR12,
	BR13,
	BR14,
	BR15,
};

/* * * * * * * * * * * * * * * * * *
 *  GPIO lock register (GPIOx_LCKR) *
 * * * * * * * * * * * * * * * * * */
enum {
	LCK0,
	LCK1,
	LCK2,
	LCK3,
	LCK4,
	LCK5,
	LCK6,
	LCK7,
	LCK8,
	LCK9,
	LCK10,
	LCK11,
	LCK12,
	LCK13,
	LCK14,
	LCK15,
	LCKK = 16,
};
/* * * * * * * * * * * * * * * * * * * * * *
 *  GPIO alternate function high register *
 *          (GPIOx_AFRH)                  *
 * * * * * * * * * * * * * * * * * * * * * */
enum {
	AFRH0 = 0,
	AFRH1 = 4,
	AFRH2 = 8,
	AFRH3 = 12,
	AFRH4 = 16,
	AFRH5 = 20,
	AFRH6 = 24,
	AFRH7 = 28,
};

/* * * * * * * * * * * * * * * * * * *
 *  GPIO mode register bits (MODERy) *
 * * * * * * * * * * * * * * * * * * */
typedef enum {
	INPUT = 0,     // Input mode
	OUTPUT,        // General purpose output mode
	ALTERNATE,     // Alternate function mode
	ANALOG,        // Analog mode
}GPIO_PinType_t;
/* * * * * * * * * * * * * * * * * * * * *
 *  GPIO output type register bits       *
 *        (OTYPERy)                       *
 * * * * * * * * * * * * * * * * * * * * */
typedef enum {
	PUSH_PULL = 0,  // Output push-pull
	OPEN_DRAIN,     // Output open-drain
} GPIO_OType_t;

/* * * * * * * * * * * * * * * * * *
 *  GPIO output speed register bits*
 *         (OSPEEDRy)             *
 * * * * * * * * * * * * * * * * */
typedef enum {
	LOW_SPEED = 0,  // Low speed
	MEDIUM_SPEED,   // Medium speed
	HIGH_SPEED,     // High speed
	VERY_HIGH_SPEED,// Very high speed
} GPIO_OSpeed_t;

/* * * * * * * * * * * * * * * * * *
 *  GPIO pull-up/pull-down register*
 *         (PUPDRy)               *
 * * * * * * * * * * * * * * * * * */
typedef enum {
	NO_PULL = 0,    // No pull-up, no pull-down
	PULL_UP,        // Pull-up
	PULL_DOWN,      // Pull-down
} GPIO_PUPD_t;

/* * * * * * * * * * * * * * * * * *
 *  GPIO input data register bits  *
 *          (IDRy)                *
 * * * * * * * * * * * * * * * * * */
typedef enum {
	INPUT_LOW = 0,  // Input low
	INPUT_HIGH,     // Input high
} GPIO_IDR_t;

/* * * * * * * * * * * * * * * * * *
 *  GPIO output data register bits*
 *          (ODRy)               *
 * * * * * * * * * * * * * * * * * */
typedef enum {
	OUTPUT_LOW = 0, // Output low
	OUTPUT_HIGH,    // Output high
} GPIO_ODR_t;

/* * * * * * * * * * * * * * * * * * * * * *
 *  GPIO bit set/reset register bits      *
 *         (BSy)                           *
 * * * * * * * * * * * * * * * * * * * * * */
typedef enum {
	RESET,
	SET ,        // Set bit
	// Reset bit
} GPIO_BS_t;

/* * * * * * * * * * * * * * * * * *
 *  GPIO lock register bits        *
 *         (LCKy)                  *
 * * * * * * * * * * * * * * * * * */
typedef enum {
	UNLOCKED = 0,   // GPIO port can be modified
	LOCKED,         // GPIO port is locked until next reset
} GPIO_LCK_t;

/* * * * * * * * * * * * * * * * * * * * * *
 *  GPIO alternate function bits		   *
 *          (AF  )                         *
 * * * * * * * * * * * * * * * * * * * * * */
typedef enum {
	AF0 = 0,
	AF1,
	AF2,
	AF3,
	AF4,
	AF5,
	AF6,
	AF7,
	AF8,
	AF9,
	AF10,
	AF11,
	AF12,
	AF13,
	AF14,
	AF15,
} GPIO_AF_t;

/* * * * * * * * * * * * * * * * * * * * * *
 *  GPIO Ports							   *
 *          	                           *
 * * * * * * * * * * * * * * * * * * * * * */
typedef enum {
	PORTA,
	PORTB,
	PORTC,
	PORTD,
	PORTE,
	PORTH,

} GPIO_Port_t;

/* * * * * * * * * * * * * * * * * * * * * *
 *  GPIO alternate function bits		   *
 *          (AF  )                         *
 * * * * * * * * * * * * * * * * * * * * * */
typedef enum {
	PIN0 = 0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7,
	PIN8,
	PIN9,
	PIN10,
	PIN11,
	PIN12,
	PIN13,
	PIN14,
	PIN15,
} GPIO_Pin_t;


typedef struct
{
	GPIO_Port_t PIN_Port;
	GPIO_Pin_t PIN_Number;
	GPIO_PinType_t PIN_Type;
	GPIO_ODR_t PIN_OValue;
	GPIO_OType_t PIN_OType;
	GPIO_OSpeed_t PIN_OSpeed;
	GPIO_PUPD_t PIN_IPullUpDown;
	GPIO_LCK_t PIN_LCKSTS;
	GPIO_AF_t PIN_AF;

} GPIO_CFG_t;
typedef GPIO_CFG_t* GPIO_pCFG_t;


#endif /* MCAL_GPIO_GPIO_CPrivate_H_ */
