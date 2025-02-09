#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);
    int n;
    for (int i = 1; i <= a; i++)
    {

        printf("%d\n", i);
    }

    return 0;
}