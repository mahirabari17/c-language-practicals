#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter student's marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid input! Marks must be between 0 and 100.\n");
        return 0;
    }

    grade = (marks >= 90) ? 'A' :(marks >= 80) ? 'B' :(marks >= 70) ? 'C' :(marks >= 60) ? 'D' : 'F';

    printf("Grade: %c\n", grade);

    return 0;
}

