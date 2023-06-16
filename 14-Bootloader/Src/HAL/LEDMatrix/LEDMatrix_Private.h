/*
 * LEDMatrix_Private.h
 *
 *  Created on: Apr 25, 2023
 *      Author: ALTAWKEL
 */

#ifndef HAL_LEDMATRIX_LEDMATRIX_PRIVATE_H_
#define HAL_LEDMATRIX_LEDMATRIX_PRIVATE_H_
#include "Utils.h"
#include "stdio.h"

#define NO_COLS 8
#define NO_ROWS 8


extern GPIO_CFG_t rows[NO_ROWS];
extern GPIO_CFG_t cols[NO_COLS];

#endif /* HAL_LEDMATRIX_LEDMATRIX_PRIVATE_H_ */
