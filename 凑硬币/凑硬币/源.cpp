#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
    int x;
    int one, two, five;
    int foundSolution = 0;
    printf("Enter x:");
    scanf("%d", &x);
    for (one = 1; one < x * 10; one++) {
        for (two = 1; two < x * 10 / 2; two++) {
            for (five = 1; five < x * 10 / 5; five++) {
                int totalAmount = one + two * 2 + five * 5;
                if (totalAmount == x * 10) {
                    printf("可以用%d个1角加 %d个2角加 %d个5角得到 %d元\n", one, two, five, x);
                    foundSolution = 1;
                    break;
                }
            }
            if (foundSolution) break;
        }
        if (foundSolution) break;
    }
    return 0;
}