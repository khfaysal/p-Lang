#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a % 2 != 0 )
    {
        for (int i = a; i < a + 12; i = i + 2)
        {
            printf("%d\n", i);
        }
    }
    else if (a % 2 == 0)
    {
        for (int i = a; i < a + 12; i = i + 2)
        {
            printf("%d\n", i+1);
        }
    }
    return 0;
}