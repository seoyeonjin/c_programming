#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char message[100] = { 0 };
	char ch;
	int index = 0; 

	printf("Enter message: ");
	
	while ((ch = getchar()) != '\n') {
		ch = toupper(ch);
		if (ch == 'A')
			ch = '4';
		else if (ch == 'B')
			ch = '8';
		else if (ch == 'E')
			ch = '3';
		else if (ch == 'I')
			ch = '1';
		else if (ch == 'O')
			ch = '0';
		else if (ch == 'S')
			ch = '5';
			
		message[index] = ch;
		index++;
	}

	for (int i = 0; i < (int)(sizeof(message) / sizeof(message[0])); i++) {
		printf("%c", message[i]);
	}
	printf("!!!!!!!!!!");
	return 0;
}