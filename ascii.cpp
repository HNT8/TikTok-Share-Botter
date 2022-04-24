#include "ascii.h"

#include <iostream>

const char* LINE1 = R"(       _______ _ _ _______    _       _____ _                      ____        _   )";
const char* LINE2 = R"(      |__   __(_) |__   __|  | |     / ____| |                    |  _ \      | |  )";
const char* LINE3 = R"(         | |   _| | _| | ___ | | __ | (___ | |__   __ _ _ __ ___  | |_) | ___ | |_ )";
const char* LINE4 = R"(         | |  | | |/ / |/ _ \| |/ /  \___ \| '_ \ / _` | '__/ _ \ |  _ < / _ \| __|)";
const char* LINE5 = R"(         | |  | |   <| | (_) |   <   ____) | | | | (_| | | |  __/ | |_) | (_) | |_ )";
const char* LINE6 = R"(         |_|  |_|_|\_\_|\___/|_|\_\ |_____/|_| |_|\__,_|_|  \___| |____/ \___/ \__|)";
const char* LINE7 = R"(                                                                                   )";

void ASCII() {
	std::cout << LINE1 << std::endl;
	std::cout << LINE2 << std::endl;
	std::cout << LINE3 << std::endl;
	std::cout << LINE4 << std::endl;
	std::cout << LINE5 << std::endl;
	std::cout << LINE6 << std::endl;
	std::cout << LINE7 << std::endl;
}