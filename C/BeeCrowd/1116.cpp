#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);
    double d;
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        d = a / b;
        if (b == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1lf\n", d);
        }
    }

    return 0;
}
