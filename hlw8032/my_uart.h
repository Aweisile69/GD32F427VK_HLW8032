/*
 * @author: qiwei.wang
 * @Date: 2023-11-27 14:26:10
 * @LastEditors: WangQiWei
 * @LastEditTime: 2023-12-26 11:08:18
 */
#ifndef __MY_UART_H__
#define __MY_UART_H__

#include "gd32f4xx.h"

#define MAXLEN 24

#define RX_PORT    GPIOB           //接收HLW8032发送数据的端口
#define TX_PORT    GPIOA           //RS485的TX的端口
#define DE_PORT    GPIOA           //RS485的DE的端口

#define RX_PIN     GPIO_PIN_7      //接收HLW8032发送数据的引脚
#define TX_PIN     GPIO_PIN_9      //RS485的TX的引脚
#define DE_PIN     GPIO_PIN_8      //RS485的DE的引脚

void uart_init(void);
void uart_TransmitByte(uint8_t byte);
void uart_TransmitArray(uint8_t *array,uint16_t length);
void uart_TransmitString(char *string);
void uart_TransmitNumber(uint32_t number,uint8_t length);
void uart_printf(char *format, ...);

#endif
