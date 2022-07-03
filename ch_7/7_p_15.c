#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	double fac = 1.0f;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		fac = fac * i;
		if (fac > 9223372036854775807) {
			printf("max: %d\n", i);
			break;
		}
	}

	printf("%lf", fac);

	//(a) short일때  7까지 정확한 결과를 얻을 수 있다. 
	//(b) int일 때 12까지 정확한 결과를 얻을 수 있다. 
	//(c) long일 때 12까지 정확한 결과를 얻을 수 있다. 
	//(d) long long일 때 20까지 정확한 결과를 얻을 수 있다. 
	//(e) float일 때 34까지 정확한 결과를 얻을 수 있다. 
	//(f) double일 때 170까지 정확한 결과를 얻을 수 있다. 
	//(g) long double일 때 170까지 정확한 결과를 얻을 수 있다. 
	
	return 0;
}