#include <stdio.h>
int main()
{
    int n, arr[100];
    int key;

    printf("Enter The Number of element: ");
    scanf("%d", &n);
    printf("Enter elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the Searching Element: ");
    scanf("%d", &key);
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == key)
        {
            count++;
            printf("Element Found at %d\n", i+1);
        }
    }
    if (count == 0)
    {
        printf("Not Found\n");
    }

    return 0;
}
