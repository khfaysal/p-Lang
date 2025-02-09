#include <stdio.h>
int main()
{
    int X, Y, sum = 0;
    int n = 0;
    scanf("%d", &X);
    scanf("%d", &Y);
    if (X < Y)
    {
        for (int i = X; i <= Y; i = i + 2)
        {
            if (X % 2 != 0)
            {
            
                printf("%d\n", i);
            }
            else if (X % 2 == 0)
            {
                printf("%d\n", i + 1);
            }
        }
    }
    else if (X > Y)
    {
        for (int i = Y; i <= X; i = i + 2)
        {
            if (Y % 2 != 0)
            {
                printf("%d\n", i);
            }
            else if (Y % 2 == 0)
            {
                printf("%d\n", i + 1);
            }
        }
    }

    return 0;
}