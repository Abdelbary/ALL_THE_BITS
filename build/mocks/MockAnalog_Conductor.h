/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKANALOG_CONDUCTOR_H
#define _MOCKANALOG_CONDUCTOR_H

#include "unity.h"
#include "stdint.h"
#include "Defs.h"
#include "LPC1768.h"
#include "Analog_Conductor.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void MockAnalog_Conductor_Init(void);
void MockAnalog_Conductor_Destroy(void);
void MockAnalog_Conductor_Verify(void);




#define Analog_Conductor_Init_Ignore() Analog_Conductor_Init_CMockIgnore()
void Analog_Conductor_Init_CMockIgnore(void);
#define Analog_Conductor_Init_StopIgnore() Analog_Conductor_Init_CMockStopIgnore()
void Analog_Conductor_Init_CMockStopIgnore(void);
#define Analog_Conductor_Init_Expect() Analog_Conductor_Init_CMockExpect(__LINE__)
void Analog_Conductor_Init_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define Analog_Conductor_Exec_Ignore() Analog_Conductor_Exec_CMockIgnore()
void Analog_Conductor_Exec_CMockIgnore(void);
#define Analog_Conductor_Exec_StopIgnore() Analog_Conductor_Exec_CMockStopIgnore()
void Analog_Conductor_Exec_CMockStopIgnore(void);
#define Analog_Conductor_Exec_Expect() Analog_Conductor_Exec_CMockExpect(__LINE__)
void Analog_Conductor_Exec_CMockExpect(UNITY_LINE_TYPE cmock_line);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
