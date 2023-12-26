/*
 * @author: WangQiWei
 * @Date: 2023-12-26 10:39:19
 * @LastEditors: WangQiWei
 * @LastEditTime: 2023-12-26 11:21:46
 */
#ifndef __485PORT_H
#define __485PORT_H	 

#include "gd32f4xx.h"

void    My_RS485_SendData(uint8_t *buf,uint16_t len);

#endif
