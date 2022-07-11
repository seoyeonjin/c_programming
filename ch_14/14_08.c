#include <stdio.h>

#define XLINE(x) LINE(x)
#define LINE(x) #x

#define LINE_FILE "Line " XLINE(__LINE__) " of file " __FILE__

int main(void) {
	const char* str = LINE_FILE;
	printf("%s\n", str);
	// 확장 결과를 문자열화하려면 
	// two levels of macros must be used
}