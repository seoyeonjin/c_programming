#include <stdio.h>

int main(void) {
	char c;
	char ch_array[14];
	int index = 0;

	printf("Enter phone number: ");

	while ((c = getchar()) != '\n') {
		ch_array[index] = c;
		index++;
	}

	printf("In numeric form: ");

	for (int i = 0 ; i < 14; i++) {
		char c = ch_array[i];
		if (c == 'A' || c == 'B' || c == 'C')
			printf("2");
		else if (c == 'D' || c == 'E' || c == 'F')
			printf("3");
		else if (c == 'G' || c == 'H' || c == 'I')
			printf("4");
		else if (c == 'J' || c == 'K' || c == 'L')
			printf("5");
		else if (c == 'M' || c == 'N' || c == 'O')
			printf("6");
		else if (c == 'P' || c == 'Q' || c == 'R' || c == 'S')
			printf("7");
		else if (c == 'T' || c == 'U' || c == 'V')
			printf("8");
		else if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
			printf("9");
		else
			printf("%c", c);
	}


	return 0;
}