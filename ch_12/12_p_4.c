#include <stdio.h>
#include <stdbool.h>

int main(void) {

	printf("Enter a message: ");
	char ch;
	char array[100];
	int count = 0;
	while ((ch = getchar()) != '\n') {
		ch = toupper(ch);
		if (ch >= 'A' && ch <= 'Z') {
			array[count++] = ch;
		}
	}

	char* i = array; // 가장 앞
	char* j = array + count -1; // 가장 뒤
	bool result = true;

	while (i <= j) {
		if (*i != *j) {
			result = false;
			break;
		}
		i++;
		j--;
	}

	if (result) {
		printf("Palindrome");
	}
	else
		printf("Not a palindrome");

	return 0;
}