#include <iostream>
#include "Code6_4.h"

void incrementAndPrint() {
	static int s_value{ 1 };
	++s_value;
	std::cout << s_value << '\n';
}

bool passOrFail() {
	static int count { 0 };
	if (count < 3) {
		count++;
		return true;
	}
	else {
		return false;
	}
}