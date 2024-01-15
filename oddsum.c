#include <stdio.h>
void main()
{
    int i, limit, sum = 0;
    printf("enter the limit :");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        sum = sum + i;
    }
    printf("the sum of the odd numbers within the limit : %d", sum);
}