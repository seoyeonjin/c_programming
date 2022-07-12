// main.c, f1.c, f2.c 
// f1.h , f2.h 

// 모든 소스 파일은 f1.h를 include 
// f2.h는 f1.c와 f2.c만 include 

/*
demo: main.o f1.o f2.o
	gcc -o demo main.o f1.o f2.o

main.o: main.c f1.h
	gcc -c main.c

f1.o: f1.c f1.h, f2.h
	gcc -c f1.c

f2.o: f2.c f1.h f2.h
	gcc -c f2.c

*/