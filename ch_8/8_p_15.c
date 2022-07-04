#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char input_ch;
	char ch_array[80];
	int index = 0, amount;
	printf("Enter message to be encrypted: ");
	
	while ((input_ch = getchar()) != '\n') {
		ch_array[index] = input_ch;
		index++;
	}

	printf("Enter shift amount (1-25): ");
	scanf("%d", &amount);

	for (int i = 0; i < index; i++) {
		char ch = ch_array[i];
		if (ch >= 'A' && ch <= 'Z') {
			ch_array[i] = ((ch - 'A') + amount) % 26 + 'A';
		}
		else if (ch >= 'a' && ch <= 'z'){
			ch_array[i] = ((ch - 'a') + amount) % 26 + 'a';
		}
	}


	printf("Encrypted message: ");
	for (int i = 0; i < index; i++) {
		printf("%c", ch_array[i]);
	}
	return 0;
}