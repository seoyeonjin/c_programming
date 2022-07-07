#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void find_closest_flight(int desired_time, int* departure_time, int* arrival_time);

int main(void) {

	int hour, minute;
	int min, min_d;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	int time = hour * 60 + minute;

	find_closest_flight(time, &min, &min_d);

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


void find_closest_flight(int desired_time, int* departure_time, int* arrival_time) {
	int hour, minute, min_time;
	int t1, t2, t3, t4, t5, t6, t7, t8, d1, d2, d3, d4, d5, d6, d7, d8;


	// 480, 583, 679, 767, 840, 945, 1140, 1305

	/*
	inter1 = time - 480 > 0 ? time - 480 : 480 - time;
	inter2 = time - 9 * 60 + 43 > 0 ? time - 9 * 60 + 43 : 9 * 60 + 43 - time;
	inter3 = time - 11 * 60 + 19 > 0 ? time - 11 * 60 + 19 : 11 * 60 + 19 - time;
	inter4 = time - 12 * 60 + 47 > 0 ? time - 12 * 60 + 47 : 12 * 60 + 47 - time;
	inter5 = time - 14 * 60  > 0 ? time - 14 * 60 : 14 * 60 - time;
	inter6 = time - 15 * 60 + 45 > 0 ? time - 15 * 60 + 45 : 15 * 60 + 45 - time;
	inter7 = time - 19 * 60 > 0 ? time - 19 * 60 : 19 * 60 - time;
	inter8 = time - 21 * 60 + 45 > 0 ? time - 21 * 60 + 45 : 21 * 60 + 45 - time;
	*/


	/*
	inter1 = time - 480;
	inter2 = time - 9 * 60 + 43;
	inter3 = time - 11 * 60 + 19;
	inter4 = time - 12 * 60 + 47;
	inter5 = time - 14 * 60;
	inter6 = time - 15 * 60 + 45;
	inter7 = time - 19 * 60;
	inter8 = time - 21 * 60 + 45;
	*/

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


	if (t1 > desired_time) {
		min_time = t1 - desired_time;
		*departure_time = t1;
		*arrival_time = d1;
	}
	else {
		min_time = desired_time - t1;
		*departure_time = t1;
		*arrival_time = d1;
	}

	if (t2 > desired_time) {
		if (t2 - desired_time < min_time) {
			min_time = t2 - desired_time;
			*departure_time = t2;
			*arrival_time = d2;
		}
	}
	else {
		if (desired_time - t2 < min_time) {
			min_time = desired_time - t2;
			*arrival_time = d2;
			*departure_time = t2;
		}
	}

	if (t3 > desired_time) {
		if (t3 - desired_time < min_time) {
			min_time = t3 - desired_time;
			*departure_time = t3;
			*arrival_time = d3;
		}
	}
	else {
		if (desired_time - t3 < min_time) {
			min_time = desired_time - t3;
			*departure_time = t3;
			*arrival_time = d3;
		}
	}

	if (t4 > desired_time) {
		if (t4 - desired_time < min_time) {
			min_time = t4 - desired_time;
			*departure_time = t4;
			*arrival_time = d4;
		}
	}
	else {
		if (desired_time - t4 < min_time) {
			min_time = desired_time - t4;
			*departure_time = t4;
			*arrival_time = d4;
		}
	}

	if (t5 > desired_time) {
		if (t5 - desired_time < min_time) {
			min_time = t5 - desired_time;
			*departure_time = t5;
			*arrival_time = d5;
		}
	}
	else {
		if (desired_time - t5 < min_time) {
			min_time = desired_time - t5;
			*departure_time = t5;
			*arrival_time = d5;
		}
	}

	if (t6 > desired_time) {
		if (t6 - desired_time < min_time) {
			min_time = t6 - desired_time;
			*departure_time = t6;
			*arrival_time = d6;
		}
	}
	else {
		if (desired_time - t6 < min_time) {
			min_time = desired_time - t6;
			*departure_time = t6;
			*arrival_time = d6;
		}
	}

	if (t7 > desired_time) {
		if (t7 - desired_time < min_time) {
			min_time = t7 - desired_time;
			*departure_time = t7;
			*arrival_time = d7;
		}
	}
	else {
		if (desired_time - t7 < min_time) {
			min_time = desired_time - t7;
			*departure_time = t7;
			*arrival_time = d7;
		}
	}

	if (t8 > desired_time) {
		if (t8 - desired_time < min_time) {
			min_time = t8 - desired_time;
			*departure_time = t8;
			*arrival_time = d8;
		}
	}
	else {
		if (desired_time - t8 < min_time) {
			min_time = desired_time - t8;
			*departure_time = t8;
			*arrival_time = d8;
		}
	}
}