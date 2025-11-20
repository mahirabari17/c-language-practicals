#include <stdio.h>

void displaySavings(int n);


int main() {
    int n;
    printf("Enter number of months: ");
    scanf("%d", &n);

    if (n < 1)
        printf("Invalid input! Number of months must be at least 1.\n");
    else
        displaySavings(n);

    return 0;
}

void displaySavings(int n) {
    long long a = 1, b = 1, next;
    printf("Savings Growth Over %d Months:\n", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1)
            next = a;
        else if (i == 2)
            next = b;
        else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("Month %d: %lld\n", i, next);
    }
}
