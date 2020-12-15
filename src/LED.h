#ifndef _LED_H_
#define _LED_H_

#define LED_PORT LPC_GPIO1
#define LED_PIN_BIT(bit) (0x3u << ((bit & 0x0F) << 1))
#define BIT_TO_MASK(bit) (1u << bit)


#define LED0_PIN    LED_PIN_BIT(18)
#define LED1_PIN    LED_PIN_BIT(20)
#define LED2_PIN    LED_PIN_BIT(21)
#define LED3_PIN    LED_PIN_BIT(23)

typedef enum
{
    LED0 = 0,
    LED1,
    LED2,
    LED3,
    NUM_LED
}led_pins_t;

void LED_Toggle(led_pins_t num);
void LED_Off(led_pins_t num);
void LED_On(led_pins_t num);
void LED_Init(void);
#endif //_LED_H_