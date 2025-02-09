#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N % 2 == 0)
    {
        if (N > 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (N < 0)
        {
            printf("EVEN NEGATIVE\n");
        }
    }
    else if (N % 2 != 0)
    {
        if (N > 0)
        {
            printf("ODD POSITIVE\n");
        }
        else if (N < 0)
        {
            printf("ODD NEGATIVE\n");
        }
    }
    else if (N == 0)
    {
        printf("NULL\n");
    }
    return 0;
}