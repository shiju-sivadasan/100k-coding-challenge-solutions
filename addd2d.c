#include <stdio.h>
void main()
{
    // declare variables
    int size, i, j;
    printf("enter the size of arrays:");
    scanf("%d", &size);
    // declare arrays
    int a[size][size];
    int b[size][size];
    int sum[size][size];
    // array-1
    printf("enter the values of array 1:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    // array-2
    printf("enter the values of array 2:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    // values of array 1
    printf("values of array 1:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    // values of array 2
    printf("values of array 2:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    // sum of these two arrays:
    printf("sum of these 2 arrays is :\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}