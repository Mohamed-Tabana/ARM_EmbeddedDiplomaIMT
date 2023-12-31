/*
 * GPIO_PRG.c
 *
 *  Created on: Apr 21, 2023
 *      Author: TABANA
 */


#include "GPIO_Interface.h"

void MGPIO_Init(GPIO_pCFG_t copy_GPIO_pCFG)
{
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
		if (copy_eGPIO_Pin<8)
		{
			GPIOA->GPIO_AFRL &= ~(0b1111<<copy_eGPIO_Pin);
			GPIOA->GPIO_AFRL |= (copy_GPIO_AF<<copy_eGPIO_Pin);
		}
		else
		{
			GPIOA->GPIO_AFRH &= ~(0b1111<<copy_eGPIO_Pin);
			GPIOA->GPIO_AFRH |= (copy_GPIO_AF<<copy_eGPIO_Pin);
		}
		break;
	case PORTB:
		if (copy_eGPIO_Pin<8)
		{
			GPIOB->GPIO_AFRL &= ~(0b1111<<copy_eGPIO_Pin);
			GPIOB->GPIO_AFRL |= (copy_GPIO_AF<<copy_eGPIO_Pin);
		}
		else
		{
			GPIOB->GPIO_AFRH &= ~(0b1111<<copy_eGPIO_Pin);
			GPIOB->GPIO_AFRH |= (copy_GPIO_AF<<copy_eGPIO_Pin);
		}
		break;
	case PORTC:
		if (copy_eGPIO_Pin<8)
		{
			GPIOC->GPIO_AFRL &= ~(0b1111<<copy_eGPIO_Pin);
			GPIOC->GPIO_AFRL |= (copy_GPIO_AF<<copy_eGPIO_Pin);
		}
		else
		{
			GPIOC->GPIO_AFRH &= ~(0b1111<<copy_eGPIO_Pin);
			GPIOC->GPIO_AFRH |= (copy_GPIO_AF<<copy_eGPIO_Pin);
		}
		break;
	case PORTD:
		if (copy_eGPIO_Pin<8)
		{
			GPIOD->GPIO_AFRL &= ~(0b1111<<copy_eGPIO_Pin);
			GPIOD->GPIO_AFRL |= (copy_GPIO_AF<<copy_eGPIO_Pin);
		}
		else
		{
			GPIOD->GPIO_AFRH &= ~(0b1111<<copy_eGPIO_Pin);
			GPIOD->GPIO_AFRH |= (copy_GPIO_AF<<copy_eGPIO_Pin);
		}
		break;
	case PORTE:
		if (copy_eGPIO_Pin<8)
		{
			GPIOE->GPIO_AFRL &= ~(0b1111<<copy_eGPIO_Pin);
			GPIOE->GPIO_AFRL |= (copy_GPIO_AF<<copy_eGPIO_Pin);
		}
		else
		{
			GPIOE->GPIO_AFRH &= ~(0b1111<<copy_eGPIO_Pin);
			GPIOE->GPIO_AFRH |= (copy_GPIO_AF<<copy_eGPIO_Pin);
		}
		break;
	case PORTH:
		if (copy_eGPIO_Pin<8)
		{
			GPIOH->GPIO_AFRL &= ~(0b1111<<copy_eGPIO_Pin);
			GPIOH->GPIO_AFRL |= (copy_GPIO_AF<<copy_eGPIO_Pin);
		}
		else
		{
			GPIOH->GPIO_AFRH &= ~(0b1111<<copy_eGPIO_Pin);
			GPIOH->GPIO_AFRH |= (copy_GPIO_AF<<copy_eGPIO_Pin);
		}
		break;
	}

}

