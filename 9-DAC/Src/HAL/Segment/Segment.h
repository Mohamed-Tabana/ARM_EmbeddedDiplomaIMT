/*
 * Segment.h
 *
 *  Created on: Apr 22, 2023
 *      Author: ALTAWKEL
 */

#ifndef HAL_SEGMENT_H_
#define HAL_SEGMENT_H_

typedef enum
{
	units,
	tens
} SSD_Digit;
void SSD_Init();
void SSD_Print_MLX(uint32_t copy_u8Number, SSD_Digit copy_eSSD_Digit);
void Print_NOMLX(uint32_t copy_u8Number);

#endif /* HAL_SEGMENT_H_ */
