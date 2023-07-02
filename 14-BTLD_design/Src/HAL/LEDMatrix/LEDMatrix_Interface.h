/*
 * LEDMatrix_Interface.h
 *
 *  Created on: Apr 25, 2023
 *      Author: ALTAWKEL
 */

#ifndef HAL_LEDMATRIX_LEDMATRIX_INTERFACE_H_
#define HAL_LEDMATRIX_LEDMATRIX_INTERFACE_H_

#include "LEDMatrix_Private.h"


void LEDMTX_vInit();
void LEDMTX_vDisplayFrame  (uint8_t* frame,uint32_t frame_delay);
void LEDMTX_vDisplayMatrix (uint8_t matrix[][NO_COLS],uint32_t matrix_delay);



#endif /* HAL_LEDMATRIX_LEDMATRIX_INTERFACE_H_ */
