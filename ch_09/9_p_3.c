#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROAD 10

void generate_random_walk(char walk[10][10]);
void printf_array(char walk[10][10]);

int main(void) {

	char walk[10][10];
	generate_random_walk(walk);
	printf_array(walk);

	return 0;
}

void generate_random_walk(char walk[10][10]) {
	int rem_way[4] = { 0 };

	for (int i = 0; i < ROAD; i++) {
		for (int j = 0; j < ROAD; j++)
			walk[i][j] = '.';
	}

	char ch = 'A';

	srand((unsigned)time(NULL));
	int rem_direct, rand_direct;

	int now_row = 0;
	int now_col = 0;
	walk[now_row][now_col] = ch;
	ch++;
	int zero_rem_way = 0;

	while (!zero_rem_way && ch <= 'Z') {
		rand_direct = rand() % 4;

		if (rand_direct == 0 && rem_way[0] != 1) {
			now_row -= 1;
			if (now_row < 0 || (walk[now_row][now_col] != '.')) {
				now_row += 1;
				rem_way[0] = 1;
				continue;
			}
			else {
				walk[now_row][now_col] = ch;
				ch++;
				for (int i = 0; i < 4; i++) {
					rem_way[i] = 0;
				}
			}
		}

		if (rand_direct == 1 && rem_way[1] != 1) {
			now_col += 1;
			if (now_col >= 10 || (walk[now_row][now_col] != '.')) {
				now_col -= 1;
				rem_way[1] = 1;
				continue;
			}
			else {
				walk[now_row][now_col] = ch;
				ch++;
				for (int i = 0; i < 4; i++) {
					rem_way[i] = 0;
				}
			}
		}

		if (rand_direct == 2 && rem_way[2] != 1) {
			now_row += 1;
			if (now_row >= 10 || (walk[now_row][now_col] != '.')) {
				now_row -= 1;
				rem_way[2] = 1;
				continue;
			}
			else {
				walk[now_row][now_col] = ch;
				ch++;
				for (int i = 0; i < 4; i++) {
					rem_way[i] = 0;
				}
			}
		}

		if (rand_direct == 3 && rem_way[3] != 1) {
			now_col -= 1;
			if (now_col < 0 || (walk[now_row][now_col] != '.')) {
				now_col += 1;
				rem_way[3] = 1;
				continue;
			}
			else {
				walk[now_row][now_col] = ch;
				ch++;
				for (int i = 0; i < 4; i++) {
					rem_way[i] = 0;
				}
			}
		}

		zero_rem_way = 1;
		for (int i = 0; i < 4; i++) {
			if (rem_way[i] == 0)
				zero_rem_way = 0;
		}
	}
}
void printf_array(char walk[10][10]) {

	for (int i = 0; i < ROAD; i++) {
		for (int j = 0; j < ROAD; j++)
			printf("%c ", walk[i][j]);
		printf("\n");
	}

}