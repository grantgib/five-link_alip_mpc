
#ifndef __TIMER_H__
#define __TIMER_H__
#include "GlobalOptions.h"



#if (defined _WIN32 || defined _WIN64 || defined _WINDLL )

/* Use Windows QueryPerformanceCounter for timing */
#include <windows.h>

typedef struct timer{
	LARGE_INTEGER tic;
	LARGE_INTEGER toc;
	LARGE_INTEGER freq;
} timer;


#elif (defined __APPLE__)

#include <mach/mach_time.h>

/* Use MAC OSX  mach_time for timing */
typedef struct timer{
	uint64_t tic;
	uint64_t toc;
	mach_timebase_info_data_t tinfo;
} timer;



#else

/* Use POSIX clocl_gettime() for timing on non-Windows machines */
#include <time.h>
#include <sys/time.h>

typedef struct timer{
	struct timespec tic;
	struct timespec toc;
} timer;

#endif

/* METHODS are the same for both */
void tic(timer* t);
qp_real toc(timer* t);
#endif
/* END IFDEF __TIMER_H__ */
