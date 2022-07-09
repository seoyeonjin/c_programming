#include <stdio.h>

int main(void) {

	printf("%c", '\n'); // correct
	
	// printf("%c", "\n"); // incorrect 
	// printf("%s", '\n'); //incorrect - char*가 전달되길 원함. 그러나 전달된 값은 char
	
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