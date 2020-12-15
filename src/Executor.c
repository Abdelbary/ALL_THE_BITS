#include "Executor.h"
#include "LED.h"
#include "Digital.h"
void executor_init(void)
{
    Digital_Init();
    LED_Init();
}

BOOL executor_run(void)
{
    char bits =  Digital_GetBits();
    if(0x3 & bits)
    {
        LED_Toggle(LED0);
    }
    else
    {
        LED_Off(LED0);
    }
    if(0x0C &bits)
    {
        LED_Toggle(LED1);
    }
    else
    {
        LED_Off(LED1);
    }
    if(0x30 & bits)
    {
        LED_Toggle(LED2);
    }
    else
    {
        LED_Off(LED2);
    }
    return TRUE;
}