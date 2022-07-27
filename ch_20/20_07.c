#include <stdio.h>

unsigned int rotate_left(unsigned int i, int n);
unsigned int rotate_right(unsigned int i, int n);
const char* byte_to_binary(int x);
void binary_string(int x);

int main(void) {
	
	unsigned int number = 0x12345678;

	unsigned int left_result = rotate_left(number, 4);
	unsigned int right_result = rotate_right(number, 4);
	//binary_string(left_result);
	binary_string(right_result);
	return 0;
}

unsigned int rotate_left(unsigned int i, int n) {
	return ((i << n) | (i >> (sizeof(int) * 8) - n)); 
}

unsigned int rotate_right(unsigned int i, int n){
	return (i >> n | (i << (sizeof(int) * 8) - n));
}

void  binary_string(int x) {
	for (int i = sizeof(int) -1; i >= 0; i--)
		printf("%s", byte_to_binary(x >> (i * 8)));
	printf("\n");
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