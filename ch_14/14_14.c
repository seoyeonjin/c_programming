#include <stdio.h>
#define N 10 // N = 10 은 에러 발생 -> N 10
#define INC(x) x+1 // (x+1)
#define SUB(x, y) x - y
#define SQR(x) ((x) * (x))
#define CUBE(x) (SQR(x) * (x))
#define M1(x,y) x##y
#define M2(x,y) #x #y

/*
int main(void) {

	int a[N], i, j, k, m;

#ifdef N
	i = j;
#else
	j = i;
#endif
	i = 10 * INC(j);
	i = SUB(j, k);
	i = SQR((SQR(j)));
	i = CUBE(j);
	i = M1(j, k);
	puts(M2(i, j));

#undef SQR
	i = SQR(j);
#define SQR
	i = SQR(j);

	return 0;
}
*/

/*
int main(void) {
	int a[=10], i, j, k, m;

	i = j;

	i = 10 * j + 1; // 에러발생. 원하는 결과는 10 * (j + 1) 
	i = j - k;
	i = ((((j) * (j))) * (((j) * (j))));
	i = (((j) * (j)) * (j));
	i = jk; //jk가 정의되지 않음
	puts("i" "j");

	i = SQR(j); //undef
	i = SQR(j); //다시 정의만 된 상태

	return 0;
}
*/