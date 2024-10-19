#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, n, sum;
	printf("Enter n:");
	scanf("%d", &n);
	sum = 0;

	for (i = 1; i <= n; i++) {
		sum = sum + i;
		
		
	}
	printf("Sum of nubbers from 1 to %d is %d\n ", n, sum);
	return 0;
} 