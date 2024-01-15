#include <stdio.h>
void main()
{
    int size, i, j, temp;
    printf("enter the size of an array :");
    scanf("%d", &size);
    int a[size];
    printf("enter the elements of an array :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    // sorting
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                continue;
            }
            else
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    // completed
    printf("array after sorting is:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
}