#include "flywheelControl.h"

void rampSignalInit()
{
    for (int i = 0; i < 500; i++)
    {

        htim2.Instance->CCR2 = i; // Channel 2
        HAL_Delay(2);
    }
    for (int i = 0; i < 500; i++)
    {

        htim2.Instance->CCR1 = i; // Channel 1
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
