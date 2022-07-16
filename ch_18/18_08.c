
// (a) char (*x[10])(int);
// Type of x:
// 1. array of
// 2. pointers to
// 3. function with int argument 
// 4. returning char 

// (b) int (*x(int))[5];
// Type of x:
// 1. function with int argument
// 2. returning a pointer to an array with size 5

// (c) float *(*x(void))(int);
// Type of x:
// 1. function with no arguments
// 2. returning a pointer to a function with int argument
// 3. returniing pointer to float 

// (d) void (*x(int, void (*y) (int)) (int);
// Type of x:
// 1. function with int, function y with int argument returning void 
// 2. returning a pointer to a function with int argument
// 3. returning void