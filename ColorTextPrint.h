#ifndef __COLOR_TEXT_PRINT_H__
#define __COLOR_TEXT_PRINT_H__ 1

#pragma once

#include <stdio.h>

//Windows
#ifdef _WIN32

	#include <Windows.h>

	#define CT_PRINT_BLACK 0
	#define CT_PRINT_BLUE 9
	#define CT_PRINT_GREEN 10
	#define CT_PRINT_CYAN 11
	#define CT_PRINT_RED 12
	#define CT_PRINT_MAGENTA 13
	#define CT_PRINT_ORANGE 14
	#define CT_PRINT_GRAY 7
	#define CT_PRINT_DARKGRAY 8
	#define CT_PRINT_WHITE 15
	#define CT_PRINT_DEFAULT CT_PRINT_GRAY

	HANDLE getColorHandle();
	void wApplyColor(HANDLE, int);
	int wcPutc(char, int);
	int wcPuts(char*, int);

#endif

//Linux or Unix
#ifdef __linux__ || linux || __linux || __unix__ || unix || __unix

	#define CT_PRINT_RED 31
	#define CT_PRINT_GREEN 32
	#define CT_PRINT_YELLOW 33
	#define CT_PRINT_BLUE 34
	#define CT_PRINT_MAGENTA 35
	#define CT_PRINT_CYAN 36
	#define CT_PRINT_WHITE 37
	#define CT_PRINT_RESET 0

	void l_applyColor(int);
	
#endif

#endif