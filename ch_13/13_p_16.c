#include <stdio.h>
#define SIZE 100

void reverse(char* message);

int main(void) {

	printf("Enter a message: ");

	char ch;
	char* message[100];
	char array[100];
	int count = 0;
	gets(message);
	reverse(message);
	printf("Reversal is: %s", message);

	/*char* i = &array[count - 1];
	while (i >= array) {
		printf("%c", *i--);
	}
	printf("\n");

	for (char* i = &array[count - 1]; i >= array; i--) {
		printf("%c", *i);
	}

	printf("\n");
	for (char i = count - 1; i >= 0; i--) {
		printf("%c", array[i]);
	}*/
	return 0;
}

void reverse(char* message) {
	char* i = message;
	char* j = message + strlen(message) -1;

	while (i < j) {
		char temp = *i; 
		*i = *j; 
		*j = temp;
		i++;
		j--;
	}
}