#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	int max = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (a > c) {
			max = a;
		}
		else {
			max = c;
		}
	}else{
		if (b > c) { max = b; }
	else { max = c; }
	}
	printf("max=%d", max);
	return 0;
	}
