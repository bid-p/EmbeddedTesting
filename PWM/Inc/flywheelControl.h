#ifndef FLYWHEEL_CONTROL_GUARD
#define FLYWHEEL_CONTROL_GUARD

#include "main.h"
#include "stm32f4xx_hal.h"
#include "tim.h"
#include "gpio.h"

extern void rampSignalInit(TIM_HandleTypeDef tim, int channelNum);

extern void slewControl(int initSpeed, int endSpeed, int increment, int delay);

#endif
