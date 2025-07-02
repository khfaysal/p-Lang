#include <stdio.h>
int main()
{
  int arr[10], a, n = 6;
  printf("\nEnter six numbers bellow: \n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}