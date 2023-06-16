/*
 * RCC_interface.h
 *
 *  Created on: APR 17, 2023
 *      Author: TABANA
 */

#ifndef RCC_Interface_H
#define RCC_Interface_H

#include "RCC_Private.h"
#include "Utils.h"




void RCC_SetCLKSTS(CLKtype_t copy_tCLKtype, CLKStatus_t copy_tCLKStatus);
void RCC_SetSYSCLK(CLKtype_t copy_tCLKtype);
/*
 * kljlkj
 */
void RCC_HSECONFIG(HSEDIV_t copy_tHSEDIV);
void RCC_SetBusesPrescaler(AHB_Prescaler_t copy_eAHB_Prescaler, APB_Prescaler_t copy_eAPB1_Prescaler, APB_Prescaler_t copy_eAPB2_Prescaler);
void RCC_PLLCONFIG(uint8_t copy_u8PLLM, uint8_t copy_u8PLLN, uint8_t copy_u8PLLP, uint8_t copy_u8PLLQ);

void RCC_HSEBYP(bypassedsSTS_t copy_ebypassedsSTS);
void RCC_CSSCFG(Clock_Detector_t copy_eClock_detector);


void RCC_AHB1EnableCLK(PeripheralAHB1_t peripheral);
void RCC_AHB1DisableCLK(PeripheralAHB1_t peripheral);

void RCC_AHB1LPEnableCLK(PeripheralAHBLP1_t peripheral);
void RCC_AHB1LPDisableCLK(PeripheralAHBLP1_t peripheral);

void RCC_APB1EnableCLK(PeripheralAPB1_t peripheral);
void RCC_APB1DisableCLK(PeripheralAPB1_t peripheral);
void RCC_APB2EnableCLK(PeripheralAPB2_t peripheral);
void RCC_APB2DisableCLK(PeripheralAPB2_t peripheral);

#endif /* RCC_Interface_H */
