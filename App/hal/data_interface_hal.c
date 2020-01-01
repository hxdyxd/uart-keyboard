/* 
 *
 *2018 09 21 & hxdyxd
 *
 */

#include <stdio.h>
#include <string.h>

#include "data_interface_hal.h"



/* Complement */
#define TIM_CHANNEL_1N                      (0x0002U)
#define TIM_CHANNEL_2N                      (0x0006U)





/* some low level platform function */
/* public hal function */

void data_interface_hal_init(void)
{
    
    key_inout_init();
    //hal32_usart_init();
}



/******************* (C) COPYRIGHT 2018 hxdyxd *****END OF FILE****/
