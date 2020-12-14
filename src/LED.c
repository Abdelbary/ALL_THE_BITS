#include "LED.h"
#include "Core.h"




void led_init(void)
{
    //SET PINS AS INPUT
    LED_PORT->FIOCLR     |= (BIT_TO_MASK(18) | BIT_TO_MASK(20) | BIT_TO_MASK(21) | BIT_TO_MASK(23));
    LED_PORT->FIODIR     |= (BIT_TO_MASK(18) | BIT_TO_MASK(20) | BIT_TO_MASK(21) | BIT_TO_MASK(23));
    LPC_PINCON->PINSEL3  &= ~(LED0_PIN | LED1_PIN | LED2_PIN | LED3_PIN);
    LPC_PINCON->PINMODE3 &= ~(LED0_PIN | LED1_PIN | LED2_PIN | LED3_PIN);

    

}


void led_toggle(led_pins_t led)
{
    
}
void led_off(led_pins_t led)
{

}
void led_on(led_pins_t led)
{

}