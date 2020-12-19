#include "unity.h"
#include "MockAnalog_Model.h"
#include "MockAnalog_Hardware.h"
#include "Analog_Conductor.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Analog_Conductor_Init_should_callInitFunction(void)
{
    Analog_Hardware_Init_Expect();
    Analog_Init_ExpectAndReturn(STATUS_OK);
    Analog_Conductor_Init();
}


void test_Analog_Conductor_Exec_should_checkForNewValueAndDoNothing_when_STATUS_NO_CHANGE()
{
    Analog_Hardware_IsReady_ExpectAndReturn(0,STATE_NO_CHANGE);
    Analog_Hardware_IsReady_ExpectAndReturn(1,STATE_NO_CHANGE);
    Analog_Hardware_IsReady_ExpectAndReturn(2,STATE_NO_CHANGE);
    Analog_Hardware_IsReady_ExpectAndReturn(3,STATE_NO_CHANGE);
    Analog_Hardware_IsReady_ExpectAndReturn(4,STATE_NO_CHANGE);
    Analog_Hardware_IsReady_ExpectAndReturn(5,STATE_NO_CHANGE);
    Analog_Hardware_IsReady_ExpectAndReturn(6,STATE_NO_CHANGE);
    Analog_Hardware_IsReady_ExpectAndReturn(7,STATE_NO_CHANGE);
    Analog_Conductor_Exec();
}


void test_Analog_Conductor_Exec_should_AddNewValueToModule_When_STATE_UPDATED()
{
    Analog_Hardware_IsReady_ExpectAndReturn(0,STATE_UPDATED);
    Analog_Hardwar_getReading_ExpectAndReturn(0,0xBEE0);
    Analog_AddReading_ExpectAndReturn(0,0xBEE0,STATUS_OK);


    Analog_Hardware_IsReady_ExpectAndReturn(1,STATE_UPDATED);
    Analog_Hardwar_getReading_ExpectAndReturn(1,0xBEE1);
    Analog_AddReading_ExpectAndReturn(1,0xBEE1,STATUS_OK);


    Analog_Hardware_IsReady_ExpectAndReturn(2,STATE_UPDATED);
    Analog_Hardwar_getReading_ExpectAndReturn(2,0xBEE2);
    Analog_AddReading_ExpectAndReturn(2,0xBEE2,STATUS_OK);


    Analog_Hardware_IsReady_ExpectAndReturn(3,STATE_UPDATED);
    Analog_Hardwar_getReading_ExpectAndReturn(3,0xBEE3);
    Analog_AddReading_ExpectAndReturn(3,0xBEE3,STATUS_OK);


    Analog_Hardware_IsReady_ExpectAndReturn(4,STATE_UPDATED);
    Analog_Hardwar_getReading_ExpectAndReturn(4,0xBEE4);
    Analog_AddReading_ExpectAndReturn(4,0xBEE4,STATUS_OK);
    

    Analog_Hardware_IsReady_ExpectAndReturn(5,STATE_UPDATED);
    Analog_Hardwar_getReading_ExpectAndReturn(5,0xBEE5);
    Analog_AddReading_ExpectAndReturn(5,0xBEE5,STATUS_OK);


    Analog_Hardware_IsReady_ExpectAndReturn(6,STATE_UPDATED);
    Analog_Hardwar_getReading_ExpectAndReturn(6,0xBEE6);
    Analog_AddReading_ExpectAndReturn(6,0xBEE6,STATUS_OK);
    

    Analog_Hardware_IsReady_ExpectAndReturn(7,STATE_UPDATED);
    Analog_Hardwar_getReading_ExpectAndReturn(7,0xBEE7);
    Analog_AddReading_ExpectAndReturn(7,0xBEE7,STATUS_OK);
    Analog_Conductor_Exec();
}

