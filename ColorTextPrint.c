#include "ColorTextPrint.h"

HANDLE getColorHandle()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	return hConsole;
}

void w_applyColor(HANDLE i_handle, int i_color)
{
	i_color %= 256;
	SetConsoleTextAttribute(i_handle, i_color);
}

void l_applyColor(int i_color)
{
	puts("\x1B[1;31;40m");
}