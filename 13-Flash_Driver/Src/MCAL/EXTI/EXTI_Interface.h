/*
 *  EXTI_Interface.h
 *
 *  Created on: Apr 23, 2023
 *      Author: ALTAWKEL
 */

#ifndef MCAL_EXTI_EXTI_INTERFACE_H_
#define MCAL_EXTI_EXTI_INTERFACE_H_

#include "EXTI_Private.h"
#include "Utils.h"

typedef void (*EXTI_Callback_t)(void);

void MEXTI_vSetInterruptMask(EXTI_Line_t copy_eEXTI_Line,EXTI_Masking_t copy_eEXTI_Masking);
void MEXTI_vSetRisingTrigger(EXTI_Line_t copy_eEXTI_Line);
void MEXTI_vSetFallingTrigger(EXTI_Line_t copy_eEXTI_Line);
void MEXTI_vSetSoftwareTrigger(EXTI_Line_t copy_eEXTI_Line);
void MEXTI_vClearInterruptTrigger(EXTI_Line_t copy_eEXTI_Line);
void MEXTI_vSetEXTI_LineOnPort(EXTI_Line_t copy_eEXTI_Line,EXTI_EXTIPortCFG_t copy_eEXTI_EXTIPortCFG);
void MEXTI_vSetCallBack(EXTI_Line_t copy_eEXTI_Line,EXTI_Callback_t copy_EXTI_Callback);


#endif /* MCAL_EXTI_EXTI_INTERFACE_H_ */
