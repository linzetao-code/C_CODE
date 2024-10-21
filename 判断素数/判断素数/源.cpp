#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x;
printf("Enter x:");
	scanf("%d", &x);
	
	
	int q = 1;//表示是素数//
	int i;
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			q = 0;
			break;
		}
	}
	if (q == 1) {
		printf("%d是素数", x);
	}
	else {
		printf("%d不是素数", x);
	}
	return 0;
}