#include <stdio.h>

// Function to calculate sum of array elements
int findSum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int arr[100], n, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum = findSum(arr, n);

    printf("Sum of array elements = %d\n", sum);

    return 0;
}