// #include <stdio.h>
// int main()
// {
//     int ar[5] = {5, 2, 3, 2, 9};
//     for (int i = 0; i < 6; i++)
//     {
//         if (ar[i] == 2)
//         {
//             printf("%d\n\n\n\n", i);
//             ar[i] = 10;
//         }
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d\n", ar[i]);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
  int ar[5] = {5, 2, 3, 2, 9};
  int index = 2;

  for (int i = index + 1; i < 4; i++)
  {
    ar[i - 1] = ar[i];
  }
  for (int i = 1; i < 5; i++)
  {
    printf("%d\n", i);
  }

  return 0;
}