#include "IO.h"

#include <iostream>



int main() {
	// get First number
	int firstValue{ getUserInput()};
	
	// get the mathematical operator from User
	char operant{ getMathOperatorInput() };
	std::cout << operant;

	// get second Number
	//getUserInput();
	
	// Calculate thr result
	//calculateResult();

	// Output of the result
	//writeResult();

	return 0;
}