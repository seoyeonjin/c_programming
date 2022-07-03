#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int hour, minute, min, min_time, min_d, time;
	int t1, t2, t3, t4, t5, t6, t7, t8, d1, d2, d3, d4, d5, d6, d7, d8;
	char am_pm;
	printf("Enter a 12-hour time: ");
	scanf("%d:%d", &hour, &minute);

	// scanf("%c", &am_pm);

	am_pm = getchar();
	if (am_pm == ' ') {
		am_pm = getchar();
	}
	am_pm = toupper(am_pm);

	if (am_pm == 'A') 
		time = hour * 60 + minute;
	else
		time = (12 + hour) * 60 + minute;

	// 480, 583, 679, 767, 840, 945, 1140, 1305

	t1 = 480;
	t2 = 9 * 60 + 43;
	t3 = 11 * 60 + 19;
	t4 = 12 * 60 + 47;
	t5 = 14 * 60;
	t6 = 15 * 60 + 45;
	t7 = 19 * 60;
	t8 = 21 * 60 + 45;

	d1 = 10 * 60 + 16;
	d2 = 11 * 60 + 52;
	d3 = 13 * 60 + 31;
	d4 = 15 * 60;
	d5 = 16 * 60 + 8;
	d6 = 17 * 60 + 55;
	d7 = 21 * 60 + 20;
	d8 = 23 * 60 + 58;


	if (t1 > time) {
		min_time = t1 - time;
		min = t1;
		min_d = d1;
	}
	else {
		min_time = time - t1;
		min = t1;
		min_d = d1;
	}

	if (t2 > time) {
		if (t2 - time < min_time) {
			min_time = t2 - time;
			min = t2;
			min_d = d2;
		}
	}
	else {
		if (time - t2 < min_time) {
			min_time = time - t2;
			min_d = d2;
			min = t2;
		}
	}

	if (t3 > time) {
		if (t3 - time < min_time) {
			min_time = t3 - time;
			min = t3;
			min_d = d3;
		}
	}
	else {
		if (time - t3 < min_time) {
			min_time = time - t3;
			min = t3;
			min_d = d3;
		}
	}

	if (t4 > time) {
		if (t4 - time < min_time) {
			min_time = t4 - time;
			min = t4;
			min_d = d4;
		}
	}
	else {
		if (time - t4 < min_time) {
			min_time = time - t4;
			min = t4;
			min_d = d4;
		}
	}

	if (t5 > time) {
		if (t5 - time < min_time) {
			min_time = t5 - time;
			min = t5;
			min_d = d5;
		}
	}
	else {
		if (time - t5 < min_time) {
			min_time = time - t5;
			min = t5;
			min_d = d5;
		}
	}

	if (t6 > time) {
		if (t6 - time < min_time) {
			min_time = t6 - time;
			min = t6;
			min_d = d6;
		}
	}
	else {
		if (time - t6 < min_time) {
			min_time = time - t6;
			min = t6;
			min_d = d6;
		}
	}

	if (t7 > time) {
		if (t7 - time < min_time) {
			min_time = t7 - time;
			min = t7;
			min_d = d7;
		}
	}
	else {
		if (time - t7 < min_time) {
			min_time = time - t7;
			min = t7;
			min_d = d7;
		}
	}

	if (t8 > time) {
		if (t8 - time < min_time) {
			min_time = t8 - time;
			min = t8;
			min_d = d8;
		}
	}
	else {
		if (time - t8 < min_time) {
			min_time = time - t8;
			min = t8;
			min_d = d8;
		}
	}

	printf("Closest departure time is ");
	if (min / 60 > 12)
		printf("%d:", min / 60 - 12);
	else
		printf("%d:", min / 60);

	printf("%.2d", min % 60);

	if (min / 60 >= 12)
		printf(" p,m,");
	else
		printf(" a.m,");

	printf(", arriving at ");
	if (min_d / 60 > 12)
		printf("%d:", min_d / 60 - 12);
	else
		printf("%d:", min_d / 60);

	printf("%.2d", min_d % 60);


	if (min_d / 60 >= 12)
		printf(" p,m,");
	else
		printf(" a.m,");

	return 0;
}