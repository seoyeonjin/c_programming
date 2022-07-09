#include <stdio.h>

int main(void) {
	
	char str[] = "abc";
	printf("%s", str);
	// a 실행 후 *str = 0 -> null의 아스키코드 값은 0. null을 나타냄.
	// b 실행 후 str[0] = '\0' -> string 끝을 나타내는 코드. null을 나타냄. 
	// c 실행 후 strcpy(str, "") -> ""를 str으로 복사. null
	// d 실행 후 strcat(str, "") -> str + "" 

	// 따라서 d를 실행했을 때는 나머지 세 개와 동작이 다르다.

	return 0;
}