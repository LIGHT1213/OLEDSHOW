#include "My_main.h"
#include "usart.h"

uint8_t command[5];
void UserMain(void)
{
	HAL_UART_Receive_DMA(&huart5,command,5);
	while(1);
}

void HAL_UART_RxCpltCallback (UART_HandleTypeDef * huart) 
{
	if(huart->Instance == UART5)
	{
		HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_13);
		HAL_UART_Receive_DMA(&huart5,command,5);
	}
}

