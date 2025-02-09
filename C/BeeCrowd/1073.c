#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int p = 0;

    for (int i = 2; i <= a; i = i + 2)
    {
        printf("%d^2 = %d\n", i, i * i);
    }

    return 0;
}