/*
 * UART_Interface.h
 *
 *  Created on: Aug 8, 2020
 *      Author: Tantawy
 */

#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_



void UART_Init(void);
void UART_SendData(u8 Data);
u8 UART_ReceiveData(void);

#endif /* UART_INTERFACE_H_ */
