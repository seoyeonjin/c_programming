#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void encrypt(char* message, int shift);

int main(void) {

	char input_ch;
	char ch_array[80];
	int index = 0, amount;
	printf("Enter message to be encrypted: ");

	gets(ch_array);
	/*while ((input_ch = getchar()) != '\n') {
		ch_array[index] = input_ch;
		index++;
	}*/

	printf("Enter shift amount (1-25): ");
	scanf("%d", &amount);

	encrypt(ch_array, amount);
	printf("Encrypted message: ");
	for (int i = 0; i < strlen(ch_array); i++) {
		printf("%c", ch_array[i]);
	}
	return 0;
}

void encrypt(char* message, int shift) {
	for (int i = 0; i < strlen(message); i++) {
		char ch = message[i];
		if (ch >= 'A' && ch <= 'Z') {
			message[i] = ((ch - 'A') + shift) % 26 + 'A';
		}
		else if (ch >= 'a' && ch <= 'z') {
			message[i] = ((ch - 'a') + shift) % 26 + 'a';
		}
	}
}