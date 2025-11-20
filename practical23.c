#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of days: ");
    scanf("%d", &n);

    int prices[n];
    printf("Enter prices for each day:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &prices[i]);

    int minPrice = prices[0];
    int maxProfit = 0;

    for(i = 1; i < n; i++) {
        int profit = prices[i] - minPrice;
        if(profit > maxProfit)
            maxProfit = profit;

        if(prices[i] < minPrice)
            minPrice = prices[i];
    }

    printf("Maximum Profit: %d\n", maxProfit);
    return 0;
}

