#include <stdio.h>

int count_ones(unsigned char ch);

int main(void) {

    unsigned char ch = '7';
    int result = count_ones(ch);
    printf("%d", result);
	return 0;
}

int count_ones(unsigned char ch) {
    int count = 0;
    int ch_int = ch - '0';
    while (ch_int > 0) {
        if (ch_int & 1) {
            count++;
        }
        ch_int >>= 1;
    }
    return count;
}