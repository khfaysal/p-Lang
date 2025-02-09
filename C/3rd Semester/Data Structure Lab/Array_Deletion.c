#include <stdio.h>
int main()
{

    int ar[] = {0,1, 2, 3, 4, 5, 6, 7, 8, 9};
    int pos;
    printf("Enter the position to delete: \n");
    scanf("%d", &pos);
    int n = sizeof(ar) / sizeof(ar[0]); // Size of a any array.

    for (int i = pos; i < n; i++)
    {
        ar[i] = ar[i + 1];
    }

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("%d", n);
    return 0;
}