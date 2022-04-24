#include "console.h"
#include "colors.h"

void PRINT(std::string text) {
	COLOR(COLORS::BRIGHT_WHITE);
	printf("       [");
	COLOR(COLORS::MAGENTA);
	printf("Console");
	COLOR(COLORS::BRIGHT_WHITE);
	printf("] ");
	printf(text.c_str());
	printf("\n");
	COLOR(COLORS::DEFAULT);
}