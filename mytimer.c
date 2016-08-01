#include "mytimer.h"
#include <assert.h>

struct TimerMs {
	enum TimerState _state;
	struct timespec _start;
} my_timer;

void timer_start() {
	my_timer._state = RUNNING;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &my_timer._start);
}

void timer_reset() {
	assert(my_timer._state == RUNNING);
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &my_timer._start);
	//printf("\n time reset %d %d \n", my_timer._start.tv_sec, my_timer._start.tv_nsec);
}

int64_t timer_clock() {
	assert(my_timer._state == RUNNING);
	struct timespec tp_clock;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tp_clock);
	//printf("\n time clock %d %d \n", my_timer._start.tv_sec, my_timer._start.tv_nsec);
	int64_t elapsed_ms = (tp_clock.tv_sec - my_timer._start.tv_sec) * 1000;
	elapsed_ms += (tp_clock.tv_nsec - my_timer._start.tv_nsec) / 1e6;
	return elapsed_ms;
}