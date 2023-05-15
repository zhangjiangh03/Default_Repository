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
