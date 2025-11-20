#include <stdio.h>

int main() {
    int n;
    float prices[100], temp;
    float *p = prices;

    printf("Enter number of items: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: No items to sort.\n");
        return 0;
    }

    printf("Enter %d prices:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Price %d: ", i+1);
        scanf("%f", (p + i));
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    printf("\nSorted Prices: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f", *(p + i));
        if (i != n - 1) printf(", ");
    }

    return 0;
}

