/*
 * Segment.c
 *
 *  Created on: Apr 22, 2023
 *      Author: ALTAWKEL
 */

#include "stdio.h"
#include "GPIO_Interface.h"
void Print_MLX(uint32_t copy_u8Number)
{
	char seg[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67};
	uint32_t D0=copy_u8Number%10;
	uint32_t D1=copy_u8Number/10;

	MGPIO_vSetOutputPinValueBSR(PORTA,PIN7,0);
	MGPIO_vSetOutputPinValueBSR(PORTB,PIN7,0);


	MGPIO_vSetOutputPinValueBSR(PORTA,PIN0,READ_BIT(seg[D1],0));
	MGPIO_vSetOutputPinValueBSR(PORTA,PIN1,READ_BIT(seg[D1],1));
	MGPIO_vSetOutputPinValueBSR(PORTA,PIN2,READ_BIT(seg[D1],2));
	MGPIO_vSetOutputPinValueBSR(PORTA,PIN3,READ_BIT(seg[D1],3));
	MGPIO_vSetOutputPinValueBSR(PORTA,PIN4,READ_BIT(seg[D1],4));
	MGPIO_vSetOutputPinValueBSR(PORTA,PIN5,READ_BIT(seg[D1],5));
	MGPIO_vSetOutputPinValueBSR(PORTA,PIN6,READ_BIT(seg[D1],6));
//	GPIOA->GPIO_ODR &= ~(0b1111111<<0);
//	GPIOA->GPIO_ODR |= (seg[D1]<<0);


	MGPIO_vSetOutputPinValueBSR(PORTB,PIN0,READ_BIT(seg[D0],0));
	MGPIO_vSetOutputPinValueBSR(PORTB,PIN1,READ_BIT(seg[D0],1));
	MGPIO_vSetOutputPinValueBSR(PORTB,PIN2,READ_BIT(seg[D0],2));
	MGPIO_vSetOutputPinValueBSR(PORTB,PIN3,READ_BIT(seg[D0],3));
	MGPIO_vSetOutputPinValueBSR(PORTB,PIN4,READ_BIT(seg[D0],4));
	MGPIO_vSetOutputPinValueBSR(PORTB,PIN5,READ_BIT(seg[D0],5));
	MGPIO_vSetOutputPinValueBSR(PORTB,PIN6,READ_BIT(seg[D0],6));

//	GPIOB->GPIO_ODR &= ~(0b1111111<<0);
//	GPIOB->GPIO_ODR |= (seg[D0]<<0);



}
