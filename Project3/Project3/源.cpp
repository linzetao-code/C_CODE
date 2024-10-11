<<<<<<< HEAD
#include<stdio.h>
int main()
{
	double x, y;
	printf("Enter x:(x>0)\n");
	scanf_s("%lf", &x);
	if (x < 15) {
		y = 4 * x / 3;
	}
	else {
		y = 2.5 * x - 10.5;
	}
	printf("y=f(%f)=%.2f", x, y);
	return 0;

=======
#include<stdio.h>
int main()
{
	double x, y;
	printf("Enter x:(x>0)\n");
	scanf_s("%lf", &x);
	if (x < 15) {
		y = 4 * x / 3;
	}
	else {
		y = 2.5 * x - 10.5;
	}
	printf("y=f(%f)=%.2f", x, y);
	return 0;

>>>>>>> 892b4dadfec879b3e0cb83ebda886a008576fe13
}