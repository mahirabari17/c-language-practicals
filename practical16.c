#include <stdio.h>

int main() {
    int total = 21, user_pick, comp_pick;

    printf("Welcome to the Matchstick Game!\n");


    while (total > 1) {
        // User's turn
        printf("Matchsticks remaining: %d\n", total);
        printf("Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &user_pick);


        if (user_pick < 1 || user_pick > 4) {
            printf("Invalid choice! Please pick between 1 and 4.\n");
            continue;
        }

        total -= user_pick;



        // Computer's turn
        comp_pick = 5 - user_pick;
        printf("Computer picks %d matchsticks.\n", comp_pick);
        total -= comp_pick;

        if (total == 1) {
            printf("Only 1 matchstick left.\n");
            printf("Computer wins! You lose\n");
            break;
        }
    }

    return 0;
}

