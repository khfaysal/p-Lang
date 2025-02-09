#include <stdio.h>

int main()
{

    int size;

    printf("Enter the Size of the Array: ");
    scanf("%d", &size);
    int ar[size];

    printf("Enter the Elements of the Array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ar[i]);
    }

    int pos, elm;
    printf("Enter the Index to insert: ");
    scanf("%d", &pos);
    printf("Enter the Element to Insert in Index %d: ", pos);
    scanf("%d", &elm);

    for (int i = size; i > pos; i--)
    {
        ar[i] = ar[i - 1];
    }
    ar[pos] = elm;
    size++;

    printf("Final Result: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}