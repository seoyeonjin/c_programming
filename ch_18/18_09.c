
// a
/*
typedef char Fcn(int);
typedef Fcn* Fcn_ptr;
typedef Fcn_ptr Fcn_ptr_array[10];
Fcn_ptr_array x;
*/

// b
/*
typedef int Ary[5];
typedef Ary* Fcn(int);
Fcn* x;
*/

// c
/*
typedef float* Fcn(int);
typedef Fcn* Fcn_ptr(void);
Fcn_ptr x;
*/

// d
/*
typedef void Fcn(int);
typedef void Fcn_y(int);
typedef Fcn* Fcn_ptr(int, Fcn_y);
Fcn x;
*/