#include <stdio.h>
#include <stdbool.h>

int main(void) {

	bool weekend[7] = { true, false, false, false, false, false, true };

	for (int i = 0; i < (int) sizeof(weekend) / sizeof(weekend[0]); i++) {
		printf("%d", weekend[i]);
	}

	return 0;
}