#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define pi 3.141592

int main(void) {
	int radious;
	scanf("%d", &radious);
	float volume = 4.0f / 3.0f * pi * radious * radious * radious;
	printf("%f", volume);
	return 0;
}