#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	int sum = 0;
	int count = 0;
	scanf("%d", &n);
	while (n != -1) {
		sum = sum + n;
		count++;
		scanf("%d", &n);
	}
	printf("%f\n", sum / count);
	return 0;
}