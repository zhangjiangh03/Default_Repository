#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

/*
#include<stdio.h> 头文件
#include<conio.h> 控制台输入输出函数 含 getch()
#include<time.h>  时间 time_t
#include<stdlib.h> 工具函数 system()，srand()，rand()，NULL
*/
void help(void)
/*虚函数help，void 无需返回值 help(void)无需参数*/
{
	printf("任意键开始\n");
}

int main()
{
	char ch;		   //定义变量ch
	char str[11] = ""; //定义数组，初始化全为\0
	int count;		   //定义变量count，记对的个数
	int i;			   //定义变量i，用于循环的判断
	time_t start_time, end_time;
	while (1)
	{
		system("cls"); //清屏
		help();
		ch = getch();	   //ch调用getch()函数
		srand(time(NULL)); //以时间为种子，对应随机数
		for (i = 0; i < 10; i++)
		{
			str[i] = rand() % 26 + 'a'; //随机数0-25，ascii码，随机字母
		}
		str[10] = '\0'; //换成11会超过
		printf("%s\n", str);//打印随机字母
		count = 0;//计数清零
		for (i = 0; i < 10; i++)//循环输入
		{
			ch = getch();//获取键盘，进入判断
			if (i == 0)
			{
			start_time = time(NULL);
			}//记录开始时间
			if (ch == str[i])
			{
				count++;
				printf("%c", ch);
			}//记录对的个数
			else
			{
				printf("_");
			}//错误显示
		}
		end_time = time(NULL);//记录结束时间
		printf("\n正确率%d %c\n", count * 100 / 50, '%');
		printf("用时%d秒\n", (long int)end_time - start_time);
		//继续或者退出
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
