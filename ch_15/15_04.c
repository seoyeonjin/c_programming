
// a output
// Output if DEBUG is defined:
// Value of i : 1
// Value of j : 2
// Value of k : 3
// Value of i + j : 3
// Value of 2 * i + j - k : 1

// b output 
// Output if DEBUG is not defined 

// c 
// #define DEBUG를 없애면 debug.h를 include했을 때 DEBUG가 정의되어 있지 않기 때문에 
// else문이 실행된다. 

// d
// 그렇다. 코드가 순차적으로 실행되기 때문에 
// debug.h가 include되기 전에 #define DEBUG가 실행되어야 한다. 