#include <stdio.h>

float compute_GPA(char grades[], int n);

int main(void) {
	
	float result;
	char grades[] = { 'A', 'a', 'b', 'B', 'C' };
	int n = 5;
	result = compute_GPA(grades, n);
	printf("Result: %f", result);

	return 0;
}

float compute_GPA(char grades[], int n) {
	int sum = 0; 
	for (int i = 0; i < n; i++) {
		switch (grades[i]) {
		case 'A':
		case 'a':
			sum += 4;
			break;
		case 'B':
		case 'b':
			sum += 3;
			break;
		case 'C':
		case 'c':
			sum += 2;
			break;
		case 'D':
		case 'd':
			sum += 1;
			break;
		default:
			break;
		}
	}
	return (float)sum / n;
}