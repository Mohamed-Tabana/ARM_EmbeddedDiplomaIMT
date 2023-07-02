/*
 * Kernel_Interface.h
 *
 *  Created on: Apr 26, 2023
 *      Author: ALTAWKEL
 */

#ifndef KERNEL_KERNEL_INTERFACE_H_
#define KERNEL_KERNEL_INTERFACE_H_

#include "Kernel_Private.h"
#include "Kernel_CFG.h"

void Kernel_vInit(uint32_t copy_u32SchedulerTime);
void Kernel_Scheduler();
uint8_t Kernel_vCreateTask(uint8_t copy_u8Priority,Kernel_PFUNC_t copy_pTask_Handler,uint32_t Task_Periodicity,uint32_t Task_FDelay);
void Kernel_vPauseTask(uint8_t copy_u8Priority);
void Kernel_vResumeTask(uint8_t copy_u8Priority);
void Kernel_vDeleteTask(uint8_t copy_u8Priority);


#endif /* KERNEL_KERNEL_INTERFACE_H_ */
