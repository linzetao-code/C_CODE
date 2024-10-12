#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int hour1, minute1;
	int hour2, minute2;

	scanf_s("%d %d", &hour1, &minute1);
	printf("Enter hour1=%d minute1=%d\n", hour1, minute1);



	scanf_s("%d %d", &hour2, &minute2);
	printf("Enter hour2=%d minute2=%d\n", hour2, minute2);
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	int t = t2 - t1;
	printf("时间差是%d小时%d分", t / 60, t % 60);
	return 0;
}