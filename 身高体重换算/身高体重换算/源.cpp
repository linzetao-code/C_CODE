#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int height_cm, weight_kg;
    scanf("%d %d", &height_cm, &weight_kg);

    double height_inch = height_cm / 2.54;
    int feet = height_inch / 12;
    double inches = height_inch - feet * 12;

    double weight_pound = weight_kg / 0.45359237;

    printf("身高%d英尺%.2f英寸,体重%.2f磅\n", feet, inches, weight_pound);

    return 0;
}