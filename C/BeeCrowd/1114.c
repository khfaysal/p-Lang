#include <stdio.h>
int main()
{
    int a;
    do
    {
        scanf("%d", &a);

        if (a == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }

        else
        {
            printf("Senha Invalida\n");
        }

        } while (a > 0);

    return 0;
}