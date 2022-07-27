#include <stdio.h>
#define DAYS 30
#define HOURS 24
int main(void) {
	float temperature_readings[DAYS][HOURS];
	float temperature = 0.0f;

	for (int i = 0; i < DAYS; i++) {
		for (int j = 0; j < HOURS; j++) {
			temperature_readings[i][j] = temperature;
			temperature = temperature + 1;
		}
	}

	for (int i = 0; i < DAYS; i++) {
		printf("Day %.2d ", i + 1);
		for (int j = 0; j < HOURS; j++) {
			printf("%7.1f", temperature_readings[i][j]);
		}
		printf("\n");
	}
	return 0;
}