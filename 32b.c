#include <stdio.h>
#include <string.h>

void reverse(char *s) {
    int i = 0, j = strlen(s) - 1;
    while(i < j) {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }
}

int main() {
    FILE *fp = fopen("MahiRabari_25CE095.txt", "r");
    if(fp == NULL) {
        printf("File not found!");
        return 0;
    }

    char word[100];
    int count = 0;

    while(fscanf(fp, "%s", word) != EOF) {
        reverse(word);
        printf("%s ", word);
        count++;
    }

    fclose(fp);
    return 0;
}

