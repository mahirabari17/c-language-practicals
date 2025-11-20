
#include <stdio.h>

int main() {
    float distance = 0.0;
    int minute;

    for (minute = 1; minute <= 20; minute++) {
        distance += 0.5;
        printf("Minute %d: Distance covered = %.1f km\n", minute, distance);
    }

    printf("Marathon complete!\n");
    return 0;
}
