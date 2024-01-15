#include <stdio.h>
void main()
{
    int size, i;
    printf("enter the size of arrays:");
    scanf("%d", &size);
    int a[size], b[size];
    printf("enter the elements of array 1:");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the elements of array 2:");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &b[i]);
    }
    int temp[size];
    // interchange starting
    for (i = 0; i < size; i++)
    {
        temp[i] = b[i];
    }
    for (i = 0; i < size; i++)
    {
        b[i] = a[i];
    }
    for (i = 0; i < size; i++)
    {
        a[i] = temp[i];
    }
    // completed
    printf("elements of array 1 :");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    printf("elements of array 2 :");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", b[i]);
    }
}