#include <stdio.h>
void main()
{
    float totalmark;
    printf("enter your mark percentage :");
    scanf("%f", &totalmark);
    if (totalmark >= 90 && totalmark <= 100)
    {
        printf("GRADE A");
    }
    else if (totalmark >= 80 && totalmark <= 89)
    {
        printf("GRADE B");
    }
    else if (totalmark >= 70 && totalmark <= 79)
    {
        printf("GRADE C");
    }
    else if (totalmark >= 60 && totalmark <= 69)
    {
        printf("GRADE D");
    }
    else if (totalmark >= 50 && totalmark <= 59)
    {
        printf("GRADE E");
    }
    else
    {
        printf("failed");
    }
}