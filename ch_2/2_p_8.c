#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void) {
	float loan, interest_rate, monthly_payment, remaining;
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	remaining = loan * (1 + interest_rate / 100 / 12) - monthly_payment;
	printf("Balance remaining after first payment: %.2f\n", remaining);
	remaining = remaining * (1 + interest_rate / 100 / 12) - monthly_payment;
	printf("Balance remaining after second payment: %.2f\n", remaining);
	remaining = remaining * (1 + interest_rate / 100 / 12) - monthly_payment;
	printf("Balance remaining after third payment: %.2f\n", remaining);

	return 0;
}