#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
    for (int x = 2; x < 100; x++) {
        int q = 1; // 表示是素数
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                q = 0;
                break;
            }
        }
        if (q == 1) {
            printf("%d ", x);
        }
    }
    return 0;
}