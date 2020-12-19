#include "Executor.h"
#include "LED.h"
#include "Digital.h"
#include "Analog_Conductor.h"
#include "Analog_Model.h"

void executor_init(void)
{
    Analog_Conductor_Init();
    Digital_Init();
    LED_Init();
}

BOOL executor_run(void)
{
    Analog_Conductor_Exec();
    if(Analog_Read(0) > Analog_Read(1))
        LED_Toggle(LED1);
    else
        LED_Off(LED1);
        
    return TRUE;
}