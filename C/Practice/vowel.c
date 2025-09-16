#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a word: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char cha = str[i];
        if (cha == 'a' || cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u' ||
            cha == 'A' || cha == 'E' || cha == 'I' || cha == 'O' || cha == 'U')
        {
            printf("*");
        }
        else
        {
            printf("%c", cha);
        }
    }
    return 0;
}
