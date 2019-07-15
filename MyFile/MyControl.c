#include "MyControl.h"
extern uint8_t MyCommand[6];
int FinalCommand;
void GetAndTransformationCommand(void)
{
    static int times = 0;
    GetCommand();
    times++;
    if(times >= 10)
    {
        for(int i = 0; i <= 3; i++)
        {
            OLED_ShowChar(10 * i, 0, MyCommand[i], 12, 1);
        }
        times = 0;
    }
		for(int i=0;i<=3;i++)
		{
			MyCommand[i]=MyCommand[i]-'0';
			FinalCommand+=MyCommand[i]*(1000/(MyIntPow(10,i)));
		}
}
void PIDControlLight(void)
{
	uint8_t a=1;
	static float previous_error = 0;
	float Kp = 0, Ki = 0, Kd = 0;
	int LightMySET=1000;
	float LightError=LightMySET-FinalCommand;
	float P = 0.0, I = 0., D = 0, PID_value = 0;
	P = LightError;
  I = I + LightError;
  D = LightError - previous_error;
  PID_value = (Kp * P) + (Ki * I) + (Kd * D);
  previous_error = LightError;
	__HAL_TIM_SET_COMPARE(&htim14,TIM_CHANNEL_1,PID_value);
	printf("%d",a);
}
