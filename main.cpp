#include "ascii.h"
#include "colors.h"
#include "console.h"
#include "shares.h"

#include <Windows.h>
#include <conio.h>
#include <iostream>

std::string VideoUrl;

int main() {
	SetConsoleTitleA("TikTok Share Bot | https://hnt8.net");

	printf("\n\n");

	COLOR(COLORS::MAGENTA);
	ASCII();

	COLOR(COLORS::BRIGHT_WHITE);
	printf("       [");
	COLOR(COLORS::MAGENTA);
	printf("Console");
	COLOR(COLORS::BRIGHT_WHITE);
	printf("] TikTok Video ID: ");
	COLOR(COLORS::DEFAULT);

	std::cin >> VideoUrl;

	PRINT("Threads: 1000");

	printf("\n");

	CreateSendThreads(VideoUrl);
}