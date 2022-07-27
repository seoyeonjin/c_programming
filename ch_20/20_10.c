#include <stdio.h>

unsigned int reverse_bits(unsigned int n);
const char* byte_to_binary(int x); 

int main(void) {
	unsigned int n = 12;
	unsigned int result = reverse_bits(n);
	printf("bits: %s %d\n", byte_to_binary(n), n);
	printf("reverse bits: %s %d", byte_to_binary(result), result);
	return 0;
}

unsigned int reverse_bits(unsigned int n) {
	unsigned int result = 0;
	unsigned int one = 1;

	while (n > 0) { 
		if (n & 0x80)
			result |= one;
		one <<= 1;
		n <<= 1;
	}

	return result;
}

const char* byte_to_binary(int x)
{
	static char b[9];
	b[0] = '\0';

	int z;
	for (z = 128; z > 0; z >>= 1)
	{
		strcat(b, ((x & z) == z) ? "1" : "0");
	}
	return b;
}