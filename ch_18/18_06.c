
void print_error(const char* message) {
	static int n = 1; 
	printf("Error %d: %s\n", n++, message);
}

int main(void) {

	print_error("Hello"); // 항상 1만 출력 -> static으로 선언해서 숫자가 점점 증가하도록 수정한다. 
	print_error("Hello");
	return 0;
}