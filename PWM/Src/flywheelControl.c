#include "flywheelControl.h"

int duty1Fly = 0;
int duty2Fly = 0;

void initFly()
{
    for (int i = 1000; i < 2000; i+=10)
    {
        htim2.Instance->CCR1 = i;
			  //htim2.Instance->CCR2 = i;
        //HAL_Delay(1);
    }
		for (int i = 2000; i > 1000; i-=10)
    {
        htim2.Instance->CCR1 = i;
			  //htim2.Instance->CCR2 = i;
        //HAL_Delay(1);
    }
		htim2.Instance->CCR1 = 0;
		//HAL_Delay(5000);
}

void slewUpdateFly(int target, int increment, int delay)
{
    for (int i = (duty1Fly + duty2Fly) / 2; i <= target; i += increment)
    {
        duty1Fly = duty2Fly = i;

        HAL_Delay(delay);
    }
}

void dutyTargetUpdateFly(int target, int curr, int A)
{
    int duty = (duty1Fly + duty2Fly) / 2;
    if (duty < target)
    {
        duty += A * (target - duty) / target;
    }
    if (duty > target)
    {
        duty -= A * (target - duty) / target;
    }
    duty1Fly = duty2Fly = duty;
}