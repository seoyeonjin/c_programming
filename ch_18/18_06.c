
void print_error(const char* message) {
	static int n = 1; 
	printf("Error %d: %s\n", n++, message);
}

int main(void) {

	print_error("Hello"); // �׻� 1�� ��� -> static���� �����ؼ� ���ڰ� ���� �����ϵ��� �����Ѵ�. 
	print_error("Hello");
	return 0;
}