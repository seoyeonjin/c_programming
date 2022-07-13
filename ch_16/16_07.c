#include <stdio.h>

struct fraction {
	int numerator;
	int denominator;
};

struct fraction gcd (struct fraction f);
struct fraction add_fractions (struct fraction f1, struct fraction f2);
struct fraction sub_fractions(struct fraction f1, struct fraction f2);
struct fraction mul_fractions (struct fraction f1, struct fraction f2);
struct fraction div_fractions(struct fraction f1, struct fraction f2);

int main(void) {

	struct fraction f1 = { 1,4 };
	struct fraction f2 = { 3,4 };

	f1 = add_fractions(f1, f2);
	printf("%d/%d\n", f1.numerator, f1.denominator);

	return 0;
}

struct fraction gcd(struct fraction f) {
	int b = f.denominator;
	int a = f.numerator;

	int temp;
	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}

	f.denominator /= a;
	f.numerator /= a;
	
	return f;
}
struct fraction add_fractions(struct fraction f1, struct fraction f2) {
	int demon = f1.denominator * f2.denominator;
	int num = f1.denominator * f2.numerator + f1.numerator * f2.denominator;
	struct fraction temp = { num, demon };
	temp = gcd(temp);
	return temp;
}

struct fraction sub_fractions(struct fraction f1, struct fraction f2) {
	// f1 - f2
	int demon = f1.denominator * f2.denominator;
	int num = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
	struct fraction temp = { num, demon };
	temp = gcd(temp);
	return (temp);
}

struct fraction mul_fractions(struct fraction f1, struct fraction f2) {
	int demon = f1.denominator * f2.denominator;
	int num = f1.numerator * f2.numerator;
	struct fraction temp = { num, demon };
	temp = gcd(temp);
	return (temp);
}

struct fraction div_fractions(struct fraction f1, struct fraction f2) {
	// f1 / f2
	int demon = f1.denominator * f2.numerator;
	int num = f1.numerator * f2.denominator;
	struct fraction temp = { num,demon };
	temp = gcd(temp);
	return (temp);
}
