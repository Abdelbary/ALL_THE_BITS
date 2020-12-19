#include "Analog_Model.h"
#include "Analog_Hardware.h"
#include "Analog_Conductor.h"
#include <stdio.h>

void Analog_Conductor_Init()
{
    Analog_Hardware_Init();
    Analog_Init();
    
}

void Analog_Conductor_Exec()
{
    for(int i = 0  ; i < analog_Max ; i++)
    {
      switch(Analog_Hardware_IsReady(i))
      {
          case STATE_NO_CHANGE:
          break;
          case STATE_UPDATED:
          Analog_AddReading(i,Analog_Hardwar_getReading(i));
          break;
          case STATE_ERR:
          break;
          default:
          break;
      }
    }
}
