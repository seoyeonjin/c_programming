#include <stdio.h>

int count_ones_a(unsigned char ch);
int count_ones_b(unsigned char ch); // without using a loop

int main(void) {

    unsigned char ch = '8';
    int result = count_ones_b(ch);
    printf("%d", result);
	return 0;
}

int count_ones_a(unsigned char ch) {
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

int count_ones_b(unsigned char ch) {
    int count = 0;
    int ch_int = ch - '0';

    return ((ch_int & 1)
        + ((ch_int >> 1) & 1)
        + ((ch_int >> 2) & 1)
        + ((ch_int >> 3) & 1)
        + ((ch_int >> 4) & 1)
        + ((ch_int >> 5) & 1)
        + ((ch_int >> 6) & 1)
        + ((ch_int >> 7) & 1));
}