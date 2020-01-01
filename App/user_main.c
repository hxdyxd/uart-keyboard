/* 2019 04 10 */
/* By hxdyxd */
#include <stdlib.h>
#include "app_debug.h"
#include "user_main.h"
#include "function_task.h"
#include "soft_timer.h"


void led_flash_proc(void)
{
    LED_REV(LED2_OUT);
}

void led_proc(void)
{
    soft_timer_delete(1);
    LED_OFF(LED2_OUT);
}


void key_callback(int8_t id)
{
    putchar((id&0xf) | 0x60);
    soft_timer_create(1, 1, 1, led_flash_proc, 30);
    soft_timer_create(0, 1, 0, led_proc, 200);
}



void user_system_setup(void)
{
}

void user_setup(void)
{
    PRINTF("\r\n\r\n[UART-KEYBOARD] Build , %s %s \r\n", __DATE__, __TIME__);
    LED_OFF(LED2_OUT);
    LED_OFF(LED3_OUT);
    soft_timer_init();
}

void user_loop(void)
{
    TIMER_TASK(led_task1, 2000, 1) {
        LED_REV(LED3_OUT);
    }
    key_inout_proc(key_callback);
    soft_timer_proc();
}


/*****************************END OF FILE***************************/
