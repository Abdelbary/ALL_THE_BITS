#include "LED.h"
#include "Core.h"




void led_init(void)
{
    //SET PINS AS INPUT
    LED_PORT->FIOCLR     |= (BIT_TO_MASK(18) | BIT_TO_MASK(20) | BIT_TO_MASK(21) | BIT_TO_MASK(23));
    LED_PORT->FIODIR     |= (BIT_TO_MASK(18) | BIT_TO_MASK(20) | BIT_TO_MASK(21) | BIT_TO_MASK(23));
    LPC_PINCON->PINSEL3  &= ~(LED0 | LED1 | LED2 | LED3);
    LPC_PINCON->PINMODE3 &= ~(LED0 | LED1 | LED2 | LED3);

    

}