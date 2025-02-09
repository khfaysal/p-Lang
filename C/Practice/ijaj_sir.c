#include <iostream>

int main()
{

    int ar[99];

    int n, pos;

   cout<<"Enter the size of the array: ";

   cin>> n;

    // printf("Enter %d elements:\n", n);
    cout<< "Enter %d elements: ", n<<endl;

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &ar[i]);
    }

    printf("Enter the position of the element to be deleted: ");

    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {

        printf("Invalid position\n");

        return 1;
    }

    for (int i = pos - 1; i < n - 1; i++)
    {

        ar[i] = ar[i + 1];
    }

    n--;

    printf("New array: ");

    for (int i = 0; i < n; i++)
    {

        printf("%d ", ar[i]);
    }

    printf("\n\n");
    return 0;
}