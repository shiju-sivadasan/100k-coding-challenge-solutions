#include <stdio.h>
void main()
{
    int num, i, result;
    printf("enter the number:");
    scanf("%d", &num);
    printf("multiplication table of %d is :\n", num);
    for (i = 1; i <= 10; i++)
    {
        result = i * num;
        printf("%d * %d = %d\n", i, num, result);
    }
}