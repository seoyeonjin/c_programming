#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int item, y, d, m;
	float price;

	printf("Enter item number: ");
	scanf("%d", &item);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d", &m, &d, &y);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%7.2f\t%2.2d/%2.2d/%d", item, price, m, d, y);

	return 0;
}