#include <stdio.h>

void build_index_url(const char* domain, char* index_url);

int main(void) {
	char domain[] = "knking.com";
	char index_url[100] = "";
	build_index_url(domain, index_url);
	printf("%s", index_url);

	return 0;
}

void build_index_url(const char* domain, char* index_url) {
	char http[100] = "http://www.";
	char index[100] = "/index.html";

	strcat(http, domain);
	strcat(http, index);
	strcpy(index_url, http);
}