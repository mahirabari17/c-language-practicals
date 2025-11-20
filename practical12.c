#include <stdio.h>

int main() {
    printf("NAME : MAHI RABARI\nID NO: 25CE095\n");

    int i;
    for(i = 1; i <= 50; i++) {
        if(i % 5 == 0)
            printf("Book ID: %d (Special Edition)\n", i);
        else
            printf("Book ID: %d\n", i);
    }
    return 0;
}

