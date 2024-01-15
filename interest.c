#include <stdio.h>
void main()
{
    int p;
    float r, n, si;
    printf("enter the principle amount :");
    scanf("%d", &p);
    printf("enter the rate of interest :");
    scanf("%f", &r);
    printf("enter the number of years :");
    scanf("%f", &n);
    si = (p * r * n) / 100;
    printf("simple interest is : %f", si);
}