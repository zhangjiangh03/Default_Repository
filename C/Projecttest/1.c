#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
void game();
void exu();
int main() {
    char input;
    printf("���������֣�");
    scanf("%!c(MISSING)", &input);
    if (isdigit(input)) { // �ж��Ƿ�Ϊ����
        int num = input - '0'; // ���ַ�ת��Ϊ����
        if (num == 1) {
            game();
        }
        else if (num == 2) {
            exu();
        }
        else if (num == 3) {
            printf("OK\n");
        }
        else {
            printf("������1��3�ڵ�����\n");
        }
    }
    else if (isalpha(input)) { // �ж��Ƿ�Ϊ��ĸ
        printf("���������֣���������ĸ\n");
    }
    else if (input < 0 || input > 127) { // �ж��Ƿ�Ϊ���ķ��Ż���������
        printf("���ķ��Ų�������\n");
    }
    else if (input == '+' || input == '-' || input == '*' || input == '/' || input == '=' || input == '<' || input == '>') { // �ж��Ƿ�ΪӢ�ķ���
        printf("Ӣ�ķ��Ų���ʹ��\n");
    }
    else {
        printf("�÷��Ų���ʹ�ã�\n");
    }
    return 0;
}
void game() {
    printf("������Ϸ��\n");
}
void exu() {
    printf("������ϰ��\n");
}
