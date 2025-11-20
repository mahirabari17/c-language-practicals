#include <stdio.h>

int main() {
    char note1[200], note2[200], result[400];
    int choice;

    printf("Enter your note: ");
    gets(note1);

    while (1) {
        printf("Alex's Note Manager\n");
        printf("1. Calculate Length\n");
        printf("2. Reverse Note\n");
        printf("3. Compare Two Notes\n");
        printf("4. Copy Note\n");
        printf("5. Concatenate Notes\n");
        printf("6. Convert to Upper Case\n");
        printf("7. Convert to Lower Case\n");
        printf("8. Capitalize Each Word\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1) {
            int len = 0;
            while (note1[len] != '\0')
                len++;
            printf("Length of note: %d\n", len);
        }

        else if (choice == 2) {
            int len = 0;
            while (note1[len] != '\0')
                len++;
            printf("Reversed Note: ");
            for (int i = len - 1; i >= 0; i--)
                printf("%c", note1[i]);
            printf("\n");
        }

        else if (choice == 3) {
            printf("Enter another note to compare: ");
            gets(note2);
            int i = 0, same = 1;
            while (note1[i] != '\0' || note2[i] != '\0') {
                if (note1[i] != note2[i]) {
                    same = 0;
                    break;
                }
                i++;
            }
            if (same)
                printf("Notes are identical.\n");
            else
                printf("Notes are different.\n");
        }

        else if (choice == 4) {
            int i = 0;
            while (note1[i] != '\0') {
                result[i] = note1[i];
                i++;
            }
            result[i] = '\0';
            printf("Copied Note: %s\n", result);
        }

        else if (choice == 5) {
            printf("Enter another note to concatenate: ");
            gets(note2);
            int i = 0, j = 0;
            while (note1[i] != '\0') {
                result[i] = note1[i];
                i++;
            }
            while (note2[j] != '\0') {
                result[i++] = note2[j++];
            }
            result[i] = '\0';
            printf("Concatenated Note: %s\n", result);
        }

        else if (choice == 6) {
            for (int i = 0; note1[i] != '\0'; i++) {
                if (note1[i] >= 'a' && note1[i] <= 'z')
                    note1[i] = note1[i] - 32;
            }
            printf("Upper Case Note: %s\n", note1);
        }

        else if (choice == 7) {
            for (int i = 0; note1[i] != '\0'; i++) {
                if (note1[i] >= 'A' && note1[i] <= 'Z')
                    note1[i] = note1[i] + 32;
            }
            printf("Lower Case Note: %s\n", note1);
        }

        else if (choice == 8) {
            int cap = 1;
            for (int i = 0; note1[i] != '\0'; i++) {
                if (cap && note1[i] >= 'a' && note1[i] <= 'z') {
                    note1[i] = note1[i] - 32;
                    cap = 0;
                } else if (note1[i] == ' ') {
                    cap = 1;
                } else {
                    cap = 0;
                }
            }
            printf("Capitalized Note: %s\n", note1);
        }

        else if (choice == 9) {
            printf("Goodbye\n");
            break;
        }

        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
