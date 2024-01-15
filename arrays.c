#include <stdio.h>

#define MAX_SIZE 100

// Function to get values for the array
void getArray(int arr[], int size)
{
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to display the array elements
void displayArray(int arr[], int size)
{
    printf("Array elements are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main()
{
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array (max 100): ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE)
    {
        printf("Invalid size! Please enter a size between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    // Call function to get values for the array
    getArray(arr, size);

    // Call function to display the array elements
    displayArray(arr, size);

    return 0;
}