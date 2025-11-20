#include <stdio.h>

int main() {
    FILE *fp;
    int n, mark;

    fp = fopen("Marks.dat", "wb");
    if(fp == NULL) {
        printf("File opening error!");
        return 0;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &mark);
        putw(mark, fp);
    }
    fclose(fp);

    fp = fopen("Marks.dat", "rb");
    if(fp == NULL) {
        printf("File opening error!");
        return 0;
    }

    printf("\nStored Marks:\n");
    while(!feof(fp)) {
        mark = getw(fp);
        if(!feof(fp))
            printf("%d ", mark);
    }

    fclose(fp);
    return 0;
}

