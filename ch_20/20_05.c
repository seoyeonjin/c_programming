#include <stdio.h>
#define MK_COLOR(r,g,b) ((b) << 16 | (g) << 8 | (r)) 
#define GET_RED(color) ((color) & 0xff)
#define GET_GREEN(color) ((color) >> 8 & 0xff)
#define GET_BLUE(color) ((color) >> 16 & 0xff)

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

int main(void) {

    long i = MK_COLOR(3, 2, 128);


    int red = GET_RED(i);
    int blue = GET_BLUE(i);
    int green = GET_GREEN(i);

    printf("red: %d, green: %d, blue: %d\n", red, green, blue);

    char* b_red = byte_to_binary(red);
    printf("red: %s ", b_red);
    char* b_green = byte_to_binary(green);
    printf("green: %s ", b_green);
    char* b_blue = byte_to_binary(blue);
    printf("blue: %s ", b_blue);
    return 0;
}