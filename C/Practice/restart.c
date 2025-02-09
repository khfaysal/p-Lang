#include <stdio.h>

void insertAtStart(int arr[], int size, int element)
{
    for (int i = size; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = element;
}


int main()
{
    int max_size = 100;
    int arr[max_size];
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter element to insert at start: ");
    scanf("%d", &element);

    if (size < max_size)
    {
        insertAtStart(arr, size, element);
        size++; 
    }
    else
    {
        printf("Array is full\n");
    }

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}