#include <iostream>

double enterValue() {
	std::cout << "Enter a double value: ";
	double d{};
	std::cin >> d;
	return d;
}

char opSign() {
	std::cout << "enter one of the following: +, -, * or /: ";
	char ch{};
	std::cin >> ch;

	return ch;
}
void mathOp(char ch, double firstValue, double secondValue) {
		
	if (ch == '+')
		std::cout << firstValue << " ch " << secondValue << " is " << firstValue + secondValue;
	else if (ch == '-')
		std::cout << firstValue << " ch " << secondValue << " is " << firstValue - secondValue;
	else if (ch == '*')
		std::cout << firstValue << " ch " << secondValue << " is " << firstValue * secondValue;
	else if (ch == '/')
		std::cout << firstValue << " ch " << secondValue << " is " << firstValue / secondValue;


	}
		

int main() {

	double firstValue{enterValue()};
	double secondValue{ enterValue() };
	
	
	char ch{ opSign()};
	//std::cout << ch << '\n';

	mathOp(ch, firstValue, secondValue);

	return 0;
}