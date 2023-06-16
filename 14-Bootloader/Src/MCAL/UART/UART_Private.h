/*
 * UART_Private.h
 *
 *  Created on: May 13, 2023
 *      Author: ALTAWKEL
 */

#ifndef MCAL_UART_UART_PRIVATE_H_
#define MCAL_UART_UART_PRIVATE_H_

#include "Utils.h"
#include "stdio.h"
typedef struct {
  volatile uint32_t SR;     /*!< USART Status register,                   Address offset: 0x00 */
  volatile uint32_t DR;     /*!< USART Data register,                     Address offset: 0x04 */
  volatile uint32_t BRR;    /*!< USART Baud rate register,                Address offset: 0x08 */
  volatile uint32_t CR1;    /*!< USART Control register 1,                 Address offset: 0x0C */
  volatile uint32_t CR2;    /*!< USART Control register 2,                 Address offset: 0x10 */
  volatile uint32_t CR3;    /*!< USART Control register 3,                 Address offset: 0x14 */
  volatile uint32_t GTPR;   /*!< USART Guard time and pre-scaler register,  Address offset: 0x18 */
} UART_RegDef_t;

#define UART ((UART_RegDef_t*) 0x40011000)


#endif /* MCAL_UART_UART_PRIVATE_H_ */
