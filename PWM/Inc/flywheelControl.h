#ifndef FLYWHEEL_CONTROL_GUARD
#define FLYWHEEL_CONTROL_GUARD

#include "main.h"
#include "stm32f4xx_hal.h"
#include "tim.h"
#include "gpio.h"

extern int duty1Fly;
extern int duty2Fly;

extern void initFly();

extern void slewUpdateFly(int endSpeed, int increment, int delay);

extern void dutyTargetUpdateFly(int target, int curr, int A);

#endif
