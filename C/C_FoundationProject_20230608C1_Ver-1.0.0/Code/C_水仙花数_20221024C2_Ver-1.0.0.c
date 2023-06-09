#include <stdio.h>
int main()
{
	int i, aH, aT, aO;
	for (i = 0; i < 1000; i++)
	{
		aH = i / 100;
		aT = i % 100 / 10;
		aO = i % 10;
		if (i == aH * aH * aH + aT * aT * aT + aO * aO * aO)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}