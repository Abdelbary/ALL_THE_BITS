#include "unity.h"
#include "Analog_Model.h"
#include "MockFilter.h"
#include "Core.h"

extern uint16_t AnalogValue[analog_Max];


void setUp(void)
{
    Analog_Init();
}

void tearDown(void)
{
}

void test_Analog_Init_NeedToImplement(void)
{
    
    for(int i = 0 ; i < analog_Max ; i++)
        AnalogValue[i] = 0xffff;

    TEST_ASSERT_EQUAL_UINT8(STATUS_OK,Analog_Init());

    for(int i = 0 ; i < analog_Max ; i++)
        TEST_ASSERT_EQUAL_HEX16(0x0000,AnalogValue[i]);
}

void test_Analog_AddReading_should_updateAnalogValueArray(void)
{
    uint16_t analogTestValues[analog_Max] = {0x0000,0xffff,0xBEEF,0xAFAF,0xABCD,0xACBD,0xAAAA,0xBBBB};
    
    for(int i = 0 ; i < analog_Max ; i++)
    {
        Filter_AddVal_ExpectAndReturn(0,analogTestValues[i],0xBEEF);
        TEST_ASSERT_EQUAL_UINT8(STATUS_OK,Analog_AddReading(i,analogTestValues[i]));
        TEST_ASSERT_EQUAL_HEX16(0xBEEF,AnalogValue[i]);
    }
}

void test_Analog_AddReading_should_RejectAnalogValueOutOfIndx(void)
{
    for(int i =analog_Max ; i < analog_Max+3 ; i++)
    {
        TEST_ASSERT_EQUAL_INT(STATUS_INVALID_ARG,Analog_AddReading(i,0xBEEF));
        for(int i =0 ; i < analog_Max ; i++)
         TEST_ASSERT_EQUAL_HEX16(0x0000,AnalogValue[i]);
    }

    TEST_ASSERT_EQUAL_INT(STATUS_INVALID_ARG,Analog_AddReading(-1,0xBEEF));
    for(int i =0 ; i < analog_Max ; i++)
        TEST_ASSERT_EQUAL_HEX16(0x0000,AnalogValue[i]);
    
}

void test_Analog_Read_NeedToImplement(void)
{

}