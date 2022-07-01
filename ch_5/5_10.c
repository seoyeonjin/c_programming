#include <stdio.h>	

int main(void) {
	int i = 1;
	switch (i % 3) {
		case 0: printf("zero");
		case 1: printf("one");
		case 2: printf("two");
	}
	//출력은 onetwo
	//break가 없으므로 case 1에 해당되는 코드 출력 후 그 뒤의 코드도 출력함
	return 0;
}