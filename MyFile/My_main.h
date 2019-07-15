#ifndef MAIN_H
#define MAIN_H
#include "stm32f4xx_hal.h"
#include "usart.h"
#include "oled.h"
#include "tim.h"
#include "stm32_hal_legacy.h"
#include "MyControl.h"
void UserMain(void);
void GetCommand(void);
#endif