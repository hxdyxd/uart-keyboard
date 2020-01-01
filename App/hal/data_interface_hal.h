/* 
 *
 *2018 09 21 & hxdyxd
 *
 */


#ifndef __data_interface_hal_H__
#define __data_interface_hal_H__

#include <stdint.h>

#include "gpio.h"
#include "key_inout.h"
//#include "hal32_usart.h"


//UART
#define UART_BUFFER_SIZE     (256)
#define USART_RX_TIMEOUT_MS  (10)


//ENCODER
#define ENCODER_CNT    (TIM3->CNT)


/* LEDS */
#define LED_OFF(id)  HAL_GPIO_WritePin(id, GPIO_PIN_SET)
#define LED_ON(id)   HAL_GPIO_WritePin(id, GPIO_PIN_RESET)
#define LED_HIGH(id)  HAL_GPIO_WritePin(id, GPIO_PIN_SET)
#define LED_LOW(id)   HAL_GPIO_WritePin(id, GPIO_PIN_RESET)
#define LED_REV(id)  HAL_GPIO_TogglePin(id)

#define LED2_OUT       LED2_OUT_GPIO_Port , LED2_OUT_Pin
#define LED3_OUT       LED3_OUT_GPIO_Port , LED3_OUT_Pin
#define BEEP_OUT       BEEP_OUT_GPIO_Port  , BEEP_OUT_Pin


/*******************************************************************************
* Function Name  : data_interface_hal_init.
* Description    : Hardware adaptation layer initialization.
* Input          : None.
* Output         : None.
* Return         : None.
*******************************************************************************/
void data_interface_hal_init(void);


/*******************************************************************************
* Function Name  : hal_read_TickCounter.
* Description    : Hardware adaptation layer TICK get.
* Input          : None.
* Output         : None.
* Return         : None.
*******************************************************************************/
#define hal_read_TickCounter() HAL_GetTick()


#endif
/******************* (C) COPYRIGHT 2018 hxdyxd *****END OF FILE****/
