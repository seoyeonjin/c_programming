// (a) b = FALSE -> legal. safe 
// (b) b = i; -> legal. i는 int형 변수 이므로. but unsafe
// (c) b++; -> legal. but unsafe
// (d) i = b; -> legal. safe (범위 안에 있음)
// (e) i = 2 * b + 1; -> legal. safe(int형처럼 계산 됨)
