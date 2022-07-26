#include <stdio.h>
#include <math.h>
#define MK_COLOR(r,g,b) ((b) << 16 | (g) << 8 | (r)) 

const char* byte_to_binary(int x)
{
    static char b[24];
    b[0] = '\0';

    int z;
    for (z = pow(2,23); z > 0; z >>= 1)
    {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }
    return b;
}

int main(void) {
	
	long i = MK_COLOR(3,2,128);
    char* binary = byte_to_binary(i);
	printf("%s", binary);
	return 0;
}