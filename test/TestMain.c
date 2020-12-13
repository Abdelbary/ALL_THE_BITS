#include "Core.h"
#include "unity.h"
#include "cmock.h"
#include "MockLED.h"
#include "Main.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_testableMain_should_callLedInitFuntion(void)
{
    led_init_Expect();
    TEST_ASSERT_EQUAL_INT(0,testableMain());
}

