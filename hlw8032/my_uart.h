/*
 * @author: qiwei.wang
 * @Date: 2023-11-27 14:26:10
 * @LastEditors: WangQiWei
 * @LastEditTime: 2023-12-26 21:36:25
 */
#ifndef __MY_UART_H__
#define __MY_UART_H__

#include "gd32f4xx.h"

#define D_TURE          1       //数据接收中
#define D_FALSE         0       //数据未接收
#define D_Rx_Length     24      //接收数据长度

extern uint8_t u8_RXBuf[D_Rx_Length]; 
extern uint8_t u8_RxCnt;              
extern uint16_t U16_RxTime;           
extern uint8_t B_RxData_En;           
extern uint8_t B_RxDataFinish_En;     


void uart_init(void);
void uart_TransmitByte(uint8_t byte);
void uart_TransmitArray(uint8_t *array,uint16_t length);
void uart_TransmitString(char *string);
void uart_TransmitNumber(uint32_t number,uint8_t length);
void uart_printf(char *format, ...);

#endif
