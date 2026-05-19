#include<stdio.h>

int main()
{
    int arr[10], n, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &pos);

    // Shift elements to the right
    for(int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos - 1] = element;

    n++;

    printf("Array after insertion:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}