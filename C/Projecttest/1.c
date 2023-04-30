#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
void game();
void exu();
int main() {
    char input;
    printf("请输入数字：");
    scanf("%!c(MISSING)", &input);
    if (isdigit(input)) { // 判断是否为数字
        int num = input - '0'; // 将字符转换为数字
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
            printf("请输入1和3内的数字\n");
        }
    }
    else if (isalpha(input)) { // 判断是否为字母
        printf("请输入数字，而不是字母\n");
    }
    else if (input < 0 || input > 127) { // 判断是否为中文符号或其他符号
        printf("中文符号不能输入\n");
    }
    else if (input == '+' || input == '-' || input == '*' || input == '/' || input == '=' || input == '<' || input == '>') { // 判断是否为英文符号
        printf("英文符号不能使用\n");
    }
    else {
        printf("该符号不能使用！\n");
    }
    return 0;
}
void game() {
    printf("进入游戏！\n");
}
void exu() {
    printf("进入练习！\n");
}
