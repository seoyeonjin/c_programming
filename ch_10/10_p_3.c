#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
#define RANKS 5
#define SUITS 2

bool straight, flush, four, three;
int pairs;

// int num_in_rank[NUM_RANKS]; // 13
// int num_in_suit[NUM_SUITS]; // 4
int hand[RANKS][SUITS];


void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void) {

	for (;;) {
		read_cards();
		analyze_hand();
		print_result();
	}

	return 0;
}

void read_cards() {
	// bool card_exists[NUM_RANKS][NUM_SUITS];
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card;
	int cards_read = 0;


	for (rank = 0; rank < RANKS; rank++) {
		for (suit = 0; suit < SUITS; suit++)
			hand[rank][suit] = 0;
	}


	while (cards_read < NUM_CARDS) {
		bad_card = false;
		printf("Enter a card: ");
		bool duplicated = false;

		rank_ch = getchar();
		switch (rank_ch) {
		case '0': exit(EXIT_SUCCESS);
		case '2': rank = 0; break;
		case '3': rank = 1; break;
		case '4': rank = 2; break;
		case '5': rank = 3; break;
		case '6': rank = 4; break;
		case '7': rank = 5; break;
		case '8': rank = 6; break;
		case '9': rank = 7; break;
		case 't': case 'T': rank = 8; break;
		case 'j': case 'J': rank = 9; break;
		case 'g': case 'G': rank = 10; break;
		case 'k': case 'K': rank = 11; break;
		case 'a': case 'A': rank = 12; break;
		default: bad_card = true;
		}

		suit_ch = getchar();
		switch (suit_ch) {
		case 'c': case 'C': suit = 0; break;
		case 'd': case 'D': suit = 1; break;
		case 'h': case 'H': suit = 2; break;
		case 's': case 'S': suit = 3; break;
		default: bad_card = true;
		}

		while ((ch = getchar()) != '\n')
			if (ch != ' ') bad_card = true;

		if (cards_read == 0) {
			if (bad_card)
				printf("Bad card; ignored.\n");
			else {
				hand[cards_read][0] = rank;
				hand[cards_read][1] = suit;
				cards_read++;
			}
		}

		else {
			duplicated = false;
			for (int i = 0; i < cards_read; i++) {
				if (hand[i][0] == rank && hand[i][1] == suit) {
					duplicated = true;
				}
			}
			if (duplicated)
				printf("Duplicate card; ignored.\n");
			else if (bad_card)
				printf("Bad card; ignored.\n");
			else {
				hand[cards_read][0] = rank;
				hand[cards_read][1] = suit;
				cards_read++;
			}
		}
	}
}

void analyze_hand(){
	int num_consec = 0;
	int rank, suit;

	straight = false;
	flush = false;
	four = false;
	three = false;
	pairs = 0;

	// check for flush
	// 같은 모양의 카드가 5개일 때
	int flush_count = 1;
	int first_suit = hand[0][1];
	for (int i = 1; i < RANKS; i++) {
		if (hand[i][1] == first_suit)
			flush_count++;
	}

	if (flush_count == 5)
		flush = true;

	/*for (suit = 0; suit < NUM_SUITS; suit++)
		if (hand[suit][1] == NUM_CARDS)
			flush = true;
			*/

	// check for straight

	//최솟값 찾기 
	int min = hand[0][0];
	int straight_count = 0; 
	for (int i = 1; i < RANKS; i++) {
		if (min > hand[i][0])
			min = hand[i][0];
	}
	//최솟값부터 5개
	for (int i = min; i < min + 5; i++) {
		for (int j = 0; j < RANKS; j++) {
			if (hand[j][0] == i)
				straight_count++;
		}
	}

	if (straight_count == NUM_CARDS) {
		straight = true;
		return;
	}

	/*rank = 0;
	while (num_in_rank[rank] == 0) rank++;
	for (; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++)
		num_consec++;
	if (num_consec == NUM_CARDS) {
		straight = true;
		return;
	}*/

	// check for 4 of a kind, 3 of a kind, and pairs
	//4 of a kind
	//3 of a kind
	/*
	int first = hand[0][0];
	int second = hand[1][0];
	int kind_count = 1; 
	if (first != second) {
		for (int i = 2; i < NUM_RANKS; i++) {
			if (first == hand[i][0])
				kind_count++;
		}
		if (kind_count == 4)
			four = true;
		else if (kind_count == 3)
			three = true;
		else {
			kind_count = 1;
			for (int i = 2; i < NUM_RANKS; i++) {
				if (second == hand[i][0])
					kind_count++;
			}
			if (kind_count == 4)
				four = true;
			else if (kind_count == 3)
				three = true;
			else {
				int third = hand[2][0];
				for (int i = 3; i < NUM_RANKS; i++) {
					if (third == hand[i][0])
						kind_count++;
				}
				if (kind_count == 3)
					three = true;
			}
		}
	}
	else {
		kind_count = 2;
		for (int i = 2; i < NUM_RANKS; i++) {
			if (first == hand[i][0])
				kind_count++;
		}
		if (kind_count == 4)
			four = true;
		else if (kind_count == 3)
			three = true;
		else {
			int third = hand[2][0];
			kind_count = 1;
			for (int i = 2; i < NUM_CARDS; i++) {
				if (third == hand[i][0])
					kind_count++;
			}
			if (kind_count == 3)
				three = true;
		}
	}
	*/

	int num_array[NUM_RANKS] = { 0 };
	for (int i = 0; i < NUM_CARDS; i++) {
		num_array[hand[i][0]]++;
	}

	for (rank = 0; rank < NUM_RANKS; rank++) {
		if (num_array[rank] == 4) four = true;
		if (num_array[rank] == 3) three = true;
		if (num_array[rank] == 2) pairs++;
	}
}

void print_result(void) {
	if (straight && flush) printf("Straight flush");
	else if (four) printf("Four of a kind");
	else if (three && pairs == 1) printf("Full house");
	else if (flush) printf("Flush");
	else if (straight) printf("Straight");
	else if (three) printf("Three of a kind");
	else if (pairs == 2)printf("Two pairs");
	else if (pairs == 1)printf("Pair");
	else				printf("High card");

	printf("\n\n");
}