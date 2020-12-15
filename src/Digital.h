#ifndef DIGITAL_H
#define DIGITAL_H

#define DIGITAL_PORT LPC_GPIO2


void Digital_Init(void);
void Digital_ConfigResistors(uint8_t pull_up_mask, uint8_t pull_down_mask);
char Digital_GetBits(void);
#endif // DIGITAL_H
