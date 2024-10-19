#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	printf("Enter n : ", &n);
	scanf("%d ", &n);
	do {
		printf("%d ", n % 10);
		n = n / 10;

	} while (n != 0);
	
	return 0;
}