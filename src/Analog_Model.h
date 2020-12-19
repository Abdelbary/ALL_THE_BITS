#ifndef ANALOG_MODEL_H
#define ANALOG_MODEL_H
#include "Core.h"
#include "filter.h"
typedef enum
{
    analog_ch = 0,
    analog_ch1,
    analog_ch2,
    analog_ch3,
    analog_ch4,
    analog_ch5,
    analog_ch6,
    analog_ch7,
    analog_Max
}analog_chanal_t;


STATUS_T Analog_Init(void);
STATUS_T Analog_Read(analog_chanal_t num);
STATUS_T Analog_AddReading(uint8_t chanal , uint16_t value);

#endif // ANALOG_MODEL_H
