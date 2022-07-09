#include <stdio.h>

char* duplicate(const char* p) {
	char* q; //q는 아무것도 가리키지 않음. 초기화 해줘야 함.

	strcpy(q, p); 
	return q;
}

int main(void) {

	return 0;
}