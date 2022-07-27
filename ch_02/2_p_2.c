#include <stdio.h>
# define RADIUS 10
#define pi 3.141592

int main(void) {
	float volume = 4.0f / 3.0f * pi * RADIUS * RADIUS * RADIUS;
	printf("%f", volume);
	return 0;
}