#include "flywheelControl.h"

void rampSignalInit(TIM_HandleTypeDef tim, int channelNum)
{
    switch (channelNum)
    {
    case 1:
        for (int i = 0; i < 500; i++)
        {

            tim.Instance->CCR1 = i;
            HAL_Delay(2);
        }
        break;

    case 2:
        for (int i = 0; i < 500; i++)
        {

            tim.Instance->CCR2 = i;
            HAL_Delay(2);
        }
        break;

    case 3:
        for (int i = 0; i < 500; i++)
        {

            tim.Instance->CCR3 = i;
            HAL_Delay(2);
        }
        break;

    case 4:
        for (int i = 0; i < 500; i++)
        {

            tim.Instance->CCR4 = i;
            HAL_Delay(2);
        }
        break;
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