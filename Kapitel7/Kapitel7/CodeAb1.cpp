#include <cassert>
#include <iostream>
#include <chrono>
#include <random>
#include "CodeAb1.h"
#include "constants.h"

int enterInteger() {
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	return x;
}

//modified for 7.5
void printIntInput(int x) {
	//std::cout << "You entered " << x << '\n';
	//7.5
	if (failure)
		std::cout << "Result = " << x << '\n';
}
//7.2
void greaterThanTen(int x) {
	if (x > 10) {
		std::cout << x << " is greater than 10\n";
	}
	else {
		std::cout << x << " is smaller than 10\n";
	}
}

//7.4
void printDigitName(int x) {
	switch (x) {
	case 1:
		std::cout << "One\n";
		return;
	case 2:
		std::cout << "Two\n";
		return;
	case 3:
		std::cout << "Three\n";
		return;
	default:
		std::cout << "Unknown\n";
		return;
	}
}
//7.5
int calculate(int a, int b, char op) {
	failure = 1;

	switch (op) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	case '%':
		return a % b;
	default:
		std::cerr << "Unhandled Case\n";
		failure = 0;
		return 0;
	}
}

char enterOperator() {
	std::cout << "Enter an operator: ";
	char op{};
	std::cin >> op;
	return op;
}
//7.7
void printTen(int x) {
	int count{ 1 };
	while (count <= x && count <=20000) {
		std::cout << count << ' ';
		++count;
	}
	std::cout << " done!\n";
}

void printNewLine(int x) {
	int count{ 1 };
	while (count <= x && count <= 20000) {
		if (count < 10) {
			std::cout << "000";
		}
		else if (count < 100) {
			std::cout << "00";
		}
		else if (count < 1000) {
			std::cout << '0';
		}

		std::cout << count << ' ';
		if (count % 10 == 0) {
			std::cout << '\n';
		}

		count++;

	}
}

void printAToZ() {
	/*
	int count{ static_cast<int>('a') };
	while (count <= static_cast<int>('z')) {
		std::cout << static_cast<char>(count) << ' ' << count << '\n';
		count++;
	}
	*/

	char ch{ 'a' };
	while (ch <= 'z') {
		std::cout << ch << ' ' << static_cast<int>(ch) << '\n';
		++ch;
	}

}

void nestedLoopInvert() {
	int outerCount{ 5 };
	while (outerCount > 0) {
		int innerCount{ outerCount }; 
		while(innerCount > 0) {
			std::cout << innerCount << ' ';
			--innerCount;
		}
		std::cout << '\n';
		--outerCount;
	}
}

void nestedLoop2() {
	int outerCount{ 1 };
	while (outerCount <= 5) {
		
		int space{ 5 };
		while (space - outerCount != 0) {
			std::cout << "  ";
			space--;
		}
		int innerCount{ 1 };
		while (innerCount <= outerCount) {			
			std::cout << innerCount++ << ' ';
		}
		std::cout << '\n';
		outerCount++;
	}
}

//7.9
void printEvenNumber() {
	for (int i = 0; i < 21; i++) {
		if (i % 2 == 0) {
			std::cout << i << ' ';
		}
	}
}
void sumTo(int value) {
	int sum{ 0 };
	for (int i{ 1 }; i <= value;i++) {
		sum = sum + i;
	}
	std::cout << sum;
}

//7.10
void breakOrReturn() {
	while (true) {
		std::cout << "Enter 'b' to break or 'r' to return!";
		char ch{};
		std::cin >> ch;

		if (ch == 'b')
			break;
		if (ch == 'r')
			return;
	}

	std::cout << "We broke out of the loop";
}

void countWithoutFour() {
	for (int i{ 0 }; i < 10; i++) {
		if ((i % 4) == 0) {
			continue;
		}

		std::cout << i << '\n';	
	}
}

//7.16
void simpleCalc(double x, char operation, double y) {
	switch (operation) {
	case '+':
		std::cout << x << " + " << y << " is " << x + y << '\n';
		break;
	case '-':
		std::cout << x << " - " << y << " is " << x - y << '\n';
		break;
	case '*':
		std::cout << x << " * " << y << " is " << x * y << '\n';
		break;
	case '/':
		std::cout << x << " / " << y << " is " << x / y << '\n';
		break;
	}
}
double getDouble() {
	while (true) {
		std::cout << "Enter a double value: ";
		double x{};
		std::cin >> x;

		if (!std::cin) {
			std::cin.clear();
			ignoreLine();
			std::cerr << "Invalid input. Try again. \n";
		}
		else {
			ignoreLine();
			return x;
		}
	}
}
char getOperator() {
	while (true) {
		std::cout << "Enter one of the following operator: +, -, * or /: ";
		char op{};
		std::cin >> op;
		switch (op) {
		case '+':
		case '-':
		case '*':
		case '/':
			ignoreLine();
			return op;
		default:
			std::cerr << "Invalid input. Try again. \n";
		}
	}
}
void startCalc() {
	double x{ getDouble() };
	char operation{ getOperator() };
	double y{ getDouble() };

	simpleCalc(x, operation, y);

}
void ignoreLine() {
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

//7.17
double calculateTimeUntilObjectHitsGround(double initialHeight, double gravity) {
	assert(gravity > 0.0 && "this is a negativ gravity");
	if (initialHeight <= 0.0) {
		return 0.0;
	}

	return std::sqrt((2.0 * initialHeight) / gravity);
}
void printTimeUntilObjectHitsGround(double time) {
	std::cout << "Took " << time << " seconds\n";
}

//7.18
int plusOne() {
	static int s_state{ 3 };
	++s_state;
	return s_state;
}
void printPlusOne() {
	std::cout << plusOne() << '\n';
}

//7.19
void randomPrint() {
	//std::mt19937 mt{ static_cast<unsigned int>(std::chrono::steady_clock::now().time_since_epoch().count())};
	
	//std::mt19937 mt{ std::random_device{}() };

	std::random_device rd;
	std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(),rd(),rd() };
	std::mt19937 mt{ ss };
	std::uniform_int_distribution die6{ 1,6 };
	for (int count{ 1 }; count <= 40; ++count) {
		std::cout << die6(mt) << '\t';
		if (count % 5 == 0) {
			std::cout << '\n';
		}
	}
}

