/*
* �ļ�����Main.c
* ʵ�ֹ��ܣ�������
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include "MacroDefinition.h" //�궨�塢����ͷ�ļ�
#include "FunctionDeclaration.h" //��������

int main()
{
	int input = 0;
	StartMenu();
	scanf("%d", &input);
	do
	{
		/* �û��������� */
		if (input == 1)
		{
			system("cls");
			Game();
		}
		else if (input == 2)
		{
			system("cls"); 
			printf("�˳��ɹ���\n");
			break;
		}

		/* �û����������� */
		else
		{
			if ((input < MENU_OPTIONS - 1 || input > MENU_OPTIONS + 1) && MyIsdigit(input) != 0)
			{
				system("cls");
				printf("�Ƿ�Χ�����֣�\n");
			}
			else
			{
				char c_input = '0';
				while ((c_input = getchar()) != '\n' && c_input != EOF)
				{
				}
				system("cls");
				printf("���������֣�\n");
			}
		}
	} while (1);
	return 0;
}