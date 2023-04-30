#include <stdio.h>
#include <string.h>
int mystrlencount1(char *strte)
{
	char *strsave = strte; //保存初始地址
	while (*strte != '\0')
	{
		strte++;
	}
	return strte - strsave;
}

int mystrlencount2(char *strte)
{
	int count = 0;
	while (*strte != '\0')
	{
		count++;
		strte++;
	}
	return count;
}
int main()
{
	char str1[20] = {0};
	char *str2 = "Hello World";

	printf("请输入预测长度字符串str1\n");
	char *pstr1 = str1;
	scanf("%s", pstr1);

	printf("复查 %s\n", str1);
	printf("字符串str2复查 %s\n", str2);

	int mystr1 = mystrlencount1(str1);
	printf("指针方法1计算字符串\"%s\"长度为%d\n", str1, mystr1);
	int strlencount1 = strlen(str1);
	printf("strlen()计算字符串\"%s\"长度为%d\n", str1, strlencount1);

	int mystr2 = mystrlencount2(str2);
	printf("指针方法1计算字符串\"%s\"长度为%d\n", str2, mystr2);
	int strlencount2 = strlen(str2);
	printf("strlen()计算字符串\"%s\"长度为%d\n", str2, strlencount2);

	return 0;
}