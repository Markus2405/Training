#include <iostream>

int readNumber()
{
	std::cout << "Please enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

void writeAnswer(float x)
{
	std::cout << "The quotient is: " << x << '\n';
}

int main()
{
	float x{ };
	float y{ };
	x = readNumber();
	y = readNumber();
	writeAnswer(x / y);

	return 0;
}