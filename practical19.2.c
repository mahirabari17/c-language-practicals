


#include <stdio.h>
int main() {
    int i, j;
    int n = 9;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= n; j++) {
            if(i == 1)
                printf("%d ", j);
            else if(j == i || j == n - i + 1)
                printf("%d ", j);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
