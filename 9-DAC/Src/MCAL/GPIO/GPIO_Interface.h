/*
 * GPIO_Interface.h
 *
 *  Created on: Apr 21, 2023
 *      Author: ALTAWKEL
 */

#ifndef MCAL_GPIO_GPIO_INTERFACE_H_
#define MCAL_GPIO_GPIO_INTERFACE_H_

#include "stdio.h"
#include "Utils.h"
#include "GPIO_Private.h"
#include "GPIO_CFG.h"

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
void MGPIO_Init(GPIO_pCFG_t copy_GPIO_pCFG);

void MGPIO_vSetPinType(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_PinType_t copy_eGPIO_PinType);
void MGPIO_vSetOutputPinType(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_OType_t copy_GPIO_OType);
void MGPIO_vSetOutputPinSpeed(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_OSpeed_t copy_GPIO_OSpeed);
void MGPIO_vSetOutputPinValue(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_ODR_t copy_GPIO_ODR);
void MGPIO_vSetOutputPinValueBSR(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_BS_t copy_GPIO_BS);
void MGPIO_vSetOutputPortValue(GPIO_Port_t copy_eGPIO_Port,uint8_t copy_u8number);

void MGPIO_vSetInputPinPullUpDown(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_PUPD_t copy_GPIO_PUPD);
uint32_t MGPIO_vReadInputPinValue(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin);

void MGPIO_vSetPinLockSTS(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_LCK_t copy_GPIO_LCK);
void MGPIO_vSetPinAlternativeFunction(GPIO_Port_t copy_eGPIO_Port,GPIO_Pin_t copy_eGPIO_Pin,GPIO_AF_t copy_GPIO_AF);



#endif /* MCAL_GPIO_GPIO_INTERFACE_H_ */
