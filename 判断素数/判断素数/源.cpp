#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x;
printf("Enter x:");
	scanf("%d", &x);
	
	
	int q = 1;//��ʾ������//
	int i;
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			q = 0;
			break;
		}
	}
	if (q == 1) {
		printf("%d������", x);
	}
	else {
		printf("%d��������", x);
	}
	return 0;
}