#include "MyControl.h"
extern uint8_t MyCommand[6];
int FinalCommand=0;
uint8_t a=1;
extern uint8_t IsRec;
static int times = 0;
uint8_t str1[]=" NOW LIGHT ";
uint8_t str2[]=" MANY WE NEED ";
uint8_t str3[]=" MANY WE GIVE ";
void GetAndTransformationCommand(void)
{
    //static int times = 0;
    GetCommand();
    times++;
		FinalCommand=GetFinalCommand();
    if(times >= 10)
    {
				OLED_ShowString(0,0,str1,12);
        OLED_ShowNum(60, 0, FinalCommand, 4, 12);
				OLED_Refresh_Gram();
        times = 0;
    }
		
	
}
void PIDControlLight(void)
{
	uint8_t a=1;
	static float previous_error = 0;
	float Kp = 1, Ki = 0.08, Kd = 0.5;
	int LightMySET=250;
	float LightError=FinalCommand-LightMySET;
	float P = 0, I = 0, D = 0, PID_value = 0;
	//OLED_ShowNum(0,24,FinalCommand,10,12);
	OLED_ShowString(0,12,str2,12);
	OLED_ShowNum(80,12,LightError,4,12);
	P = LightError;
  I = I + LightError;
  D = LightError - previous_error;
  PID_value = (Kp * P) + (Ki * I) + (Kd * D);
  previous_error = LightError;
	OLED_ShowString(0,24,str3,12);
	OLED_ShowNum(80,24,PID_value,4,12);
	__HAL_TIM_SET_COMPARE(&htim14,TIM_CHANNEL_1,PID_value);
	//if(IsRec==1)
	printf("%d",a);
}
int GetFinalCommand(void)
{
	int e,f,g,h;
		e=(MyCommand[0]-'0')*1000;
		f=(MyCommand[1]-'0')*100;
		g=(MyCommand[2]-'0')*10;
		h=(MyCommand[3]-'0')*1;
		FinalCommand=e+f+g+h-1000;
		//OLED_ShowNum(0,12,FinalCommand,4,12);
	return FinalCommand;
}
