/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "MockFilter.h"

static const char* CMockString_Filter_AddVal = "Filter_AddVal";
static const char* CMockString_NewVal = "NewVal";
static const char* CMockString_PrevVal = "PrevVal";

typedef struct _CMOCK_Filter_AddVal_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  uint16_t ReturnVal;
  uint16_t Expected_PrevVal;
  uint16_t Expected_NewVal;

} CMOCK_Filter_AddVal_CALL_INSTANCE;

static struct MockFilterInstance
{
  char Filter_AddVal_IgnoreBool;
  uint16_t Filter_AddVal_FinalReturn;
  CMOCK_MEM_INDEX_TYPE Filter_AddVal_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void MockFilter_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.Filter_AddVal_CallInstance;
  if (Mock.Filter_AddVal_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_Filter_AddVal);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void MockFilter_Init(void)
{
  MockFilter_Destroy();
}

void MockFilter_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

uint16_t Filter_AddVal(uint16_t PrevVal, uint16_t NewVal)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Filter_AddVal_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Filter_AddVal);
  cmock_call_instance = (CMOCK_Filter_AddVal_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Filter_AddVal_CallInstance);
  Mock.Filter_AddVal_CallInstance = CMock_Guts_MemNext(Mock.Filter_AddVal_CallInstance);
  if (Mock.Filter_AddVal_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.Filter_AddVal_FinalReturn;
    Mock.Filter_AddVal_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_Filter_AddVal,CMockString_PrevVal);
    UNITY_TEST_ASSERT_EQUAL_HEX16(cmock_call_instance->Expected_PrevVal, PrevVal, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_Filter_AddVal,CMockString_NewVal);
    UNITY_TEST_ASSERT_EQUAL_HEX16(cmock_call_instance->Expected_NewVal, NewVal, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_Filter_AddVal(CMOCK_Filter_AddVal_CALL_INSTANCE* cmock_call_instance, uint16_t PrevVal, uint16_t NewVal)
{
  cmock_call_instance->Expected_PrevVal = PrevVal;
  cmock_call_instance->Expected_NewVal = NewVal;
}

void Filter_AddVal_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint16_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Filter_AddVal_CALL_INSTANCE));
  CMOCK_Filter_AddVal_CALL_INSTANCE* cmock_call_instance = (CMOCK_Filter_AddVal_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Filter_AddVal_CallInstance = CMock_Guts_MemChain(Mock.Filter_AddVal_CallInstance, cmock_guts_index);
  Mock.Filter_AddVal_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.Filter_AddVal_IgnoreBool = (char)1;
}

void Filter_AddVal_CMockStopIgnore(void)
{
  if(Mock.Filter_AddVal_IgnoreBool)
    Mock.Filter_AddVal_CallInstance = CMock_Guts_MemNext(Mock.Filter_AddVal_CallInstance);
  Mock.Filter_AddVal_IgnoreBool = (char)0;
}

void Filter_AddVal_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint16_t PrevVal, uint16_t NewVal, uint16_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Filter_AddVal_CALL_INSTANCE));
  CMOCK_Filter_AddVal_CALL_INSTANCE* cmock_call_instance = (CMOCK_Filter_AddVal_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Filter_AddVal_CallInstance = CMock_Guts_MemChain(Mock.Filter_AddVal_CallInstance, cmock_guts_index);
  Mock.Filter_AddVal_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_Filter_AddVal(cmock_call_instance, PrevVal, NewVal);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

