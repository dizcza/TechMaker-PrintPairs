#if __STDC_VERSION__ >= 199901L
#define _XOPEN_SOURCE 600
#else
#define _XOPEN_SOURCE 500
#endif /* __STDC_VERSION__ */

#include <stdint.h>
#include <time.h>

enum TimerState {
	WAITING,
	RUNNING
};

void timer_start();
void timer_reset();
int64_t timer_clock();
