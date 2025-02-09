#include <stdio.h>
int main()
{
    int n, fac = 1;
    printf("Enter a number please : ");
    scanf("%d", &n);
    int i = n;
    while (i > 0)
    {
        fac *= i;
        i--;
    }
    printf("Factorial value is = %d", fac);
    return 0;
}