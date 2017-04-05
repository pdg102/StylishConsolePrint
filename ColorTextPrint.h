#ifndef __COLOR_TEXT_PRINT_H__
#define __COLOR_TEXT_PRINT_H__ 1

#pragma once

#include <stdio.h>

//Windows
#ifdef _WIN32 || _WIN64
#include <Windows.h>

HANDLE getColorHandle();
void w_applyColor(HANDLE, int);
void colorPuts(char*);
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