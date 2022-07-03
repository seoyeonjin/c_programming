#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("Enter a first and last name: ");
	
	char first, extra, last; 

	first = getchar();


	while ((extra = getchar()) != ' ');
	
	while ((last = getchar()) != '\n') {
		if (last != ' ')
			printf("%c", last);
	}
	printf(", %c", first);
	return 0;
}