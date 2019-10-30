#include "flywheelControl.h"

void rampSignalInit(__uint32_t* reg)
{
 for (int i = 0; i < 500; i++)
    {
        *reg = i;
        HAL_Delay(2);
    }
}

void slewControl(int initSpeed, int endSpeed, int increment, int delay)
{
    for (int i = initSpeed; i <= endSpeed; i += increment)
    {
        htim2.Instance->CCR1 = i;
        htim2.Instance->CCR2 = i;

        HAL_Delay(delay);
    }
}

void dutyControl(__uint32_t* reg, int target, int curr, int P){
    
}