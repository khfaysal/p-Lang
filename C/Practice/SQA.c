#include <stdio.h>
int main()
{
    int choice;
    float m1 = -1, m2 = -1, m3 = -1, avg;
    do
    {
        printf("\n1. Enter Marks\n2. Calculate Grade\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter marks for 3 subjects: ");
            scanf("%f %f %f", &m1, &m2, &m3);
            break;
        case 2:
            if (m1 < 0 || m2 < 0 || m3 < 0)
            {
                printf("Marks not entered yet!\n");
            }
            else
            {
                avg = (m1 + m2 + m3) / 3;
                printf("Average = %.2f\n", avg);
                if (avg >= 80)
                    printf("Grade: A\n");
                else if (avg >= 70)
                    printf("Grade: B\n");
                else if (avg >= 60)
                    printf("Grade: C\n");
                else if (avg >= 50)
                    printf("Grade: D\n");
                else
                    printf("Grade: F\n");
            }
            break;
        case 3:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 3);
    return 0;
}
