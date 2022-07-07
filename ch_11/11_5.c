#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void split_time(long total_sec, int* hr, int* min, int* sec);

int main(void) {
	long total_sec; 
	int hr, min, sec;

	printf("total sec: ");
	scanf("%ld", &total_sec);
	split_time(total_sec, &hr, &min, &sec);

	printf("total sec: %d = %.2d:%.2d:%.2d\n", total_sec, hr, min, sec);
	return 0;
}

void split_time(long total_sec, int* hr, int* min, int* sec) {
	*hr = total_sec / (60 * 60);
	*min = (total_sec / 60) % 60;
	*sec = total_sec % 60;
}