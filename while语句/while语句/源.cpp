#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x;
	int n = 0;
  
		scanf("%d", &x);
	n++;
	x /= 10;
	while (x > 0) {
		n++;
		x /= 10;
		printf("x=%d,n=%d\n",x, n);
	}
	printf("n=%d",  n);
return 0;
}