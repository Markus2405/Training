#include "Code.h"
#include "Code6_4.h"
#include "constants.h"
#include <iostream>

int main() {

//	printText();
//	int x{ enterInteger() };
//	int y{ enterLargerInteger() };

//	printResult(x, y);

//	incrementAndPrint();
//	incrementAndPrint();
//	incrementAndPrint();


	// Quiz Question 1
/*	std::cout << "Enter a positiv number: ";
	int num{};
	std::cin >> num;

	if (num < 0) {
		std::cout << "Negativ number entered. Making positiv.\n";
		num = -num;
	}

	std::cout << "You entered: " << num;
*/

	//Quiz Question 2
/*	std::cout << "How many students are in your class? ";
	int students{};
	std::cin >> students;
	if (students > constants::max_class_size)
		std::cout << "There are too many students in this class";
	else
		std::cout << "This class isn't too large";
*/


	std::cout << "User #1: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #1: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #1: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #1: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #1: " << (passOrFail() ? "Pass\n" : "Fail\n");


	return 0;
}