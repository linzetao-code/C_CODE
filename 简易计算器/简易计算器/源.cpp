#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	char op;
	printf("д��һ�����ʽ��");
	scanf("%d%c%d", &a, &op, &b);
	switch (op)
	{
	case'+':
		printf("=%d", a + b);
		break;
	case'-':
		printf("=%d", a - b);
		break;
	case'*':
		printf("=%d", a * b);
		break;
	case'/':
		if (b != 0) {
			printf("=%d", a / b);
		}
		else {
			printf("not be 0!");
		}

		break;
	case'%':
		if (b != 0) {
			printf("=%d", a % b);
		}
		else {
			printf("not be 0!");
		}
	    break;
	default:
		printf("Unknow operator");
		break;
	}
	return 0;
}