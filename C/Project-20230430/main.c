#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main() {
	FILE* pf;
	pf = fopen("text.txt", "w");
	if (pf == NULL) {
		perror("pf");
		return 1;
	}
	char pff[20];
	scanf("%s", pff);
	fprintf(pf, "%s", pff);
	fclose(pf);
	pf = NULL;
	return 0;
}
