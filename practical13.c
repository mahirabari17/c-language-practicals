#include <stdio.h>

int main() {
    int water;

    for(water = 10; water <= 100; water += 10) {
        printf("Current water level: %d liters\n", water);
    }

    printf("Tank is full.\n");
    return 0;
}

