#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(const char* message);

int main(void) {

	printf("Enter a message: ");
	char str[100];
	char array[100];
	int count = 0;
	gets(str);
	bool result = is_palindrome(str);

	if (result) {
		printf("Palindrome");
	}
	else
		printf("Not a palindrome");

	return 0;
}

bool is_palindrome(const char* message) {
	char* i = message;
	char* j = message + strlen(message) - 1;
	bool result = true;
	while (i <= j) {
		char ch_1 = toupper(*i);
		char ch_2 = toupper(*j);
;		if (ch_1 < 'A' || ch_1 >'Z') {
			i++;
			continue;
		}
		if (ch_2 < 'A' || ch_2 >'Z') {
			j--;
			continue;
		}
		if (ch_1 != ch_2) {
			result = false;
			break;
		}
		i++;
		j--;
	}
	return result;
}