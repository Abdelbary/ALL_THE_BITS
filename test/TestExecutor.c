#include "unity.h"
#include "cmock.h"
#include "MockLED.h"
#include "MockDigital.h"
#include "Executor.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Executor_init_should_initalizeSystem(void)
{
    LED_Init_Expect();
    Digital_Init_Expect();
    executor_init();
}


void test_Executor_run_should_always_returnTrue()
{
    int cnt = 3;
    while(cnt--)
    {
    Digital_GetBits_ExpectAndReturn(0x01);
    LED_Toggle_Expect(LED0);
    LED_Off_Expect(LED1);
    LED_Off_Expect(LED2);
    TEST_ASSERT_TRUE(executor_run());
    }
}

void test_Executor_run_should_toggleLed0_when_Digital0IsHigh()
{
    Digital_GetBits_ExpectAndReturn(0x01);
    LED_Toggle_Expect(LED0);
    LED_Off_Expect(LED1);
    LED_Off_Expect(LED2);
    executor_run();
}

void test_Executor_run_should_toggleLed0_when_Digital1IsHigh()
{
    Digital_GetBits_ExpectAndReturn(0x02);
    LED_Toggle_Expect(LED0);
    LED_Off_Expect(LED1);
    LED_Off_Expect(LED2);
    executor_run();
}



void test_Executor_run_should_toggleLed1_when_Digital0and1IsHigh()
{
    Digital_GetBits_ExpectAndReturn(0x03);
    LED_Toggle_Expect(LED0);
    LED_Off_Expect(LED1);
    LED_Off_Expect(LED2);

    
    executor_run();
}


void test_Executor_run_should_turnOffLed0_when_Digital0and1IsLow()
{
    Digital_GetBits_ExpectAndReturn(0x00);
    LED_Off_Expect(LED0);
    LED_Off_Expect(LED1);
    LED_Off_Expect(LED2);
    executor_run();
}
/*-======================================================================*/
void test_Executor_run_should_toggleLed1_when_Digital2IsHigh()
{
    Digital_GetBits_ExpectAndReturn(0x04);
    LED_Toggle_Expect(LED1);
    LED_Off_Expect(LED0);
    LED_Off_Expect(LED2);
    executor_run();
}

void test_Executor_run_should_toggleLed1_when_Digital3IsHigh()
{
    Digital_GetBits_ExpectAndReturn(0x08);
    LED_Toggle_Expect(LED1);
    LED_Off_Expect(LED0);
    LED_Off_Expect(LED2);
    executor_run();
}



void test_Executor_run_should_toggleLed0_when_Digital0and1IsHigh()
{
    Digital_GetBits_ExpectAndReturn(0x0C);
    LED_Toggle_Expect(LED1);
    LED_Off_Expect(LED0);
    LED_Off_Expect(LED2);
    executor_run();
}

void test_Executor_run_should_turnOffLed1_when_Digital2and3IsLow()
{
    Digital_GetBits_ExpectAndReturn(0x00);
    LED_Off_Expect(LED0);
    LED_Off_Expect(LED1);
    LED_Off_Expect(LED2);
    executor_run();
}
/*-======================================================================*/
void test_Executor_run_should_toggleLed2_when_Digital4IsHigh()
{
    Digital_GetBits_ExpectAndReturn(0x10);
    LED_Toggle_Expect(LED2);
    LED_Off_Expect(LED0);
    LED_Off_Expect(LED1);
    executor_run();
}

void test_Executor_run_should_toggleLed3_when_Digital5IsHigh()
{
    Digital_GetBits_ExpectAndReturn(0x20);
    LED_Toggle_Expect(LED2);
    LED_Off_Expect(LED0);
    LED_Off_Expect(LED1);
    executor_run();
}



void test_Executor_run_should_toggleLed3_when_Digital4and5IsHigh()
{
    Digital_GetBits_ExpectAndReturn(0x30);
    LED_Toggle_Expect(LED2);
    LED_Off_Expect(LED0);
    LED_Off_Expect(LED1);
    executor_run();
}

void test_Executor_run_should_turnOffLed3_when_Digital4and5IsLow()
{
    Digital_GetBits_ExpectAndReturn(0x00);
    LED_Off_Expect(LED0);
    LED_Off_Expect(LED1);
    LED_Off_Expect(LED2);
    
    executor_run();
}