#pragma once
#include <stdbool.h>

void stack_underflow(void);

void stack_overflow(void);

void make_empty(void);

bool is_empty(void);

bool is_full(void);

void push(char i);

char pop(void);