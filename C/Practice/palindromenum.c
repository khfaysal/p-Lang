#include <stdio.h>
#include <string.h>

int main()
{
    int a, b;
    char str[10000];
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        sprintf(str, "%d ", i);
        int ispalindrome = 1;
        int len = strlen(str);
        for (int j = 0; j < len / 2; j++)
        {
            if (str[j] != str[len - j - 2])
            { // -2 to ignore the space at the end
                ispalindrome = 0;
                break;
            }
            if (ispalindrome)
            {
                printf("%s", str);
            }
        }
    }
}