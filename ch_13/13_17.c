#include <stdio.h>
#include <stdbool.h>

bool test_extension(const char* file_name, const char* extension);

int main(void) {
	char str1[] = "Abc.txt";
	char ex[] = "TXT";
	bool result = test_extension(str1, ex);
	if (result)
		printf("같음");
	else
		printf("다름");

	return 0;
}

bool test_extension(const char* file_name, const char* extension) {
	char* p;

	while (*file_name++)
		if (*file_name == '.') {
			file_name++;
			break;
		}
			
	for (p = file_name; *p != '\0'; p++)
		*p = toupper(*p);
	for (p = extension; *p != '\0'; p++)
		*p = toupper(*p);
	if (!strcmp(file_name, extension))
		return true;
	return false;
	
}