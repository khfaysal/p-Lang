#include <stdio.h>


void insertm(int arr[], int size, int element)
{
    int position = size / 2;
    for (int i = size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
}



int main()
{
    int max_size = 100;
    int arr[max_size];
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter element to insert in the middle: ");
    scanf("%d", &element);

    if (size < max_size)
    {
        insertm(arr, size, element);
        size++;
    }
    else
    {
        printf("Array is full: \n");
    }

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}