#include <stdio.h>
#include <stdlib.h>

struct {
	union {
		char a, b;
		int c;
	} d;
	int e[5];
} f, * p = &f;

// struct f
// f�� ����Ű�� ������ p 
// f.e or f.d
// f.d.a , f.d.b, f.d.c

// (a) p->b = ' '; illegal. p->d.b
// (b) p->e[3] = 10; legal. 
// (c) (*p).d.a = '*'; legal. f.d.a�� �ǹ��ϹǷ� 
// (d) p->d->c = 20; illegal. d�� �����Ͱ� �ƴ