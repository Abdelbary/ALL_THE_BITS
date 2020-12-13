#include "Core.h"
#include "Main.h"
#include "LED.h"
//
// NOTE: Do not attempt to test main() directly.
//       See Lecture 9 for how to handle this special case.
// ========================================================
//

#ifndef TEST
int main(void)
#else
int testableMain(void)
#endif
{
    led_init();
    return 0;
}
