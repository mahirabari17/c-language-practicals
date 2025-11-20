
#include <stdio.h>

int main() {
    int seconds;

    printf("Enter the number of seconds to start countdown: ");
    scanf("%d", &seconds);

    if (seconds < 0) {
        printf("Please enter a non-negative number.\n");
        return 0;
    }

    while (seconds >= 0) {
        printf("%d\n", seconds);
        seconds--;
    }

    printf("Countdown completed!\n");
    return 0;
}
