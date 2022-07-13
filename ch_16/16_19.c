typedef enum {EM, SS} Type;

struct pinball_machine {
	char name[40];
	int year;
	Type type;
	int players;	
};