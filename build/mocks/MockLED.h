/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKLED_H
#define _MOCKLED_H

#include "unity.h"
#include "stdint.h"
#include "Defs.h"
#include "LPC1768.h"
#include "LED.h"

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

void MockLED_Init(void);
void MockLED_Destroy(void);
void MockLED_Verify(void);




#define led_init_Ignore() led_init_CMockIgnore()
void led_init_CMockIgnore(void);
#define led_init_StopIgnore() led_init_CMockStopIgnore()
void led_init_CMockStopIgnore(void);
#define led_init_Expect() led_init_CMockExpect(__LINE__)
void led_init_CMockExpect(UNITY_LINE_TYPE cmock_line);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
