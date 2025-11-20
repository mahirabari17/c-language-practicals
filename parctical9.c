#include <stdio.h>

int main() {
    float total, discount = 0, finalAmount;

    printf("Enter total shopping amount: ");
    scanf("%f", &total);

    if (total < 0) {
        printf("Invalid amount!\n");
        return 0;
    }

    if (total < 1000) {
        discount = 0;
    }
    else if (total <= 5000) {
        discount = total * 0.10;
    }
    else {
        discount = total * 0.20;
    }

    finalAmount = total - discount;

    printf("\n Bill Summary \n");
    printf("Total Amount: %.2f\n", total);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount to Pay: %.2f\n", finalAmount);

    return 0;
}

