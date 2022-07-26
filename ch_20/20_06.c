#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned short swap_bytes(unsigned short i);

int main(void) {

	unsigned short number;
	printf("Enter a hexadecimal number (up to four digits): ");
	scanf("%hx", &number);
	number = swap_bytes(number);
	printf("Number with bytes swapped: %hx", number);
	return 0;
}


unsigned short swap_bytes(unsigned short i) {
	// a
	/*
	unsigned short result;
	int first = i >> 8;
	int second = (i & 0xff) << 8;
	result = first | second;
	return result;
	*/

	// b
	return ((i >> 8) | (i & 0xff) << 8);
}