#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, count,tn;
	count = 0;
	printf("Enter n:");
	scanf("%d", &n);
	tn = n;

	if (n < 0) {
		tn = -tn;
	}
	do {
		count++;
		tn = tn / 10;
	}while( tn!= 0);
	printf("It contains %d digits", count);
	return 0;
}