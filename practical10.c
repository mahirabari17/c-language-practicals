#include <stdio.h>

int main() {
    int choice;
    int total = 0;

    printf(" MENU \n");
    printf("1. Burger - 150\n");
    printf("2. Pizza - 200\n");
    printf("3. Pasta - 120\n");
    printf("4. Sandwich - 100\n");
    printf("5. French Fries - 80\n");
    printf("Enter 0 to finish your order.\n");

    do {
        printf("Enter item number : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                total += 150;
                printf("Burger added! Total = %d\n", total);
                break;
            case 2:
                total += 200;
                printf("Pizza added! Total = %d\n", total);
                break;
            case 3:
                total += 120;
                printf("Pasta added! Total = %d\n", total);
                break;
            case 4:
                total += 100;
                printf("Sandwich added! Total = %d\n", total);
                break;
            case 5:
                total += 80;
                printf("French Fries added! Total = %d\n", total);
                break;
            case 0:
                printf("Order complete.\n");
                break;
            default:
                printf("Invalid choice! Please select from menu.\n");
        }

    } while (choice != 0);

    printf("Your final total is: %d\n", total);
    printf("Thank you for ordering!\n");

    return 0;
}

