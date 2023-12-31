/*
 * GPIO_PRG.c
 *
 *  Created on: Apr 21, 2023
 *      Author: TABANA
 */


#include "GPIO_Interface.h"
#include "RCC_Interface.h"
#include "Utils.h"

void MGPIO_Init(GPIO_CFG_t* copy_GPIO_pCFG)
{
	RCC_AHB1EnableCLK(GPIOAEN);
	RCC_AHB1EnableCLK(GPIOBEN);

	MGPIO_vSetPinType(copy_GPIO_pCFG->PIN_Port,copy_GPIO_pCFG->PIN_Number,copy_GPIO_pCFG->PIN_Type);
	MGPIO_vSetOutputPinType(copy_GPIO_pCFG->PIN_Port,copy_GPIO_pCFG->PIN_Number,copy_GPIO_pCFG->PIN_OType);
	MGPIO_vSetOutputPinSpeed(copy_GPIO_pCFG->PIN_Port,copy_GPIO_pCFG->PIN_Number,copy_GPIO_pCFG->PIN_OSpeed);
	MGPIO_vSetInputPinPullUpDown(copy_GPIO_pCFG->PIN_Port,copy_GPIO_pCFG->PIN_Number,copy_GPIO_pCFG->PIN_IPullUpDown);
	MGPIO_vSetOutputPinValueBSR(copy_GPIO_pCFG->PIN_Port,copy_GPIO_pCFG->PIN_Number,copy_GPIO_pCFG->PIN_OValue);
	MGPIO_vSetPinLockSTS(copy_GPIO_pCFG->PIN_Port,copy_GPIO_pCFG->PIN_Number,copy_GPIO_pCFG->PIN_LCKSTS);
	MGPIO_vSetPinAlternativeFunction(copy_GPIO_pCFG->PIN_Port,copy_GPIO_pCFG->PIN_Number,copy_GPIO_pCFG->PIN_AF);


}

