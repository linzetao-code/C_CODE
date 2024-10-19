#include <stdio.h>

int main() {
    int dayNumber;
    printf("请输入一个整数：");
    scanf("%d", &dayNumber);

    int remainder = dayNumber % 7;
    if (remainder < 0) {
        remainder += 7;
    }

    switch (remainder) {
    case 0:
        printf("星期六\n");
        break;
    case 1:
        printf("星期日\n");
        break;
    case 2:
        printf("星期一\n");
        break;
    case 3:
        printf("星期二\n");
        break;
    case 4:
        printf("星期三\n");
        break;
    case 5:
        printf("星期四\n");
        break;
    case 6:
        printf("星期五\n");
        break;
    }

    return 0;
}