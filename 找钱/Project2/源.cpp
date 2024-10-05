#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int price = 0;
    int change = 0;
    printf("请输入金额（元）：",price);
    scanf("%d", &price);
     change = 100 - price;
    printf("找您%d元。\n",change);
    return 0;
}