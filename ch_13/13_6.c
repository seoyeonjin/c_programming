#include <stdio.h>
#include <string.h>

void censor(char str[]);

int main(void) {

	char str[] = "abc fool food";
	censor(str);
	printf("%s", str);
	return 0;
}

void censor(char str[]) {
	for (int i = 0; i < strlen(str) - 2; i++) {
		printf("%c ", str[i]);
		if (str[i] == 'f' && str[i + 1] == 'o' && str[i + 2] == 'o') {
			str[i] = 'x';
			str[i + 1] = 'x';
			str[i + 2] = 'x';
			i = i + 2;
		}
			  
;	}
}