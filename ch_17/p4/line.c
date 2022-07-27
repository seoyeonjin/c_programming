#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"

#pragma warning(disable:4996)
#define MAX_LINE_LEN 60

struct node {
	char word[20];
	struct node* next;
};

struct node* line = NULL;

int line_len = 0; 
int num_words = 0; 

void clear_line(void) {

	while (line) {
		struct node* temp = line;
		line = line->next;
		free(temp);
	}
	line_len = 0;
	num_words = 0;
}

void add_word(const char* word) {

	struct node* new_node, *p;

	new_node = malloc(sizeof(struct node));

	if (new_node == NULL) {
		printf("Error");
		return;
	}

	p = line;
	strcpy(new_node->word, word); //새로운 node의 word로 채움

	new_node->next = NULL;

	if (line == NULL) {
		line = new_node;
	}
	else{
		while (p->next) {
			p = p->next;
		}
		p->next = new_node;

	}


	if (num_words > 0) 
		line_len++;
	line_len += strlen(word);
	num_words++;
	// printf("line_llen: %d, number_words: %d", line_len, num_words);
}

int space_remaining(void) {
	// printf("space remaining: %d", MAX_LINE_LEN - line_len); 
	return MAX_LINE_LEN - line_len;
}

void write_line(void) {
	int extra_spaces, spaces_to_insert, j;
	struct node* p;

	extra_spaces = MAX_LINE_LEN - line_len; 
	for (p = line; p != NULL; p = p->next) {
		printf("%s", p->word);

		if (num_words == 1)
			break;
		spaces_to_insert = extra_spaces / (num_words - 1);
		
		for (j = 1; j <= spaces_to_insert + 1; j++)
			putchar(' ');
		
		extra_spaces -= spaces_to_insert;
		num_words--;
		
	}
	
	putchar('\n');
}

void flush_line(void) {
	if (line_len > 0) {
		for(struct node*p = line; p != NULL; p=p->next)
			printf("%s ", p->word);
	}
} 