/*
 * HexParser_Interface.h
 *
 *  Created on: May 12, 2023
 *      Author: ALTAWKEL
 */

#ifndef APP_HEXPARSER_INTERFACE_H_
#define APP_HEXPARSER_INTERFACE_H_

#include "stdio.h"
#include "Utils.h"
#include "FMI_Interface.h"

void FMI_vInit();
uint8_t HexParser_u8ASCII2HEX(uint8_t copy_u8ASCII);
void HexParser_vParseData(char * copy_u8Data);
void HexParser_vEraseAppArea();

#endif /* APP_HEXPARSER_INTERFACE_H_ */
