#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
    int num;
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("输入错误，请输入一个四位数的整数。\n");
        return 0;
    }

    int thousands = num / 1000;
    int hundreds = (num % 1000) / 100;
    int tens = (num % 100) / 10;
    int ones = num % 10;

    int sum = thousands + hundreds + tens + ones;
    printf("%d\n", sum);

    return 0;
}