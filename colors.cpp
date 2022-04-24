#include "colors.h"

#include <Windows.h>

void COLOR(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}