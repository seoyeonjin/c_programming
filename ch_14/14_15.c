#include <stdio.h>

//#define ENGLISH
//#define FRENCH
#define SPANISH

int main(void) {

#ifdef ENGLISH
	printf("Insert Disk 1");
#elif defined(FRENCH)
	printf("Inserez Le Disque 1");
#elif defined(SPANISH)
	printf("Insete El Disco 1");
#endif
	return 0;
}
