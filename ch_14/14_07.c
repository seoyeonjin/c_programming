#include <stdio.h>

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
	return x > y ? x : y;       \
}

// (a)
// GENERIC_MAX(long) -> long long_max(long x, log y) { return x > y ? x : y; }

// (b)
// ���޵� unsigned long�� �Լ� �̸��� ����� ���� ���ȴ�. �Լ� �̸��� ������ ������ �� ����. 

// (c)
// #define�� �̿��� unsigned long�� unsigneda_long ���� ������ ���� ���ڿ��� ������ �� 
// type�� �־� ����Ѵ�. 
