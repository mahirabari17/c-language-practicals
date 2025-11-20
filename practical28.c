#include <stdio.h>


union Book {
    int accessionno;
    char title[50];
    char author[50];
    float price;
    int flag;
};

int main() {
    union Book b;

    printf("Enter Book Accession Number: ");
    scanf("%d", &b.accessionno);

    printf("Enter Book Title: ");
    scanf("%s", b.title);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("Enter Book Price: ");
    scanf("%f", &b.price);

    printf("Enter Book Status (1 = Issued, 0 = Available):\n ");
    scanf("%d", &b.flag);

    printf(" Book Details\n");
    printf("Accession Number: %d\n", b.accessionno);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
    printf("Status: %s\n", (b.flag == 1) ? "ISSUED" : "AVAILABLE");

    return 0;
}

