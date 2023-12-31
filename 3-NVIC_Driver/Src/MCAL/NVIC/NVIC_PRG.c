/*
 * NVIC_PRG.c
 *
 *  Created on: Apr 23, 2023
 *      Author: ALTAWKEL
 */

#include "NVIC_Interface.h"
uint32_t globalStatic_u32GroupCFG;
void NVIC_vSetInterruptEnable(Interrupt_t copy_eInterrupt)
{
	NVIC->NVIC_ISER[copy_eInterrupt / 32]=1<<(copy_eInterrupt % 32);
}
void NVIC_vClearInterruptEnable(Interrupt_t copy_eInterrupt)
{
	NVIC->NVIC_ICER[copy_eInterrupt / 32]=1<<(copy_eInterrupt % 32);

}
void NVIC_vSetInterruptPending(Interrupt_t copy_eInterrupt)
{
	NVIC->NVIC_ISPR[copy_eInterrupt / 32]=1<<(copy_eInterrupt % 32);

}
void NVIC_vClearInterruptPending(Interrupt_t copy_eInterrupt)
{
	NVIC->NVIC_ICPR[copy_eInterrupt / 32]=1<<(copy_eInterrupt % 32);

}
Interrupt_t NVIC_eReadInterruptActive()
{
	return READ_BIT(NVIC->NVIC_ICPR[copy_eInterrupt / 32],(copy_eInterrupt % 32));
}
void NVIC_vSetInterruptPriorityCFG(PriorityCFG_t copy_ePriorityCFG)
{
	globalStatic_u32GroupCFG = 0x05FA0000 | (Copy_u8PriorityOption << 8);
	SCB->AIRCR=globalStatic_u32GroupCFG;
}
void NVIC_vSetInterruptPriority(Interrupt_t copy_eInterrupt, uint8_t copy_u8GroupPriority,uint8_t copy_u8SubPriority)
{
	Local_u32GSPriority = (copy_u8SubPriority | copy_u8GroupPriority<<((globalStatic_u32GroupConf - 0x05FA0300) / 256));

	if (copy_eInterrupt<0)
	{
		SCB->SHP[copy_eInterrupt+12]=Local_u32GSPriority<<4;
	}
	else if (copy_eInterrupt>=0)
	{
		NVIC->NVIC_IPR[copy_eInterrupt]=Local_u32GSPriority<<4;

	}

}
