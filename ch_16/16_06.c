#include <stdio.h>

struct time {
	int hours, minutes, seconds; 
};

struct time split_time(long total_seconds);

int main(void) {
	
	struct time t1 = split_time(3601);
	printf("%.2d:%.2d:%.2d", t1.hours, t1.minutes, t1.seconds);
	return 0;
}

struct time split_time(long total_seconds) {
	struct time result;

	result.hours = total_seconds / (60 * 60);
	result.minutes = (total_seconds % (60 * 60)) / 60; 
	result.seconds = total_seconds % 60;

	return result;
}