#include <stdio.h>
#include <string.h>

#define MAX 100

// Global book list
char books[MAX][50] = {
    "C Programming",
    "Data Structures",
    "Database Systems",
    "Operating Systems",
    "Computer Networks"
};

int totalBooks = 5;  // current count

// 1) Display list of books (no arguments, no return)
void displayBooks() {
    printf("\n--- Available Books ---\n");
    for(int i = 0; i < totalBooks; i++) {
        printf("%d. %s\n", i+1, books[i]);
    }
}

// 2) Get total number of books (no arguments, return int)
int getTotalBooks() {
    return totalBooks;
}

// 3) Borrow a book (argument passed, no return value)
void borrowBook(char *bookName) {
    int found = -1;

    for(int i = 0; i < totalBooks; i++) {
        if(strcmp(books[i], bookName) == 0) {
            found = i;
            break;
        }
    }

    if(found != -1) {
        printf("\nBook Borrowed: %s\n", bookName);

        // Remove book from list → shift elements
        for(int j = found; j < totalBooks - 1; j++) {
            strcpy(books[j], books[j+1]);
        }

        totalBooks--;
        printf("Inventory Updated!\n");
    } else {
        printf("\nBook not available!\n");
    }
}

// 4) Calculate fine (argument passed, return value)
float calculateFine(int daysLate) {
    float fineRate = 2.0; // ₹2 per day
    return daysLate * fineRate;
}

int main() {
    printf("Library System\n");

    displayBooks();

    printf("\nTotal Books: %d\n", getTotalBooks());

    borrowBook("Data Structures");

    printf("\nAfter Borrow:\n");
    displayBooks();

    int late = 3;
    printf("\nFine for %d days late = %.2f\n", late, calculateFine(late));

    return 0;
}
