#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int hour, minute, min, min_time, min_d;
	int t1, t2, t3, t4, t5, t6, t7, t8, d1, d2, d3, d4, d5, d6, d7, d8;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	int time = hour * 60 + minute;

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
	t3 =  11 * 60 + 19;
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


	if (t1 > time ) {
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

	// 시간 차 interval 계산
	// 각 interval로 min과 min_time을 얻어낸다. 
	// min_time을 switch로 받아서 시간 출력한다.

	return 0;
}