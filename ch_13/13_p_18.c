#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int m, d, y;
	char d_str[3], y_str[5];

	printf("Enter a date (mm/dd/yyyy): ");
	char* month[] = { "January", "February", "March", 
		"April", "May", "June", "July","August", "September", "October" ,"November", "December" };

	scanf("%d/%d/%d", &m, &d, &y);

	char result[100];
	char* m_str = month[m - 1];
	strcpy(result, m_str);

	sprintf(d_str, "%2d", d);
	sprintf(y_str, "%d", y);

	strcat(result, " ");
	strcat(result, d_str);
	strcat(result, ", ");
	strcat(result, y_str);

	printf("You entered the date %s", result);

	return 0;
}