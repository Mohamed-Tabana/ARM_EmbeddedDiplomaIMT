/*
 * SysTick_Interface.h
 *
 *  Created on: Apr 24, 2023
 *      Author: ALTAWKEL
 */
#include "SysTick_Private.h"


#ifndef MCAL_SYSTICK_SYSTICK_INTERFACE_H_
#define MCAL_SYSTICK_SYSTICK_INTERFACE_H_

typedef void (*STK_Callback_t)(void);


void MSTK_vInit();

void MSTK_vStartTimer(uint32_t copy_u32Ticks);
void MSTK_vStopTimer();

void MSTK_vSetBusyWait(uint32_t copy_u32Ticks);
void MSTK_vSetBusyWaitms(uint32_t copy_u32Ticks);
void MSTK_vSetBusyWaitus(uint32_t copy_u32Ticks);
void MSTK_vSetIntervalSingle(uint32_t copy_u32Ticks,STK_Callback_t copy_pSTK_Callback);
void MSTK_vSetIntervalPeriodic(uint32_t copy_u32Ticks,STK_Callback_t copy_pSTK_Callback);
void MSTK_vSetCallBack(STK_Callback_t copy_pSTK_Callback);

uint32_t MSTK_vGetElapsedTime();
uint32_t MSTK_vGetRemainingTime();



#endif /* MCAL_SYSTICK_SYSTICK_INTERFACE_H_ */
