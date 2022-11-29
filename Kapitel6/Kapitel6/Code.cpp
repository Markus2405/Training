#include "Code.h"
#include <iostream>

namespace foo {
	int doSomething(int x, int y) {
		return x + y;
	}
}

namespace goo {
	int doSomething(int x, int y) {
		return x - y;
	}
}


void printText() {
	std::cout << foo::doSomething(4, 3) << " Das war foo \n";
	std::cout << goo::doSomething(4, 3) << " Das war goo \n";

}


int enterInteger() {
	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;
	return x;
}

int enterLargerInteger() {
	std::cout << "Enter a larger integer: ";
	int x;
	std::cin >> x;
	return x;
}




void printResult(int smaller, int larger) {
	
	if (smaller > larger) {
		std::cout << "Swapping the values\n";

		int temp{ larger };
		larger = smaller;
		smaller = temp;
	}
	std::cout << "The smaller value is " << smaller << '\n';
	std::cout << "The bigger value is " << larger << '\n';

	
	
	
	/*if (smaller > larger) {
		std::cout << "Swapping the Values\n";
		std::cout << "The smaller value is " << larger << '\n';
		std::cout << "The bigger value is " << smaller << '\n';
	}
	else {

		std::cout << "The smaller value is " << smaller << '\n';
		std::cout << "The bigger value is " << larger << '\n';
	}*/
}