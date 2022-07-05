#include <stdio.h>

double median(double x, double y, double z);

int main(void) {

	double x = 4, y = 1, z = 3;
	printf("%lf", median(x, y, z));
	return 0; 
}

double median(double x, double y, double z) {
	double med; 

	if (x <= y) {
		if (y <= z) med = y;
		else if (x <= z) med = z;
		else med = x;
	}
	else if (z <= y) med = y;
	else if (x <= z) med = x;
	else med = z;

	return med;
	
}