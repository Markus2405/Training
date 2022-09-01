#include <iostream>


// Function to return a value to the caller
int getValueFromUser() {
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;														// return the value which a user entered back to the caller
}

void printDouble(int num) {
	//int num{ getValueFromUser() };
	std::cout << num << " doubled is: " << num * 2 << '\n';
}

void printHi() {
	std::cout << "Hi" << '\n';											// return is in void not needed
}

int doubleNumber(int value) {
	return value * 2;
}


int main() {
//	int num{getValueFromUser()};
/*	
	std::cout << num << " doubled is: " << num * 2 << '\n';
*/
	//printDouble(getValueFromUser());

/*	int x{getValueFromUser()};
	int y{ getValueFromUser() };

	std::cout << x << " + " << y << " = " << x + y << '\n';
*/
	std::cout << doubleNumber(getValueFromUser()) << '\n';

	printHi();
	
	return 0;
}




