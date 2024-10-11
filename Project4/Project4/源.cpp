<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
    int fahr, lower, upper;
    double celsius;
    scanf_s("%d", &lower);
    printf("Enter lower=%d", lower);
    scanf_s("%d", &upper);
        
    printf("Enter upper=%d", upper);
    
    
    if (lower <= upper) {
        printf("fahr celsius\n");
        for (fahr = lower; fahr <= upper; fahr++) {
            celsius = (5.0 / 9.0)*(fahr-32);
            printf("%4d%6.lf",fahr, celsius);
        }
    }else{
        printf("Invalid Value!\n");
    }
    return 0;
    }
=======
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
    int fahr, lower, upper;
    double celsius;
    scanf_s("%d", &lower);
    printf("Enter lower=%d", lower);
    scanf_s("%d", &upper);
        
    printf("Enter upper=%d", upper);
    
    
    if (lower <= upper) {
        printf("fahr celsius\n");
        for (fahr = lower; fahr <= upper; fahr++) {
            celsius = (5.0 / 9.0)*(fahr-32);
            printf("%4d%6.lf",fahr, celsius);
        }
    }else{
        printf("Invalid Value!\n");
    }
    return 0;
    }
>>>>>>> 892b4dadfec879b3e0cb83ebda886a008576fe13
