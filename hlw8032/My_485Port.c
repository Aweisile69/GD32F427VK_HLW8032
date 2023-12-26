#include "My_485Port.h"
#include "gd32f4xx.h"


void My_RS485_SendData(uint8_t *buf,uint16_t len)
{
     uint8_t t;
     for(t=0;t<len;t++)      
     {           
         while(usart_flag_get(USART0, USART_FLAG_TC) == RESET);  
         usart_data_transmit(USART0,buf[t]);
     }     
     
}
