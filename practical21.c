#include <stdio.h>

int main() {
    int num[25];
    int i, pos = 0, neg = 0, even = 0, odd = 0;

    printf("Enter 25 integers:\n");
    for(i = 0; i < 25; i++) {
        scanf("%d", &num[i]);

        if(num[i] > 0)
        pos++;
        else if(num[i] < 0)
            neg++;

        if(num[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Total Positive Numbers: %d\n", pos);
    printf("Total Negative Numbers: %d\n", neg);
    printf("Total Even Numbers: %d\n", even);
    printf("Total Odd Numbers: %d\n", odd);

    return 0;
}

