#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p = NULL;
	p = (int *)malloc(100);
	if (p == NULL)
	{
		printf("NULL");
	}
	printf("%p\n", p);
	p = (int *)realloc(p, 150);
	printf("%p\n", p);
	free(p);
	p = NULL;
	return 0;
}