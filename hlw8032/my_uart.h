/*
 * @author: qiwei.wang
 * @Date: 2023-11-27 14:26:10
 * @LastEditors: WangQiWei
 * @LastEditTime: 2023-12-25 22:08:54
 */
#ifndef __MY_UART_H__
#define __MY_UART_H__

#include "gd32f4xx.h"

#define MAXLEN 24

void uart_init(void);
void uart_TransmitByte(uint8_t byte);
void uart_TransmitArray(uint8_t *array,uint16_t length);
void uart_TransmitString(char *string);
void uart_TransmitNumber(uint32_t number,uint8_t length);
void uart_printf(char *format, ...);

#endif
