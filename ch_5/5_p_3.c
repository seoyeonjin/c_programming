#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>

int main(void) {
	int num_share;
	float price_per_share, value, commission, rival_com;
	printf("Enter the number of shares and the prices per share: ");
	scanf("%d%f", &num_share, &price_per_share);

	value = num_share * price_per_share;

	if (value < 2500.00f)
		commission = 30.00f + 0.017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + 0.0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + 0.0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + 0.0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + 0.0011f * value;
	else
		commission = 255.00f + 0.0009f * value;

	if (commission < 39.00f)
		commission = 39.00f;

	if (num_share < 2000)
		rival_com = 33.00f + 0.03f * num_share;
	else
		rival_com = 33.00f + 0.02f * num_share;

	printf("Commission: $%.2f\n", commission);
	printf("Rival commission: $%.2f\n", rival_com);
	

	return 0;
}
