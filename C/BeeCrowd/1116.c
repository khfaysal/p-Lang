#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   double d, a, b;
   for (int i = 0; i < n; i++)
   {
      scanf("%lf%lf", &a, &b);
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
