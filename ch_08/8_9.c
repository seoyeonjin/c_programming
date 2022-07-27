#include <stdio.h>
#define DAYS 30
#define HOURS 24
int main(void) {
	float temperature_readings[DAYS][HOURS];
	float temperature = 0.0f;
	float average_temp[DAYS];
	float sum = 0;

	for (int i = 0; i < DAYS; i++) {
		for (int j = 0; j < HOURS; j++) {
			temperature_readings[i][j] = temperature;
			temperature = temperature + 1;
		}
	} 

	for (int i = 0; i < DAYS; i++) {
		for (int j = 0; j < HOURS; j++) {
			sum = sum + temperature_readings[i][j];
		}
		average_temp[i] = sum / HOURS;
		sum = 0;
	}

	for (int i = 0; i < DAYS; i++) {
		printf("Day %d: %7.1f\n", i+1, average_temp[i]);
	}


	return 0;
}