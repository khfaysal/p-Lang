#include <stdio.h>

int main()
{
    int n, num_to_delete;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &num_to_delete);

    for (int i = 0; i < n; i++)
    {
        if (array[i] == num_to_delete)
        {
            for (int j = i; j < n - 1; j++)
            {
                array[j] = array[j + 1];
            }
            n--;
            i--;
        }
    }

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}