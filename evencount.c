#include <stdio.h>
void main()
{
    int size, i, count = 0;
    printf("enter the size of an array :");
    scanf("%d", &size);
    int a[size];
    printf("enter the elements of an array :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    // even number checking;
    for (i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }
    printf("Number of even numbers in the given array is : %d", count);
}