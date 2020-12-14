#include "Executor.h"
#include "LED.h"
#include "Digital.h"
void executor_init(void)
{
    Digital_init();
    led_init();
}

BOOL executor_run(void)
{
    char bits =  Digital_getBits();
    if(0x3 & bits)
    {
        led_toggle(LED0);
    }
    else
    {
        led_off(LED0);
    }
    if(0x0C &bits)
    {
        led_toggle(LED1);
    }
    else
    {
        led_off(LED1);
    }
    if(0x30 & bits)
    {
        led_toggle(LED2);
    }
    else
    {
        led_off(LED2);
    }
    return TRUE;
}