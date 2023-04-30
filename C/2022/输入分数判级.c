#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	while (1)
	{
		system("cls"); //清屏
		char ch;
		float score;
		printf("请输入0-100的分数：\n");
		scanf("%f", &score);
		printf("分数核对：%.2f\n", score);
		if (score >= 0 && score <= 100)
		{
			printf("分数有效");
			if (score >= 80 && score <= 100)
			{
				printf("，判级为A");
			}
			else if (score >= 60 && score < 80)
			{
				printf("，判级为B");
			}
			else
			{
				printf("，判级为C");
			}
		}
		else
		{
			printf("分数无效\n");
		}
		printf("\n************************\n空格键继续，ESC键退出\n");
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