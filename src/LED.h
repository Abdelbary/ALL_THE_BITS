#ifndef _LED_H_
#define _LED_H_

#define LED_PORT LPC_GPIO1
#define LED_PIN_BIT(bit) (0x3u << ((bit & 0x0F) << 1))
#define BIT_TO_MASK(bit) (1u << bit)


#define LED0    LED_PIN_BIT(18)
#define LED1    LED_PIN_BIT(20)
#define LED2    LED_PIN_BIT(21)
#define LED3    LED_PIN_BIT(23)

void led_init(void);
#endif //_LED_H_