/*
 * IR_Interface.h
 *
 *  Created on: May 5, 2023
 *      Author: ALTAWKEL
 */

#ifndef HAL_IR_IR_INTERFACE_H_
#define HAL_IR_IR_INTERFACE_H_

#include "SysTick_Interface.h"
#include "EXTI_Interface.h"

void IR_Init();
uint8_t IR_GetPressedKey();


#endif /* HAL_IR_IR_INTERFACE_H_ */
