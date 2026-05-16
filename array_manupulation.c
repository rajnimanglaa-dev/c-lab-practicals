#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int pos, value, key;

    // INPUT ARRAY
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // DISPLAY
    printf("\nOriginal Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // INSERT
    printf("\n\nEnter position for insertion: ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    for(i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    printf("\nArray After Insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // UPDATE
    printf("\n\nEnter position to update: ");
    scanf("%d", &pos);

    printf("Enter new value: ");
    scanf("%d", &value);

    arr[pos] = value;

    printf("\nArray After Updation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // DELETE
    printf("\n\nEnter position to delete: ");
    scanf("%d", &pos);

    for(i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("\nArray After Deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // SEARCH
    printf("\n\nEnter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("%d found at position %d", key, i);
        }
    }

    return 0;
}