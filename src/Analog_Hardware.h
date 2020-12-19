#ifndef ANALOG_HARDWARE_H
#define ANALOG_HARDWARE_H
#include "Core.h"

typedef enum
{
    STATE_NO_CHANGE,
    STATE_UPDATED,
    STATE_ERR
}AnalogReadingState_t;

void Analog_Hardware_Init();
AnalogReadingState_t Analog_Hardware_IsReady(char chanal);
uint16_t Analog_Hardwar_getReading(uint8_t chanal);

#endif // ANALOG_HARDWARE_H
