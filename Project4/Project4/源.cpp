#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int d, f, i, n;
	double item, sum;
	printf("Enter n:");
	scanf("%d", &n);
	f = 1;
	d = 1;
	sum = 0;
	item = 1;
		for (i = 1; i <= n; i++) {
			
			f=-f;
			d = d + 2;
			item = f * 1.0 / d;
            sum = sum + item;
		}
	printf("sum=%f\n", sum);
	return 0;

}