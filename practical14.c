
#include <stdio.h>

int main() {
    int enteredPin, choice;
    float balance = 5000, amount;
    int withdrawals = 0;
     int pin = 2007;

    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN !! Access denied.\n");
        return 0;
    }

    do {
        printf("ATM Menu\n");
        printf("1. Withdraw Money\n");
        printf("2. Deposit Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (withdrawals >= 5) {
                    printf("Daily withdrawal limit reached.\n");
                    break;
                }
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid amount.\n");
                } else if (amount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    balance -= amount;
                    withdrawals++;
                    printf(" Remaining balance: %.2f\n", balance);
                }
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid deposit amount.\n");
                } else {
                    balance += amount;
                    printf(" New balance:%.2f\n", balance);
                }
                break;

            case 3:
                printf("Current balance: %.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using the ATM!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}
