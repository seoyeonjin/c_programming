#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n) {
	int i;

	for (i = 0; i < n; i++)
		if (a[i] == 0)
			return true;
	return false;
	//0이 아닌 수를 만났을 때는 아무동작도 안함. 
	//return false는 for문을 다 돌았을 때에만 동작.
}

int main(void) {
	// 다 zero가 아니면 false
	// 하나라도 zero가 있으면 true
	int a[] = { 1,2,3,4 };
	int n = 4;
	printf("%d", has_zero(a, n));

	return 0;
}