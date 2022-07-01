#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, num;
	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &a, &b);

	printf("You entered the number ");

	num = a * 10 + b;

	if (b == 0) {
		switch (num) {
		case 10: printf("ten"); break;
		case 20:printf("twenty"); break;
		case 30:printf("thirty"); break;
		case 40:printf("forty"); break;
		case 50:printf("fifty"); break;
		case 60:printf("sixty"); break;
		case 70:printf("seventy"); break;
		case 80:printf("eighty"); break;
		case 90:printf("ninety"); break;
		default:break;
		}
		return 0;
	}

	if (a == 1) {
		switch (num) {
			case 11: printf("eleven"); break;
			case 12: printf("twelve"); break;
			case 13: printf("thirteen"); break;
			case 14: printf("fourteen"); break;
			case 15:printf("fifteen"); break;
			case 16:printf("sixteen"); break;
			case 17: printf("seventeen"); break;
			case 18: printf("eighteen"); break;
			case 19:printf("nineteen"); break;
			default: break;
		}
	}
	else {
		switch (a) {
		case 2: printf("twenty"); break;
		case 3: printf("thirty"); break;
		case 4: printf("forty"); break;
		case 5: printf("fifty"); break;
		case 6: printf("sixty"); break;
		case 7: printf("seventy"); break;
		case 8: printf("eighty"); break;
		case 9: printf("ninety"); break;
		default:
			break;
		}

		printf("-");

		switch (b) {
		case 1: printf("one"); break;
		case 2: printf("two"); break;
		case 3: printf("three"); break;
		case 4:printf("four"); break;
		case 5:printf("five"); break;
		case 6:printf("six"); break;
		case 7: printf("seven"); break;
		case 8:printf("eight"); break;
		case 9: printf("nine"); break;
		default:
			break;
		}
	}


	// 1_ => 
	// 2_ => twenty +
	// 3_ => thirty +
	// 4_ => forth + 
	// 5_ => fifty + 
	// 6_ => sixty +
	// 7_ => seventy +
	// 8_ => eigty +
	// 9_ => ninety +

	return 0;
}