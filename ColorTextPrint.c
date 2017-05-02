#include "ColorTextPrint.h"

HANDLE getColorHandle()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	return hConsole;
}

void wApplyColor(HANDLE i_handle, int i_color)
{
	i_color %= 256;
	SetConsoleTextAttribute(i_handle, i_color);
}

int wcPutc(char i_char, int i_color)
{
	HANDLE colorHandle;
	int ret;

	colorHandle = getColorHandle();
	wApplyColor(colorHandle, i_color);
	ret = putc(i_char, stdout);
	wApplyColor(colorHandle, CT_PRINT_DEFAULT);
	
	return ret;
}

int wcPuts(char* i_str, int i_color)
{
	HANDLE colorHandle;
	int ret;

	colorHandle = getColorHandle();
	wApplyColor(colorHandle, i_color);
	ret = puts(i_str);
	wApplyColor(colorHandle, CT_PRINT_DEFAULT);

	return ret;
}

void l_applyColor(int i_color)
{
	puts("\x1B[31;40m");
}

void main()
{
	puts("HELLO");

	wcPuts("BLACK", CT_PRINT_BLACK);
	wcPuts("BLUE", CT_PRINT_BLUE);
	wcPuts("GREEN", CT_PRINT_GREEN);
	wcPuts("CYAN", CT_PRINT_CYAN);
	wcPuts("RED", CT_PRINT_RED);
	wcPuts("MAGENTA", CT_PRINT_MAGENTA);
	wcPuts("ORANGE", CT_PRINT_ORANGE);
	wcPuts("GRAY", CT_PRINT_GRAY);
	wcPuts("DARKGRAY", CT_PRINT_DARKGRAY);
	wcPuts("WHITE", CT_PRINT_WHITE);

	wcPutc('1', CT_PRINT_BLACK);
	wcPutc('1', CT_PRINT_BLUE);
	wcPutc('1', CT_PRINT_GREEN);
	wcPutc('1', CT_PRINT_CYAN);
	wcPutc('1', CT_PRINT_RED);
	wcPutc('1', CT_PRINT_MAGENTA);
	wcPutc('1', CT_PRINT_ORANGE);
	wcPutc('1', CT_PRINT_GRAY);
	wcPutc('1', CT_PRINT_DARKGRAY);
	wcPutc('1', CT_PRINT_WHITE);

	getchar();
}