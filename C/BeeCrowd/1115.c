#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    do
    {
        scanf("%d %d", &a, &b);

        if (a > 0 && b > 0)
        {
            printf("primeiro\n");
        }
        else if (a > 0 && b < 0)
        {
            printf("quarto\n");
        }
        else if (a < 0 && b < 0)
        {
            printf("terceiro\n");
        }
        else if (a < 0 && b > 0)
        {
            printf("segundo\n");
        }
        else
        {
            return 0;
        }
    } while (a != 0 || b != 0);

    return 0;
}