#include <stdio.h>

int main() {
    int dayNumber;
    printf("������һ��������");
    scanf("%d", &dayNumber);

    int remainder = dayNumber % 7;
    if (remainder < 0) {
        remainder += 7;
    }

    switch (remainder) {
    case 0:
        printf("������\n");
        break;
    case 1:
        printf("������\n");
        break;
    case 2:
        printf("����һ\n");
        break;
    case 3:
        printf("���ڶ�\n");
        break;
    case 4:
        printf("������\n");
        break;
    case 5:
        printf("������\n");
        break;
    case 6:
        printf("������\n");
        break;
    }

    return 0;
}