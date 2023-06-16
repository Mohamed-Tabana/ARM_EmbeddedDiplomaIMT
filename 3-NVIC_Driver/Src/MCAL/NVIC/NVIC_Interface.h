/*
 * NVIC_Interface.h
 *
 *  Created on: Apr 23, 2023
 *      Author: ALTAWKEL
 */

#ifndef MCAL_NVIC_NVIC_INTERFACE_H_
#define MCAL_NVIC_NVIC_INTERFACE_H_

#include "NVIC_Private.h"
#include "NVIC_CFG.h"

void NVIC_vSetInterruptEnable(Interrupt_t copy_eInterrupt);
void NVIC_vClearInterruptEnable(Interrupt_t copy_eInterrupt);
void NVIC_vSetInterruptPending(Interrupt_t copy_eInterrupt);
void NVIC_vClearInterruptPending(Interrupt_t copy_eInterrupt);
Interrupt_t NVIC_eReadInterruptActive();
void NVIC_vSetInterruptPriorityCFG(PriorityCFG_t copy_ePriorityCFG);
void NVIC_vSetInterruptPriority(Interrupt_t copy_eInterrupt, uint8_t copy_u8GroupPriority,uint8_t copy_u8SubPriority);




#endif /* MCAL_NVIC_NVIC_INTERFACE_H_ */
