#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int price = 0;
    int change = 0;
    printf("�������Ԫ����",price);
    scanf("%d", &price);
     change = 100 - price;
    printf("����%dԪ��\n",change);
    return 0;
}