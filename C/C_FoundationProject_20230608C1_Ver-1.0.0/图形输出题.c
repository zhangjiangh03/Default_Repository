/*
* ʵ�����ݣ�ʹ�� For ѭ��ʵ��ͼ�����
* ��д���ڣ�2023��06��28��
* ��ע��������
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("������һ���ַ�����");

    // ʹ�� fgets ��ȡ������ַ��������Դ���ո�ͻ��з�
   // fgets(str, sizeof(str), stdin);

    scanf("%s",&str);

    // ʹ�� strlen ���������ַ���
    int count = strlen(str);

    printf("������ַ�������Ϊ��%d\n", count);

    return 0;
}