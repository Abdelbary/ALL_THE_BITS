/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "MockDigital.h"

static const char* CMockString_Digital_getBits = "Digital_getBits";
static const char* CMockString_Digital_init = "Digital_init";

typedef struct _CMOCK_Digital_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_Digital_init_CALL_INSTANCE;

typedef struct _CMOCK_Digital_getBits_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ReturnVal;

} CMOCK_Digital_getBits_CALL_INSTANCE;

static struct MockDigitalInstance
{
  char Digital_init_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE Digital_init_CallInstance;
  char Digital_getBits_IgnoreBool;
  char Digital_getBits_FinalReturn;
  CMOCK_MEM_INDEX_TYPE Digital_getBits_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void MockDigital_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.Digital_init_CallInstance;
  if (Mock.Digital_init_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_Digital_init);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.Digital_getBits_CallInstance;
  if (Mock.Digital_getBits_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_Digital_getBits);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void MockDigital_Init(void)
{
  MockDigital_Destroy();
}

void MockDigital_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

void Digital_init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Digital_init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Digital_init);
  cmock_call_instance = (CMOCK_Digital_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Digital_init_CallInstance);
  Mock.Digital_init_CallInstance = CMock_Guts_MemNext(Mock.Digital_init_CallInstance);
  if (Mock.Digital_init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void Digital_init_CMockIgnore(void)
{
  Mock.Digital_init_IgnoreBool = (char)1;
}

void Digital_init_CMockStopIgnore(void)
{
  Mock.Digital_init_IgnoreBool = (char)0;
}

void Digital_init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Digital_init_CALL_INSTANCE));
  CMOCK_Digital_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_Digital_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Digital_init_CallInstance = CMock_Guts_MemChain(Mock.Digital_init_CallInstance, cmock_guts_index);
  Mock.Digital_init_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
}

char Digital_getBits(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Digital_getBits_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Digital_getBits);
  cmock_call_instance = (CMOCK_Digital_getBits_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Digital_getBits_CallInstance);
  Mock.Digital_getBits_CallInstance = CMock_Guts_MemNext(Mock.Digital_getBits_CallInstance);
  if (Mock.Digital_getBits_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.Digital_getBits_FinalReturn;
    Mock.Digital_getBits_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void Digital_getBits_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, char cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Digital_getBits_CALL_INSTANCE));
  CMOCK_Digital_getBits_CALL_INSTANCE* cmock_call_instance = (CMOCK_Digital_getBits_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Digital_getBits_CallInstance = CMock_Guts_MemChain(Mock.Digital_getBits_CallInstance, cmock_guts_index);
  Mock.Digital_getBits_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.Digital_getBits_IgnoreBool = (char)1;
}

void Digital_getBits_CMockStopIgnore(void)
{
  if(Mock.Digital_getBits_IgnoreBool)
    Mock.Digital_getBits_CallInstance = CMock_Guts_MemNext(Mock.Digital_getBits_CallInstance);
  Mock.Digital_getBits_IgnoreBool = (char)0;
}

void Digital_getBits_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Digital_getBits_CALL_INSTANCE));
  CMOCK_Digital_getBits_CALL_INSTANCE* cmock_call_instance = (CMOCK_Digital_getBits_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Digital_getBits_CallInstance = CMock_Guts_MemChain(Mock.Digital_getBits_CallInstance, cmock_guts_index);
  Mock.Digital_getBits_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

