#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int hour1, minute1;
	int hour2, minute2;

	scanf_s("%d %d", &hour1, &minute1);
	



	scanf_s("%d %d", &hour2, &minute2);
	
	int ih=hour2-hour1;
	int im=minute2-minute1;
	if (im < 0) {
		im = im + 60;
		ih--;
	}
	printf("ʱ�����%dСʱ%d��", ih,im);
	return 0;
}