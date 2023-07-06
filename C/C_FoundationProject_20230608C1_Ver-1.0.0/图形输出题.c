/*
* 实现内容：使用 For 循环实现图形输出
* 编写日期：2023年06月28日
* 备注：考试周
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("请输入一个字符串：");

    // 使用 fgets 获取输入的字符串，可以处理空格和换行符
   // fgets(str, sizeof(str), stdin);

    scanf("%s",&str);

    // 使用 strlen 函数计算字符数
    int count = strlen(str);

    printf("输入的字符串长度为：%d\n", count);

    return 0;
}