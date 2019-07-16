#ifndef CONTROL_H
#define CONTROL_H
#include "My_main.h"
#include "MyMath.h"
#include "oled.h"

void GetAndTransformationCommand(void);
void PIDControlLight(void);
int GetFinalCommand(void);
#endif