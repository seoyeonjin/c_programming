#include <stdio.h>
#include <string.h>

struct {
	char* cmd_name;
	void (*cmd_pointer) (void);
} file_cmd[] = {
	{"new",    new_cmd},
	{"open",   open_cmd},
	{"close",  close_cmd},
	{"close all", close_all_cmd},
	{"save", save_cmd},
	{"save as" , save_as_cmd},
	{"save all", save_all_cmd},
	{"printf", print_cmd},
	{"exit", exit_cmd}
};

void search(char* input);
void new_cmd(void);
void open_cmd(void);
void close_cmd(void);
void close_all_cmd(void);
void save_cmd(void);
void save_as_cmd(void);
void save_all_cmd(void);
void print_cmd(void);
void exit_cmd(void);

void search(char* input) {
	for (int i = 0; i < sizeof(file_cmd) / sizeof(file_cmd[0]); i++) {
		if (strcmp(input, file_cmd[i].cmd_name) == 0)
			file_cmd[i].cmd_pointer;
	}
}
void new_cmd(void) {
	printf("new_cmd");
}

void open_cmd(void) {
	printf("open_cmd");
}
void close_cmd(void) {
	printf("close_cmd");
}
void close_all_cmd(void) {
	printf("cloase_all_cmd");
}

void save_cmd(void) {
	printf("save_cmd");
}

void save_as_cmd(void) {
	printf("save_as_cmd");
}

void save_all_cmd(void) {
	printf("save_all_cmd");
}

void print_cmd(void) {
	printf("print_cmd");
}

void exit_cmd(void) {
	printf("exit_cmd");
}