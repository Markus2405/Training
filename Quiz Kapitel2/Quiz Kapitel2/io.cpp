#include "io.h"

#include <iostream>

#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>


int readNumber() {

	PLOGD << "readNumber() called";

	std::cout << "Enter your number: ";
	int value{};
	std::cin >> value;

	return value;
}

void writeAnswer(int firstNum, int secondNum) {
	PLOGD << "writeAnswer() called";

	std::cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << ".\n";
}