#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
void helptips(void)
{
	printf("任意键开始，错误_显示\n");
}
int main()
{
	int ch;
	int i;
	int count;
	char str[11] = "";
	time_t START_time, END_time;
	while (1)
	{
		system("cls");
		helptips();
		ch = getch();
		srand(time(NULL));
		for (i = 0; i < 10; i++)
		{
			str[i] = rand() % 26 + 'a';
		}
		str[10] = '\0';
		printf("%s\n", str);
		count = 0;
		for (i = 0; i < 10; i++)
		{
			ch = getch();
			if (i == 0)
			{
				START_time = time(NULL);
			}
			if (ch == str[i])
			{
				count++;
				printf("%c", ch);
			}
			else
			{
				printf("_");
			}
		}
		END_time = time(NULL);
		printf("\n正确个数：%d，正确率：%d%c\n", count, count * 100 / 50, '%');
		printf("用时%ld秒\n", (long int)END_time - START_time);

		while (1)
		{
			ch = getch();
			if (ch == ' ')
			{
				break;
			}
			if (ch == 27)
			{
				return 0;
			}
		}
	}
	return 0;
}