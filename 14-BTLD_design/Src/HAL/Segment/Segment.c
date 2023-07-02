/*
 * Segment.c
 *
 *  Created on: Apr 22, 2023
 *      Author: TABANA
 */

#include "stdio.h"
#include "GPIO_Interface.h"
#include "Segment.h"

GPIO_CFG_t SSD_PIN0 ={.PIN_Type=OUTPUT,.PIN_Port=PORTA,.PIN_Number=PIN0};
GPIO_CFG_t SSD_PIN1 ={.PIN_Type=OUTPUT,.PIN_Port=PORTA,.PIN_Number=PIN1};
GPIO_CFG_t SSD_PIN2 ={.PIN_Type=OUTPUT,.PIN_Port=PORTA,.PIN_Number=PIN2};
GPIO_CFG_t SSD_PIN3 ={.PIN_Type=OUTPUT,.PIN_Port=PORTA,.PIN_Number=PIN3};
GPIO_CFG_t SSD_PIN4 ={.PIN_Type=OUTPUT,.PIN_Port=PORTA,.PIN_Number=PIN4};
GPIO_CFG_t SSD_PIN5 ={.PIN_Type=OUTPUT,.PIN_Port=PORTA,.PIN_Number=PIN5};
GPIO_CFG_t SSD_PIN6 ={.PIN_Type=OUTPUT,.PIN_Port=PORTA,.PIN_Number=PIN6};

GPIO_CFG_t SSD_s0 ={.PIN_Type=OUTPUT,.PIN_Port=PORTB,.PIN_Number=PIN0};
GPIO_CFG_t SSD_s1 ={.PIN_Type=OUTPUT,.PIN_Port=PORTB,.PIN_Number=PIN1};

GPIO_CFG_t SSD_p8 ={.PIN_Type=OUTPUT,.PIN_Port=PORTA,.PIN_Number=PIN8};


void SSD_Init()
{
	MGPIO_Init(&SSD_PIN0);
	MGPIO_Init(&SSD_PIN1);
	MGPIO_Init(&SSD_PIN2);
	MGPIO_Init(&SSD_PIN3);
	MGPIO_Init(&SSD_PIN4);
	MGPIO_Init(&SSD_PIN5);
	MGPIO_Init(&SSD_PIN6);

	MGPIO_Init(&SSD_s0);
	MGPIO_Init(&SSD_s1);

	MGPIO_Init(&SSD_p8);

}
void SSD_Print_MLX(uint32_t copy_u8Number, SSD_Digit copy_eSSD_Digit)
{
	char seg[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67};
	uint32_t D0=copy_u8Number%10;
	uint32_t D1=copy_u8Number/10;

	switch(copy_eSSD_Digit)
	{
	case units:
		MGPIO_vSetOutputPinValueBSR(SSD_s1.PIN_Port,SSD_s1.PIN_Number,1);
		MGPIO_vSetOutputPinValueBSR(SSD_s0.PIN_Port,SSD_s0.PIN_Number,0);

		MGPIO_vSetOutputPinValueBSR(SSD_PIN0.PIN_Port,SSD_PIN0.PIN_Number,READ_BIT(seg[D0],0));
		MGPIO_vSetOutputPinValueBSR(SSD_PIN1.PIN_Port,SSD_PIN1.PIN_Number,READ_BIT(seg[D0],1));
		MGPIO_vSetOutputPinValueBSR(SSD_PIN2.PIN_Port,SSD_PIN2.PIN_Number,READ_BIT(seg[D0],2));
		MGPIO_vSetOutputPinValueBSR(SSD_PIN3.PIN_Port,SSD_PIN3.PIN_Number,READ_BIT(seg[D0],3));
		MGPIO_vSetOutputPinValueBSR(SSD_PIN4.PIN_Port,SSD_PIN4.PIN_Number,READ_BIT(seg[D0],4));
		MGPIO_vSetOutputPinValueBSR(SSD_PIN5.PIN_Port,SSD_PIN5.PIN_Number,READ_BIT(seg[D0],5));
		MGPIO_vSetOutputPinValueBSR(SSD_PIN6.PIN_Port,SSD_PIN6.PIN_Number,READ_BIT(seg[D0],6));
		break;
	case tens:
		MGPIO_vSetOutputPinValueBSR(SSD_s0.PIN_Port,SSD_s0.PIN_Number,1);
		MGPIO_vSetOutputPinValueBSR(SSD_s1.PIN_Port,SSD_s1.PIN_Number,0);

		MGPIO_vSetOutputPinValueBSR(SSD_PIN0.PIN_Port,SSD_PIN0.PIN_Number,READ_BIT(seg[D1],0));
		MGPIO_vSetOutputPinValueBSR(SSD_PIN1.PIN_Port,SSD_PIN1.PIN_Number,READ_BIT(seg[D1],1));
		MGPIO_vSetOutputPinValueBSR(SSD_PIN2.PIN_Port,SSD_PIN2.PIN_Number,READ_BIT(seg[D1],2));
		MGPIO_vSetOutputPinValueBSR(SSD_PIN3.PIN_Port,SSD_PIN3.PIN_Number,READ_BIT(seg[D1],3));
		MGPIO_vSetOutputPinValueBSR(SSD_PIN4.PIN_Port,SSD_PIN4.PIN_Number,READ_BIT(seg[D1],4));
		MGPIO_vSetOutputPinValueBSR(SSD_PIN5.PIN_Port,SSD_PIN5.PIN_Number,READ_BIT(seg[D1],5));
		MGPIO_vSetOutputPinValueBSR(SSD_PIN6.PIN_Port,SSD_PIN6.PIN_Number,READ_BIT(seg[D1],6));
		break;
	}
}


void Print_NOMLX(uint32_t copy_u8Number)
{
	char seg[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67};
	uint32_t D0=copy_u8Number%10;
	uint32_t D1=copy_u8Number/10;

	MGPIO_vSetOutputPinValueBSR(PORTA,PIN1,0);
	MGPIO_vSetOutputPinValueBSR(PORTB,PIN0,0);


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


