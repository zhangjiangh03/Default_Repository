/*
* 实现内容：九九乘法表
* 编写日期：22023年05月04日
* 备注：无
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
