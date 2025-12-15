#include <stdio.h>

int main()
{
    int choice;
    float balance = 0, amount;
    int validInput;

    while (1)
    {

        printf("\n===== ATM MENU =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Reset Account\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        validInput = scanf("%d", &choice);

        // if scanf fails
        if (validInput != 1)
        {
            printf("Invalid input! Please enter numbers only.\n");
            while (getchar() != '\n')
                ; // clear invalid input buffer
            continue;
        }

        switch (choice)
        {

        case 1: // Deposit
            printf("Enter deposit amount: ");
            validInput = scanf("%f", &amount);

            if (validInput != 1 || amount <= 0)
            {
                printf("Invalid deposit amount!\n");
                while (getchar() != '\n')
                    ;
                break;
            }

            balance += amount;
            printf("Deposit successful! New balance: %.2f\n", balance);
            break;

        case 2: // Withdraw
            printf("Enter withdrawal amount: ");
            validInput = scanf("%f", &amount);

            if (validInput != 1 || amount <= 0)
            {
                printf("Invalid withdrawal amount!\n");
                while (getchar() != '\n')
                    ;
                break;
            }

            if (amount > balance)
            {
                printf("Insufficient balance!\n");
            }
            else
            {
                balance -= amount;
                printf("Withdrawal successful! Remaining balance: %.2f\n", balance);
            }
            break;

        case 3: // Check balance
            printf("Current Balance: %.2f\n", balance);
            break;

        case 4: // Reset
            balance = 0;
            printf("Account reset successful.\n");
            break;

        case 5: // Exit
            printf("Exiting ATM System. Goodbye!\n");
            return 0;

        default:
            printf("Invalid menu choice! Try again.\n");
        }
    }

    return 0;
}
