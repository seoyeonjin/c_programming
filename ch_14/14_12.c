#include <stdio.h>

#define M 10

// a #if M
// b #ifdef M
// c #ifndef M -> fail
// d #if defined(M)
// e #if !defined(M) -> fail

// c, e