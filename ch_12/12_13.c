#include <stdio.h>
#define N 10

int main(void) {

	double ident[N][N];
	int k = 0; 

	for (double *p = &ident[0][0]; p <= &ident[N-1][N-1]; p++) {
		//printf("K: %d", k);
		if (k % (N + 1) == 0)
			*p = 1.0;
		else
			*p = 0.0;
		k++;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%lf ", ident[i][j]);
		}
		printf("\n");
	}
	return 0;
}