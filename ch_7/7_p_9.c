#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int hour, minute;
	char am_pm;
	printf("Enter a 12-hour time: ");
	scanf("%d:%d", &hour, &minute);

	// scanf("%c", &am_pm);

	am_pm = getchar();
	if (am_pm == ' ') {
		am_pm = getchar();
	}
	am_pm = toupper(am_pm);

	if (am_pm == 'P') {
		hour = (12 + hour) % 24;
	}
		
	printf("Equivalent 24-hour time: %.2d:%d\n", hour, minute);


	return 0;
}