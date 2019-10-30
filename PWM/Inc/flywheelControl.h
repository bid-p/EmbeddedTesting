#ifndef FLYWHEEL_CONTROL_GUARD
#define FLYWHEEL_CONTROL_GUARD

#include "main.h"
#include "stm32f4xx_hal.h"
#include "tim.h"
#include "gpio.h"

extern void rampSignalInit(__uint32_t* reg);

extern void slewControl(int initSpeed, int endSpeed, int increment, int delay);

extern void dutyControl(__uint32_t* reg, int target, int curr, int P);

#endif
