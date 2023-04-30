#include <stdio.h>
int main()
{
	int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int year, month, day, i, sumday = 0;
	printf("请输入日期:\n");
	scanf("%4d%2d%2d", &year, &month, &day);
	for (i = 0; i < month - 1; i++)
	{
		sumday += months[i];
	}
	sumday += day;
	if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		sumday += 1;
	}
	printf("%4d%2d%2d(%d)", year, month, day, sumday);
	return 0;
}