#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i <= a; i = i + 2)
    {
        printf("%d", i);
    }
    return 0;
}