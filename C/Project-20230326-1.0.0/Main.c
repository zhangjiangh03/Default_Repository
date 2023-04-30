/*
* 文件名：Main.c
* 实现功能：主程序
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include "MacroDefinition.h" //宏定义、引用头文件
#include "FunctionDeclaration.h" //函数声明

int main()
{
	int input = 0;
	StartMenu();
	scanf("%d", &input);
	do
	{
		/* 用户正常输入 */
		if (input == 1)
		{
			system("cls");
			Game();
		}
		else if (input == 2)
		{
			system("cls"); 
			printf("退出成功！\n");
			break;
		}

		/* 用户非正常输入 */
		else
		{
			if ((input < MENU_OPTIONS - 1 || input > MENU_OPTIONS + 1) && MyIsdigit(input) != 0)
			{
				system("cls");
				printf("非范围的数字！\n");
			}
			else
			{
				char c_input = '0';
				while ((c_input = getchar()) != '\n' && c_input != EOF)
				{
				}
				system("cls");
				printf("请输入数字！\n");
			}
		}
	} while (1);
	return 0;
}