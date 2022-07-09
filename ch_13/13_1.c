#include <stdio.h>

int main(void) {

	printf("%c", '\n'); // correct. %c는 char type을 프린트한다. 
	
	// printf("%c", "\n"); // incorrect. %c는 char type을 프린트한다. 
	// printf("%s", '\n'); //incorrect - char*가 전달되길 원함. 그러나 전달된 값은 char
	
	printf("%s", "\n"); //correct
	// printf('\n'); //incorrect. printf는 포인터를 받음. '\n'는 char type 

	printf("\n"); //correct 
	putchar('\n'); //correct 
	// putchar("\n"); //incorrect. putchar는 char type을 받음 
	// puts('\n'); //incorrect. puts는 포인터를 받음

	puts("\n"); //correct 
	puts(""); //correct

	return 0;
}