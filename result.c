#include <stdio.h>
void main()
{
    float mark;
    printf("enter your marks:");
    scanf("%f", &mark);
    if (mark >= 50 && mark <= 100)
    {
        printf("passed");
    }
    else
    {
        printf("failed");
    }
}