//7 Quiz 1

double calculateHeight(double initialHeight, int seconds) {
	double distanceFallen{ myConstants::gravity * seconds * seconds / 2 };
	double heightNow{ initialHeight - distanceFallen };
	if (heightNow < 0.0) {
		return 0.0;
	}
	else
		return heightNow;
}
/*void calculateAndPrintHeight(double initialHeight, int time) {
	std::cout << "At " << time << " seconds, the ball is at height: " << calculateHeight(initialHeight, time) <<'\n';
}
*/
bool calculateAndPrintHeight(double initialHeight, int time) {
	double currentHeight{ calculateHeight(initialHeight,time) };
	std::cout << "At " << time << " seconds, the ball is at height: " << calculateHeight(initialHeight, time) << '\n';
	return (currentHeight == 0.0);
}
void fallTime() {
	std::cout << "enter the initial height of the tower in meters: ";
	double initialHeight{};
	std::cin >> initialHeight;
	int time{ 0 };

	/*while (calculateHeight(initialHeight, time)) {
		calculateAndPrintHeight(initialHeight, time);
		++time;

	}
	calculateAndPrintHeight(initialHeight, time);
	*/

	while (!calculateAndPrintHeight(initialHeight, time)) {
		++time;
	}

}

//7 Quiz 2
bool isPrime(int x) {

	
	int moduloZeroCounter{ 0 };
	for (int i{ 1 }; i <= x; ++i) {
		if (x % i == 0)
			++moduloZeroCounter;
	}
	if (moduloZeroCounter == 2)
		return true;
	else
		return false;

}
void primeNumbers() {
	assert(!isPrime(0));
	assert(!isPrime(1));
	assert(isPrime(2));
	assert(isPrime(3));
	assert(!isPrime(4));
	assert(isPrime(5));
	assert(!isPrime(6));
	assert(isPrime(7));
	assert(!isPrime(9));
	assert(isPrime(11));
	assert(isPrime(13));
	assert(!isPrime(15));
	assert(!isPrime(16));
	assert(isPrime(17));
	assert(isPrime(19));
	assert(isPrime(97));
	assert(!isPrime(99));
	assert(isPrime(13417));

	std::cout << "Success!\n";
}

//7 Quiz 3
int randomNumber() {
	std::random_device rd;
	std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(),rd(),rd() };
	std::mt19937 mt{ ss };
	std::uniform_int_distribution die100{ 1,100 };

	return die100(mt);
}

void hiLoGame(int randomInt) {
	std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is!\n";
	do {
		int guess{ 0 };
		for (int i = 1; i <= 7; ++i) {
			std::cout << "Guess #" << i << ':';
			guess = guessInput();
			
			if (guess < randomInt)
				std::cout << "Your guess is too low.\n";
			else if (guess > randomInt)
				std::cout << "Your guess is too high.\n";
			
			else if (guess==randomInt) {				
				std::cout << "Correct! You win!\n";
				break;
			}
			if (i >= 7) {
				std::cout << "Sorry you lose. The correct number was " << randomInt << ".\n";
			}
		}
	}
	while (playAgain());
	std::cout << "Thank you for playing.";
}

bool playAgain() {
	char playAgain{};
	while (true) {
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> playAgain;
		if (playAgain == 'y') {
			ignoreLine();
			return true;
		}
		else if (playAgain == 'n') {
			ignoreLine();
			return false;
		}
		else {
			std::cin.clear();
			ignoreLine();
		}
	}
}

int guessInput() {
	int guess{ 0 };
	while (true) {
		std::cin >> guess;
		if (!std::cin) {
			std::cin.clear();
			ignoreLine();
			std::cerr << "Invalid input. Try again. \n";
		}
		else if (guess < 1)
			std::cout << "Input to low. Enter a number between 1 and 100!";
		else if (guess > 100)
			std::cout << "Input to high. Enter a number between 1 and 100!"; 
		else {
			std::cin.clear();
			ignoreLine();
			return guess;
		}
	}

}


