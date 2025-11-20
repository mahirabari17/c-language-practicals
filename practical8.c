#include <stdio.h>

int main() {
    int age, choice;
    char again;

    do {
        printf("1. Check Eligibility\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter your age: ");
            scanf("%d", &age);

            if (age < 0) {
                printf("Invalid age!\n");
            }
            else if (age < 18) {
                printf("Not eligible to open account.\n");
            }
            else if (age <= 59) {
                printf("Eligible for Regular Savings Account.\n");
            }
            else {
                printf("Eligible for Senior Citizen Account.\n");
            }
        }
        else if (choice == 2) {
            printf("Exiting... Thank you!\n");
            break;
        }
        else {
            printf("Invalid choice!\n");
        }

        printf("Do you want to check again? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    printf("Goodbye!\n");
    return 0;
}