void MGPIO_vSetPinType(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_PinType_t copy_eGPIO_PinType)
{
	switch (copy_eGPIO_Port)
	{
	case PORTA:
		GPIOA->GPIO_MODER &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOA->GPIO_MODER |= (copy_eGPIO_PinType<<copy_eGPIO_Pin*2);
		break;
	case PORTB:
		GPIOB->GPIO_MODER &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOB->GPIO_MODER |= (copy_eGPIO_PinType<<copy_eGPIO_Pin*2);
		break;
	case PORTC:
		GPIOC->GPIO_MODER &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOC->GPIO_MODER |= (copy_eGPIO_PinType<<copy_eGPIO_Pin*2);
		break;
	case PORTD:
		GPIOD->GPIO_MODER &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOD->GPIO_MODER |= (copy_eGPIO_PinType<<copy_eGPIO_Pin*2);
		break;
	case PORTE:
		GPIOE->GPIO_MODER &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOE->GPIO_MODER |= (copy_eGPIO_PinType<<copy_eGPIO_Pin*2);
		break;
	case PORTH:
		GPIOH->GPIO_MODER &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOH->GPIO_MODER |= (copy_eGPIO_PinType<<copy_eGPIO_Pin*2);
		break;
	}
}
void MGPIO_vSetOutputPinType(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_OType_t copy_GPIO_OType)
{
	switch (copy_eGPIO_Port)
	{
	case PORTA:
		GPIOA->GPIO_OTYPER &= ~(0b1<<copy_eGPIO_Pin*2);
		GPIOA->GPIO_OTYPER |= (copy_GPIO_OType<<copy_eGPIO_Pin);
		break;
	case PORTB:
		GPIOB->GPIO_OTYPER &= ~(0b1<<copy_eGPIO_Pin*2);
		GPIOB->GPIO_OTYPER |= (copy_GPIO_OType<<copy_eGPIO_Pin);
		break;
	case PORTC:
		GPIOC->GPIO_OTYPER &= ~(0b1<<copy_eGPIO_Pin);
		GPIOC->GPIO_OTYPER |= (copy_GPIO_OType<<copy_eGPIO_Pin);
		break;
	case PORTD:
		GPIOD->GPIO_OTYPER &= ~(0b1<<copy_eGPIO_Pin);
		GPIOD->GPIO_OTYPER |= (copy_GPIO_OType<<copy_eGPIO_Pin);
		break;
	case PORTE:
		GPIOE->GPIO_OTYPER &= ~(0b1<<copy_eGPIO_Pin);
		GPIOE->GPIO_OTYPER |= (copy_GPIO_OType<<copy_eGPIO_Pin);
		break;
	case PORTH:
		GPIOH->GPIO_OTYPER &= ~(0b1<<copy_eGPIO_Pin);
		GPIOH->GPIO_OTYPER |= (copy_GPIO_OType<<copy_eGPIO_Pin);
		break;
	}
}
void MGPIO_vSetOutputPinSpeed(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_OSpeed_t copy_GPIO_OSpeed)
{

	switch (copy_eGPIO_Port)
	{
	case PORTA:
		GPIOA->GPIO_OSPEEDR &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOA->GPIO_OSPEEDR |= (copy_GPIO_OSpeed<<copy_eGPIO_Pin*2);
		break;
	case PORTB:
		GPIOB->GPIO_OSPEEDR &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOB->GPIO_OSPEEDR |= (copy_GPIO_OSpeed<<copy_eGPIO_Pin*2);
		break;
	case PORTC:
		GPIOC->GPIO_OSPEEDR &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOC->GPIO_OSPEEDR |= (copy_GPIO_OSpeed<<copy_eGPIO_Pin*2);
		break;
	case PORTD:
		GPIOD->GPIO_OSPEEDR &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOD->GPIO_OSPEEDR |= (copy_GPIO_OSpeed<<copy_eGPIO_Pin*2);
		break;
	case PORTE:
		GPIOE->GPIO_OSPEEDR &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOE->GPIO_OSPEEDR |= (copy_GPIO_OSpeed<<copy_eGPIO_Pin*2);
		break;
	case PORTH:
		GPIOH->GPIO_OSPEEDR &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOH->GPIO_OSPEEDR |= (copy_GPIO_OSpeed<<copy_eGPIO_Pin*2);
		break;
	}

}
void MGPIO_vSetInputPinPullUpDown(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_PUPD_t copy_GPIO_PUPD)
{
	switch (copy_eGPIO_Port)
	{
	case PORTA:
		GPIOA->GPIO_PUPDR &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOA->GPIO_PUPDR |= (copy_GPIO_PUPD<<copy_eGPIO_Pin*2);
		break;
	case PORTB:
		GPIOB->GPIO_PUPDR &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOB->GPIO_PUPDR |= (copy_GPIO_PUPD<<copy_eGPIO_Pin*2);
		break;
	case PORTC:
		GPIOC->GPIO_PUPDR &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOC->GPIO_PUPDR |= (copy_GPIO_PUPD<<copy_eGPIO_Pin*2);
		break;
	case PORTD:
		GPIOD->GPIO_PUPDR &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOD->GPIO_PUPDR |= (copy_GPIO_PUPD<<copy_eGPIO_Pin*2);
		break;
	case PORTE:
		GPIOE->GPIO_PUPDR &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOE->GPIO_PUPDR |= (copy_GPIO_PUPD<<copy_eGPIO_Pin*2);
		break;
	case PORTH:
		GPIOH->GPIO_PUPDR &= ~(0b11<<copy_eGPIO_Pin*2);
		GPIOH->GPIO_PUPDR |= (copy_GPIO_PUPD<<copy_eGPIO_Pin*2);
		break;
	}

}
uint32_t MGPIO_vReadInputPinValue(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin)
{

	switch (copy_eGPIO_Port)
	{
	case PORTA:
		return READ_BIT( GPIOA->GPIO_IDR, copy_eGPIO_Pin);
		break;
	case PORTB:
		return READ_BIT( GPIOB->GPIO_IDR, copy_eGPIO_Pin);
		break;
	case PORTC:
		return READ_BIT( GPIOC->GPIO_IDR, copy_eGPIO_Pin);
		break;
	case PORTD:
		return READ_BIT( GPIOD->GPIO_IDR, copy_eGPIO_Pin);
		break;
	case PORTE:
		return READ_BIT( GPIOE->GPIO_IDR, copy_eGPIO_Pin);
		break;
	case PORTH:
		return READ_BIT( GPIOH->GPIO_IDR, copy_eGPIO_Pin);
		break;
	}
	return 1;
}
void MGPIO_vSetOutputPinValue(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_ODR_t copy_GPIO_ODR)
{
	switch (copy_eGPIO_Port)
	{
	case PORTA:
		GPIOA->GPIO_ODR &= ~(0b1<<copy_eGPIO_Pin);
		GPIOA->GPIO_ODR |= (copy_GPIO_ODR<<copy_eGPIO_Pin);
		break;
	case PORTB:
		GPIOB->GPIO_ODR &= ~(0b1<<copy_eGPIO_Pin);
		GPIOB->GPIO_ODR |= (copy_GPIO_ODR<<copy_eGPIO_Pin);
		break;
	case PORTC:
		GPIOC->GPIO_ODR &= ~(0b1<<copy_eGPIO_Pin);
		GPIOC->GPIO_ODR |= (copy_GPIO_ODR<<copy_eGPIO_Pin);
		break;
	case PORTD:
		GPIOD->GPIO_ODR &= ~(0b1<<copy_eGPIO_Pin);
		GPIOD->GPIO_ODR |= (copy_GPIO_ODR<<copy_eGPIO_Pin);
		break;
	case PORTE:
		GPIOE->GPIO_ODR &= ~(0b1<<copy_eGPIO_Pin);
		GPIOE->GPIO_ODR |= (copy_GPIO_ODR<<copy_eGPIO_Pin);
		break;
	case PORTH:
		GPIOH->GPIO_ODR &= ~(0b1<<copy_eGPIO_Pin);
		GPIOH->GPIO_ODR |= (copy_GPIO_ODR<<copy_eGPIO_Pin);
		break;
	}

}

void MGPIO_vToggleOutputPinValue(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin)
{
	switch (copy_eGPIO_Port)
	{
	case PORTA:
		GPIOA->GPIO_ODR ^= (1<<copy_eGPIO_Pin);
		break;
	case PORTB:
		GPIOB->GPIO_ODR ^= (1<<copy_eGPIO_Pin);
		break;
	case PORTC:
		GPIOC->GPIO_ODR ^= (1<<copy_eGPIO_Pin);
		break;
	case PORTD:
		GPIOD->GPIO_ODR ^= (1<<copy_eGPIO_Pin);
		break;
	case PORTE:
		GPIOE->GPIO_ODR ^= (1<<copy_eGPIO_Pin);
		break;
	case PORTH:
		GPIOH->GPIO_ODR ^= (1<<copy_eGPIO_Pin);
		break;
	}

}


void MGPIO_vSetOutputPortValue(GPIO_Port_t copy_eGPIO_Port,uint8_t copy_u8number)
{
	switch (copy_eGPIO_Port)
	{
	case PORTA:
		MGPIO_vSetOutputPinValue(PORTA,PIN0,READ_BIT(copy_u8number,0));
		MGPIO_vSetOutputPinValue(PORTA,PIN1,READ_BIT(copy_u8number,1));
		MGPIO_vSetOutputPinValue(PORTA,PIN2,READ_BIT(copy_u8number,2));
		MGPIO_vSetOutputPinValue(PORTA,PIN3,READ_BIT(copy_u8number,3));
		MGPIO_vSetOutputPinValue(PORTA,PIN4,READ_BIT(copy_u8number,4));
		MGPIO_vSetOutputPinValue(PORTA,PIN5,READ_BIT(copy_u8number,5));
		MGPIO_vSetOutputPinValue(PORTA,PIN6,READ_BIT(copy_u8number,6));
		MGPIO_vSetOutputPinValue(PORTA,PIN7,READ_BIT(copy_u8number,7));
		break;
	case PORTB:
		MGPIO_vSetOutputPinValue(PORTB,PIN0,READ_BIT(copy_u8number,0));
		MGPIO_vSetOutputPinValue(PORTB,PIN1,READ_BIT(copy_u8number,1));
		MGPIO_vSetOutputPinValue(PORTB,PIN2,READ_BIT(copy_u8number,2));
		MGPIO_vSetOutputPinValue(PORTB,PIN3,READ_BIT(copy_u8number,3));
		MGPIO_vSetOutputPinValue(PORTB,PIN4,READ_BIT(copy_u8number,4));
		MGPIO_vSetOutputPinValue(PORTB,PIN5,READ_BIT(copy_u8number,5));
		MGPIO_vSetOutputPinValue(PORTB,PIN6,READ_BIT(copy_u8number,6));
		MGPIO_vSetOutputPinValue(PORTB,PIN7,READ_BIT(copy_u8number,7));
		break;
	case PORTC:
		MGPIO_vSetOutputPinValue(PORTC,PIN0,READ_BIT(copy_u8number,0));
		MGPIO_vSetOutputPinValue(PORTC,PIN1,READ_BIT(copy_u8number,1));
		MGPIO_vSetOutputPinValue(PORTC,PIN2,READ_BIT(copy_u8number,2));
		MGPIO_vSetOutputPinValue(PORTC,PIN3,READ_BIT(copy_u8number,3));
		MGPIO_vSetOutputPinValue(PORTC,PIN4,READ_BIT(copy_u8number,4));
		MGPIO_vSetOutputPinValue(PORTC,PIN5,READ_BIT(copy_u8number,5));
		MGPIO_vSetOutputPinValue(PORTC,PIN6,READ_BIT(copy_u8number,6));
		MGPIO_vSetOutputPinValue(PORTC,PIN7,READ_BIT(copy_u8number,7));
		break;
	case PORTD:
		MGPIO_vSetOutputPinValue(PORTD,PIN0,READ_BIT(copy_u8number,0));
		MGPIO_vSetOutputPinValue(PORTD,PIN1,READ_BIT(copy_u8number,1));
		MGPIO_vSetOutputPinValue(PORTD,PIN2,READ_BIT(copy_u8number,2));
		MGPIO_vSetOutputPinValue(PORTD,PIN3,READ_BIT(copy_u8number,3));
		MGPIO_vSetOutputPinValue(PORTD,PIN4,READ_BIT(copy_u8number,4));
		MGPIO_vSetOutputPinValue(PORTD,PIN5,READ_BIT(copy_u8number,5));
		MGPIO_vSetOutputPinValue(PORTD,PIN6,READ_BIT(copy_u8number,6));
		MGPIO_vSetOutputPinValue(PORTD,PIN7,READ_BIT(copy_u8number,7));
		break;
	case PORTE:
		MGPIO_vSetOutputPinValue(PORTE,PIN0,READ_BIT(copy_u8number,0));
		MGPIO_vSetOutputPinValue(PORTE,PIN1,READ_BIT(copy_u8number,1));
		MGPIO_vSetOutputPinValue(PORTE,PIN2,READ_BIT(copy_u8number,2));
		MGPIO_vSetOutputPinValue(PORTE,PIN3,READ_BIT(copy_u8number,3));
		MGPIO_vSetOutputPinValue(PORTE,PIN4,READ_BIT(copy_u8number,4));
		MGPIO_vSetOutputPinValue(PORTE,PIN5,READ_BIT(copy_u8number,5));
		MGPIO_vSetOutputPinValue(PORTE,PIN6,READ_BIT(copy_u8number,6));
		MGPIO_vSetOutputPinValue(PORTE,PIN7,READ_BIT(copy_u8number,7));
		break;
	case PORTH:
		MGPIO_vSetOutputPinValue(PORTH,PIN0,READ_BIT(copy_u8number,0));
		MGPIO_vSetOutputPinValue(PORTH,PIN1,READ_BIT(copy_u8number,1));
		MGPIO_vSetOutputPinValue(PORTH,PIN2,READ_BIT(copy_u8number,2));
		MGPIO_vSetOutputPinValue(PORTH,PIN3,READ_BIT(copy_u8number,3));
		MGPIO_vSetOutputPinValue(PORTH,PIN4,READ_BIT(copy_u8number,4));
		MGPIO_vSetOutputPinValue(PORTH,PIN5,READ_BIT(copy_u8number,5));
		MGPIO_vSetOutputPinValue(PORTH,PIN6,READ_BIT(copy_u8number,6));
		MGPIO_vSetOutputPinValue(PORTH,PIN7,READ_BIT(copy_u8number,7));
		break;
	}

}

void MGPIO_vSetOutputPinValueBSR(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_BS_t copy_GPIO_BS)
{
	switch (copy_eGPIO_Port)
	{
	case PORTA:
		if (copy_GPIO_BS == SET)
		{
			GPIOA->GPIO_BSRR |= (1<<copy_eGPIO_Pin);
		}
		else if(copy_GPIO_BS == RESET)
		{
			GPIOA->GPIO_BSRR |= (1<<(copy_eGPIO_Pin+16));
		}
		break;
	case PORTB:
		if (copy_GPIO_BS == SET)
		{
			GPIOB->GPIO_BSRR |= (1<<copy_eGPIO_Pin);
		}
		else if(copy_GPIO_BS == RESET)
		{
			GPIOB->GPIO_BSRR |= (1<<(copy_eGPIO_Pin+16));
		}		break;
	case PORTC:
		if (copy_GPIO_BS == SET)
		{
			GPIOB->GPIO_BSRR |= (1<<copy_eGPIO_Pin);
		}
		else if(copy_GPIO_BS == RESET)
		{
			GPIOB->GPIO_BSRR |= (1<<(copy_eGPIO_Pin+16));
		}		break;
	case PORTD:
		if (copy_GPIO_BS == SET)
		{
			GPIOD->GPIO_BSRR |= (1<<copy_eGPIO_Pin);
		}
		else if(copy_GPIO_BS == RESET)
		{
			GPIOD->GPIO_BSRR |= (1<<(copy_eGPIO_Pin+16));
		}		break;
	case PORTE:
		if (copy_GPIO_BS == SET)
		{
			GPIOE->GPIO_BSRR |= (1<<copy_eGPIO_Pin);
		}
		else if(copy_GPIO_BS == RESET)
		{
			GPIOE->GPIO_BSRR |= (1<<(copy_eGPIO_Pin+16));
		}		break;
	case PORTH:
		if (copy_GPIO_BS == SET)
		{
			GPIOH->GPIO_BSRR |= (1<<copy_eGPIO_Pin);
		}
		else if(copy_GPIO_BS == RESET)
		{
			GPIOH->GPIO_BSRR |= (1<<(copy_eGPIO_Pin+16));
		}		break;
	}

}
void MGPIO_vSetPinLockSTS(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_LCK_t copy_GPIO_LCK)
{
	switch (copy_eGPIO_Port)
	{
	case PORTA:
		GPIOA->GPIO_LCKR &= ~(0b1<<copy_eGPIO_Pin);
		GPIOA->GPIO_LCKR |= (copy_GPIO_LCK<<copy_eGPIO_Pin);
		break;
	case PORTB:
		GPIOB->GPIO_LCKR &= ~(0b1<<copy_eGPIO_Pin);
		GPIOB->GPIO_LCKR |= (copy_GPIO_LCK<<copy_eGPIO_Pin);
		break;
	case PORTC:
		GPIOC->GPIO_LCKR &= ~(0b1<<copy_eGPIO_Pin);
		GPIOC->GPIO_LCKR |= (copy_GPIO_LCK<<copy_eGPIO_Pin);
		break;
	case PORTD:
		GPIOD->GPIO_LCKR &= ~(0b1<<copy_eGPIO_Pin);
		GPIOD->GPIO_LCKR |= (copy_GPIO_LCK<<copy_eGPIO_Pin);
		break;
	case PORTE:
		GPIOE->GPIO_LCKR &= ~(0b1<<copy_eGPIO_Pin);
		GPIOE->GPIO_LCKR |= (copy_GPIO_LCK<<copy_eGPIO_Pin);
		break;
	case PORTH:
		GPIOH->GPIO_LCKR &= ~(0b1<<copy_eGPIO_Pin);
		GPIOH->GPIO_LCKR |= (copy_GPIO_LCK<<copy_eGPIO_Pin);
		break;
	}

}
void MGPIO_vSetPinAlternativeFunction(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_AF_t copy_GPIO_AF)
{
	switch (copy_eGPIO_Port)
	{
	case PORTA:
		GPIOA->GPIO_AFR[copy_eGPIO_Pin/8] &= ~(0b1111	   <<(copy_eGPIO_Pin %8)*4);
		GPIOA->GPIO_AFR[copy_eGPIO_Pin/8] |= (copy_GPIO_AF <<(copy_eGPIO_Pin %8)*4);

		break;
	case PORTB:
		GPIOB->GPIO_AFR[copy_eGPIO_Pin/8] &= ~(0b1111	   <<(copy_eGPIO_Pin %8)*4);
		GPIOB->GPIO_AFR[copy_eGPIO_Pin/8] |= (copy_GPIO_AF <<(copy_eGPIO_Pin %8)*4);
		break;
	case PORTC:
		GPIOC->GPIO_AFR[copy_eGPIO_Pin/8] &= ~(0b1111	   <<(copy_eGPIO_Pin %8)*4);
		GPIOC->GPIO_AFR[copy_eGPIO_Pin/8] |= (copy_GPIO_AF <<(copy_eGPIO_Pin %8)*4);
		break;
	case PORTD:
		GPIOD->GPIO_AFR[copy_eGPIO_Pin/8] &= ~(0b1111	   <<(copy_eGPIO_Pin %8)*4);
		GPIOD->GPIO_AFR[copy_eGPIO_Pin/8] |= (copy_GPIO_AF <<(copy_eGPIO_Pin %8)*4);
		break;
	case PORTE:
		GPIOE->GPIO_AFR[copy_eGPIO_Pin/8] &= ~(0b1111	   <<(copy_eGPIO_Pin %8)*4);
		GPIOE->GPIO_AFR[copy_eGPIO_Pin/8] |= (copy_GPIO_AF <<(copy_eGPIO_Pin %8)*4);
		break;
	case PORTH:
		GPIOH->GPIO_AFR[copy_eGPIO_Pin/8] &= ~(0b1111	   <<(copy_eGPIO_Pin %8)*4);
		GPIOH->GPIO_AFR[copy_eGPIO_Pin/8] |= (copy_GPIO_AF <<(copy_eGPIO_Pin %8)*4);
		break;
	}


}

