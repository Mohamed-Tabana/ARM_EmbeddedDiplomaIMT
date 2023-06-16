/*
 * Kernel_Private.h
 *
 *  Created on: Apr 26, 2023
 *      Author: ALTAWKEL
 */

#ifndef KERNEL_KERNEL_PRIVATE_H_
#define KERNEL_KERNEL_PRIVATE_H_

#include "stdio.h"
typedef void (*Kernel_PFUNC_t)(void);

typedef enum
{
	Task_Paused,
	Task_Resumed,
}Kernel_Task_Status_t;

enum
{
	OK,
	NOK_Priority_Reserved,
	NOK_Task_Empty,
};

typedef struct{
	Kernel_Task_Status_t Task_Status;
	uint32_t Task_Periodicity;
	Kernel_PFUNC_t Task_Handler;
	uint32_t Task_FDelay;

}Kernel_Task_t;

#endif /* KERNEL_KERNEL_PRIVATE_H_ */
