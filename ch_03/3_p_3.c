#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int prefix, group, publisher, item, check;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item, &check);
	printf("GSI prefix: %d\n", prefix);
	printf("Group identifier: %d\n", group);
	printf("Publisher code: %d\n", publisher);
	printf("Item number: %d\n", item);
	printf("Chech digit: %d\n", check);

	return 0;
}