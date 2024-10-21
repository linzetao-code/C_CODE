#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int o = n;
	int r = 0;
	while(n>0){
		r = r * 10 + n % 10;
		n /= 10;
	}
	if (o == r) {
		printf("%d yes\n", o);
	}
	else {
		printf("no\n");
	}
	return 0;
}