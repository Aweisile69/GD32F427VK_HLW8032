#include "gd32f4xx.h"
#include "hlw8032.h"


/**
 * @description: main函数
 * @return {*}
 */
int main(void)
{
    /************************************************/
    /*串口通信测试函数*/
    // uint8_t ArrayTest[] = {0x02,0x03};
    // uart_init();
    // uart_TransmitByte(0x01);
    // uart_TransmitArray(ArrayTest,2);
    // uart_TransmitNumber(1234,4);
    // uart_TransmitString("你好，世界!");
    // uart_printf("\nByte:%x \nArray:{%x,%x}",0x01,ArrayTest[0],ArrayTest[1]);
    /************************************************/
    uart_init();
    while(1)
	{
		
    }
}
