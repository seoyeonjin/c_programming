#include <stdio.h>

int main(void) {

	printf("%c", '\n'); // correct. %c�� char type�� ����Ʈ�Ѵ�. 
	
	// printf("%c", "\n"); // incorrect. %c�� char type�� ����Ʈ�Ѵ�. 
	// printf("%s", '\n'); //incorrect - char*�� ���޵Ǳ� ����. �׷��� ���޵� ���� char
	
	printf("%s", "\n"); //correct
	// printf('\n'); //incorrect. printf�� �����͸� ����. '\n'�� char type 

	printf("\n"); //correct 
	putchar('\n'); //correct 
	// putchar("\n"); //incorrect. putchar�� char type�� ���� 
	// puts('\n'); //incorrect. puts�� �����͸� ����

	puts("\n"); //correct 
	puts(""); //correct

	return 0;
}