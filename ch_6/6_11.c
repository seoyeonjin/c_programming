#include <stdio.h>

int main(void) {
	int sum = 0; 
	int i;
	
	for (i = 0; i < 10; i++) {
		if (i % 2)
			continue;
		sum += i;
	}
	printf("%d\n", sum);
	// Â¦¼ö¸¸ ´õÇÔ. 0 + 2 + 4 + 6 + 8 = 20

	return 0;
}