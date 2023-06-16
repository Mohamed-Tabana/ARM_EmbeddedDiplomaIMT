/*
 * TFT_int.h
 *
 *  Created on: Jun 16, 2023
 *      Author: ALTAWKEL
 */

#ifndef HAL_TFT_TFT_INT_H_
#define HAL_TFT_TFT_INT_H_
#include "GPIO_Interface.h"
#include "TFT_prv.h"

extern GPIO_CFG_t Reset_Pin;
extern GPIO_CFG_t Control_Pin;

void TFT_vWriteCommand(uint8_t copy_u8Command);
void TFT_vWriteData(uint8_t copy_u8Data);
void TFT_vTFTSequense();
void TFT_vInit();
void TFT_vDisplay(uint16_t* copy_pu16ArrayImage);

#endif /* HAL_TFT_TFT_INT_H_ */
