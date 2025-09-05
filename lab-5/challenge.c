#include <stdio.h>

int main(void) 
{
    double balance = 0.0, amount;
    int choice;

    for (;;) 
    { 
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Current Balance: %.2f\n\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                balance += amount;
                printf("Deposit successful.\n\n");
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount <= balance) 
                {
                    balance -= amount;
                    printf("Withdrawal successful.\n\n");
                } else {
                    printf("Insufficient funds.\n\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                return 0;  
            default:
                printf("Invalid option.\n\n");
        }
    }
    
    return 0;
}
