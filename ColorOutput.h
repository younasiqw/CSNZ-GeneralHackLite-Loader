#pragma once

#include <iostream>
#include "winapi.h"

#define WHITE FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY
#define RED FOREGROUND_RED | FOREGROUND_INTENSITY
#define GREEN FOREGROUND_GREEN | FOREGROUND_INTENSITY
#define BLUE FOREGROUND_BLUE | FOREGROUND_INTENSITY

HANDLE hStdOut;

void ColorText(const char* str, WORD attributes)
{
	CONSOLE_SCREEN_BUFFER_INFO prevInfo;
	winapi.hGetConsoleScreenBufferInfo(hStdOut, &prevInfo);
	winapi.hSetConsoleTextAttribute(hStdOut, attributes);
	printf(str);
	winapi.hSetConsoleTextAttribute(hStdOut, prevInfo.wAttributes);
}