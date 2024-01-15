#include <stdio.h>
void main()
{
    int num1;
    float num2, sum;
    printf("enter the number 1 :");
    scanf("%d", &num1);
    printf("enter the number 2 :");
    scanf("%f", &num2);
    sum = num1 + num2;
    printf("sum of %d and %f is : %f", num1, num2, sum);
}