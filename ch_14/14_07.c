#include <stdio.h>

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
	return x > y ? x : y;       \
}

// (a)
// GENERIC_MAX(long) -> long long_max(long x, log y) { return x > y ? x : y; }

// (b)
// 전달된 unsigned long은 함수 이름을 만드는 데에 사용된다. 함수 이름은 공백을 포함할 수 없다. 

// (c)
// #define을 이용해 unsigned long을 unsigneda_long 등의 공백이 없는 문자열로 정의한 뒤 
// type에 넣어 사용한다. 
