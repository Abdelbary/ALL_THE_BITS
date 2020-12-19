/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#ifndef TEST_INSTANCES
#define TEST_INSTANCES
#endif /* TEST_INSTANCES */
#include "stdint.h"
#include "Core.h"
#include "MockFilter.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_Analog_Init_NeedToImplement(void);
extern void test_Analog_AddReading_should_updateAnalogValueArray(void);
extern void test_Analog_AddReading_should_RejectAnalogValueOutOfIndx(void);
extern void test_Analog_Read_NeedToImplement(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  MockFilter_Init();
}
static void CMock_Verify(void)
{
  MockFilter_Verify();
}
static void CMock_Destroy(void)
{
  MockFilter_Destroy();
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, int line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("TestAnalog_Model.c");
  run_test(test_Analog_Init_NeedToImplement, "test_Analog_Init_NeedToImplement", 18);
  run_test(test_Analog_AddReading_should_updateAnalogValueArray, "test_Analog_AddReading_should_updateAnalogValueArray", 30);
  run_test(test_Analog_AddReading_should_RejectAnalogValueOutOfIndx, "test_Analog_AddReading_should_RejectAnalogValueOutOfIndx", 42);
  run_test(test_Analog_Read_NeedToImplement, "test_Analog_Read_NeedToImplement", 57);

  CMock_Guts_MemFreeFinal();
  return UnityEnd();
}