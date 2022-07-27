#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);

int main(void) {

	int win = 0, lose = 0;
	bool result; 
	char ans = 'y';
	while (ans != 'n') {
		result = play_game();
		if (result == true) {
			printf("You win!\n");
			win += 1;
			printf("Play again? ");
			scanf("%c", &ans);
			while (getchar() != '\n');
			printf("\n");
		}
		else {
			printf("You lose!\n");
			lose += 1;
			printf("Play again? ");
			scanf("%c", &ans);
			while (getchar() != '\n');
			printf("\n");
		}

	}
	printf("Wins: %d Losses: %d", win, lose);
	return 0;
}

int roll_dice(void) {
	int dice_1;
	int dice_2;

	static int plus = 123;
	srand((unsigned)time(NULL) * plus++);

	dice_1 = (rand() % 6) + 1;
	dice_2 = (rand() % 6) + 1;

	//printf("%d %d\n", dice_1, dice_2);
	return dice_1 + dice_2;
}

bool play_game(void) {
	int result;
	int point = 0;

	while (1) {
		result = roll_dice();
		printf("You rolled: %d\n", result);

		if (result == 7 || result == 11) {
			return true;
		}
		else if (result == 2 || result == 3 || result == 12) {
			return false;
		}
		else if (point == result) {
			return true;
		}
		else {
			if (point == 0) {
				point = result;
				printf("Your point is %d\n", point);
			}
		}
	}

}