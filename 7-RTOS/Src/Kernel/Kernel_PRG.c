/*
 * Kernel_PRG.c
 *
 *  Created on: Apr 26, 2023
 *      Author: TABANA
 */

#include "Kernel_Interface.h"
#include "SysTick_Interface.h"
Kernel_Task_t SystemTasks[NUMBER_OF_TASKS]={0};

void Kernel_vInit(uint32_t copy_u32SchedulerTime)
{
	MSTK_vSetIntervalPeriodic(copy_u32SchedulerTime,Kernel_Scheduler);

}
void Kernel_Scheduler()
{
	for(uint8_t copy_u8SystemTask=0;copy_u8SystemTask<NUMBER_OF_TASKS;copy_u8SystemTask++)
	{
		if(SystemTasks[copy_u8SystemTask].Task_Handler != 0)
		{
			if(SystemTasks[copy_u8SystemTask].Task_Status == Task_Resumed)
			{
				if(SystemTasks[copy_u8SystemTask].Task_FDelay==0)
				{
					SystemTasks[copy_u8SystemTask].Task_Handler();
					SystemTasks[copy_u8SystemTask].Task_FDelay = SystemTasks[copy_u8SystemTask].Task_Periodicity-1;

				}
				else
				{
					SystemTasks[copy_u8SystemTask].Task_FDelay--;
				}

			}
		}

	}
}
uint8_t Kernel_vCreateTask(uint8_t copy_u8Priority,Kernel_PFUNC_t copy_pTask_Handler,uint32_t Task_Periodicity,uint32_t Task_FDelay)
{
	uint8_t Local_u8ErrorState =OK;

	if( copy_pTask_Handler != 0 )
	{

		if(SystemTasks[copy_u8Priority].Task_Handler == 0)
		{
			SystemTasks[copy_u8Priority].Task_FDelay= Task_FDelay;
			SystemTasks[copy_u8Priority].Task_Handler=copy_pTask_Handler;
			SystemTasks[copy_u8Priority].Task_Periodicity=Task_Periodicity;
			SystemTasks[copy_u8Priority].Task_Status=Task_Resumed;

		}
		else
		{
			// priority reserved
			Local_u8ErrorState =NOK_Priority_Reserved;
		}

	}
	else
	{
		// task empty
		Local_u8ErrorState =NOK_Task_Empty;

	}
	return Local_u8ErrorState;
}
void Kernel_vPauseTask(uint8_t copy_u8Priority)
{
	SystemTasks[copy_u8Priority].Task_Status=Task_Paused;

}
void Kernel_vResumeTask(uint8_t copy_u8Priority)
{
	SystemTasks[copy_u8Priority].Task_Status=Task_Resumed;

}
void Kernel_vDeleteTask(uint8_t copy_u8Priority)
{
	SystemTasks[copy_u8Priority].Task_Handler=0;

}
