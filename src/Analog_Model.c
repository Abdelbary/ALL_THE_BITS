#include "Analog_Model.h"

STATIC uint16_t AnalogValue[analog_Max];

STATUS_T Analog_Init(void)
{
    STATUS_T fun_status = STATUS_OK;
    for(int i = 0 ; i < analog_Max ; i++)
        AnalogValue[i] = 0;

    return fun_status;
}

STATUS_T Analog_Read(analog_chanal_t num)
{
    STATUS_T fun_status = STATUS_OK;
    return fun_status;
}

STATUS_T  Analog_AddReading(uint8_t chanal ,uint16_t value)
{
    STATUS_T fun_status = STATUS_OK;
    if(chanal < analog_Max)
        AnalogValue[chanal] = Filter_AddVal(AnalogValue[chanal],value) ;
    else 
        fun_status =  STATUS_INVALID_ARG;

    return fun_status;
}