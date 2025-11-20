#include <stdio.h>

int main() {
    int rows = 5, seats = 10;    // fixed seating arrangement
    int theatre[rows][seats];
    int r, s;

    // initialize all seats as available (0)
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < seats; j++) {
            theatre[i][j] = 0;
        }
    }

    int n;
    printf("Enter the number of reserved seats: ");
    scanf("%d", &n);

    // input reserved seats
    for(int i = 1; i <= n; i++) {
        printf("Enter row and seat number for reserved seat %d (e.g., 2 5): ", i);
        scanf("%d %d", &r, &s);

        // converting to 0-based indexing
        if(r >= 1 && r <= rows && s >= 1 && s <= seats) {
            theatre[r-1][s-1] = 1;   // 1 means reserved
        } else {
            printf("Invalid seat position! Skipping...\n");
        }
    }

    // print seating chart
    printf("\nSeating Chart:\n");
    for(int i = 0; i < rows; i++) {
        printf("Row %d: ", i + 1);
        for(int j = 0; j < seats; j++) {
            if(theatre[i][j] == 1)
                printf("X ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}

