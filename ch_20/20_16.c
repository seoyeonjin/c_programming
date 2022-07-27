#include <stdio.h>

typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned long DWORD;

union {
	struct {
		DWORD eax, ebx, ecx, edx;
	} dword;
	struct {
		WORD axl, axh, bxl, bxh, cxl, cxh, dxl, dxh;
	} word;
	struct {
		BYTE all, alh, ahl, ahh,
			bll, blh, bhl, bhh,
			cll, clh, chl, chh,
			dll, dlh, dhl, dhh;
	} byte;
} regs;

int main(void) {

	regs.dword.eax = 0x12345678;
	printf("EAX: %x\n", regs.dword.eax);

	printf("AXH: %x\n", regs.word.axh);
	printf("AXL: %x\n", regs.word.axl);

	printf("ALH: %x\n", regs.byte.alh);
	printf("ALL: %x\n", regs.byte.all);

	return 0;
}