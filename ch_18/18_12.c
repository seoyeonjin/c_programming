
// a
int (*f(float (*)(long), char*)) (double);

// f is a function with two argument,
// a pointer to a function with long arguments returning float and
// a pointer to a char
// returning a pointer to a function with double argument
// returning an int

// b

float func_1(long a) {
	float b = (float) a;
	return b;
}

char* c = "Hello";

int func_2(double d) {
	return (int)d;
}

int (*f(float (*f_1)(long), char* p))(double d)
{
    return func_2;
}

//호출할 때 f(func_1, c)(d);