// #include <stdio.h>
// int main()
// {
//     int n;
//     do
//     {
//         printf("enter number : \n");
//         scanf("%d", &n);

//         if (n % 2 != 0)
//         {
//             printf("You entered odd number, so it stoped.");

//             break;
//         }
//     } while (1);
//     return 0;
// }


#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("enter number : \n");
        scanf("%d", &n);

        if (n % 7 == 0)
        {
            printf("You entered the number which is multiple of 7, so it stoped.");

            break;
        }
    } while (1);
    return 0;
}