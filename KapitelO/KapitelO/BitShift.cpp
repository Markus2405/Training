#include <bitset>
#include <iostream>
#include "BitShift.h"



void printBits() {

	std::bitset<8> bits{ 0b0000'0101 };

	std::cout << "All the initial bits: \t" << bits << '\n';
	bits.set(3);

	std::cout << "Bits after set 3: \t" << bits << '\n';
	bits.flip(1);
	std::cout << "Bits after flip 1: \t" << bits << '\n';
	bits.reset(2);
	std::cout << "Bits after reset 2: \t" << bits << '\n';
}

void bitShift() {
	std::bitset<4> x { 0b1100 };
	std::cout << x << '\n';
	std::cout << (x << 1) << '\n';
	std::cout << (x >> 1) << '\n';

}


void bitOutput() {
	std::bitset<4> x{ 0b0110 };

	std::cout << x << 1 << '\n';
	std::cout << (x << 1) << '\n';

}

void bitNot() {
	std::cout << ~std::bitset<4> {0b0011} << ' ' << ~std::bitset<8> {0b0011} << '\n';
}

void bitOr() {
	std::cout << (std::bitset<4> {0b0101} | std::bitset<4> {0b0011} | std::bitset<4> {0b1010}) << '\n';
}

void bitAnd() {
	std::cout << (std::bitset<4> {0b0101} & std::bitset<4> {0b0011} & std::bitset<4> {0b1010}) << '\n';
}

void bitXor() {
	std::cout << (std::bitset<4> {0b0101}^ std::bitset<4> {0b0011}^ std::bitset<4> {0b1010}) << '\n';
}


std::bitset<4> rotl(std::bitset<4> bits) {
	
	/*std::bitset<4> bitsNew{0b0000};

	if (bits.test(0))
		bitsNew.set(1);
	if (bits.test(1))
		bitsNew.set(2);
	if (bits.test(2))
		bitsNew.set(3);
	if (bits.test(3))
		bitsNew.set(0);
	return bitsNew;
	*/


	/*
	const bool leftbit{ bits.test(3) };

	bits <<= 1;
	if (leftbit)
		bits.set(0);
	return bits;
*/



	return (bits << 1 | bits >> 3);
}


void printBitset(std::bitset<4> bitsInput, std::bitset<4> bitsOutput) {
	std::cout << "Input:  " << bitsInput << '\n';
	std::cout << "Output: " << bitsOutput << '\n';
}