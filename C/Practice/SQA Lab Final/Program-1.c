#include <stdio.h>
int main()
{
    int age;
    float discount;
    int valid_input = 0;
    while (!valid_input)
    {
        printf("Enter your age: ");
        if (scanf("%d", &age) != 1)
        {
            while (getchar() != '\n')
                ;
            printf("Age must be an integer.\n");
        }
        else if (age < 0)
        {
            printf("Age must be positive.\n");
        }
        else
        {
            valid_input = 1;
        }
    }
    if (age < 18)
    {
        discount = 10;
    }
    else if (age >= 18 && age <= 60)
    {
        discount = 5;
    }
    else
    {
        discount = 15;
    }
    printf("You are eligible for a %.2f%% discount.\n", discount);
    return 0;
}
