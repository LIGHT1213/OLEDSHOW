#include "My_main.h"
uint8_t command[6];
uint8_t MyCommand[6];

extern uint8_t Scan;
void UserMain(void)
{
	if(Scan==1)
	{
		GetAndTransformationCommand();
		PIDControlLight();
		Scan=0;
	}

		//__HAL_TIM_SET_COMPARE(&htim14,TIM_CHANNEL_1,480);

}

void HAL_UART_RxCpltCallback (UART_HandleTypeDef * huart) 
{
	if(huart->Instance == UART5)
	{
		HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_13);
		HAL_UART_Receive_DMA(&huart5,command,6);
	}
}
void GetCommand(void)
{
	for(int i=0;i<=4;i++)
	{
		MyCommand[i]=command[i];
	}
}
