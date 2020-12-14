#include "Core.h"
#include "unity.h"
#include "cmock.h"
#include "MockExecutor.h"
#include "Main.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_testableMain_should_InitExecutuor(void)
{
    executor_init_Expect();
    executor_run_ExpectAndReturn(TRUE);
    executor_run_ExpectAndReturn(TRUE);
    executor_run_ExpectAndReturn(FALSE);
    
    TEST_ASSERT_EQUAL_INT(0,testableMain());
}

