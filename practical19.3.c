#include <stdio.h>
int main() {
    int i, j, s, n = 5;

    // Upper part
    for(i = n; i >= 1; i--) {
        for(s = n; s > i; s--)
            printf("  ");
        for(j = i; j >= 1; j--)
            printf("%d ", j);
        for(j = 2; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    // Lower part
    for(i = 2; i <= n; i++) {
        for(s = n; s > i; s--)
            printf("  ");
        for(j = i; j >= 1; j--)
            printf("%d ", j);
        for(j = 2; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}



