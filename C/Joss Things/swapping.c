#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter the value of A and B: \n");
    scanf("%d \t %d", &a, &b);

    a = a - b;
    b = a + b;
    a = b - a;
    
    printf("a = %d\t b = %d\n", a, b);
    return 0;
}