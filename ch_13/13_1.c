#include <stdio.h>

int main(void) {

	printf("%c", '\n'); // correct
	
	// printf("%c", "\n"); // incorrect 
	// printf("%s", '\n'); //incorrect - char*�� ���޵Ǳ� ����. �׷��� ���޵� ���� char
	
	printf("%s", "\n"); //correct
	// printf('\n'); //incorrect

	printf("\n"); //correct 
	putchar('\n'); //correct 
	// putchar("\n"); //incorrect 
	// puts('\n'); //incorrect 

	puts("\n"); //correct 
	puts(""); //correct 

	return 0;
}