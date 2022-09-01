#include "IO.h"

#include <iostream>

int getUserInput() {
	
	std::cout << "Enter your number: ";
	int num{};
	std::cin >> num;

	return num;
}

char getMathOperatorInput() {
	std::cout << "Enter your operator: ";
	char operant{};
	std::cin >> operant;
	if (operant == '+') {
		return operant;
	}
	else if (operant == '-') {
		return operant;
	}
	else if (operant == '*') {
		return operant;
	}
	else if (operant == '/') {
		return operant;
	}
	else {
		std::cout << "You entered a wrong operator!\n";
		std::cout << "Use only +, - ,* or /!! \n";
		
		
		//return 0;
	}
	

	return 0;
}

