#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define true 1
#define false 0

int main(void) {
	int age, teenager;
	scanf("%d", &age);
	teenager = (age >= 13 && age <= 19 ? true : false);
	printf("%d\n", teenager);
	if (age >= 13 && age <= 19) {
		teenager = true;
	}
	else {
		teenager = false;
	}
	printf("%d\n", teenager);
	return 0;
}