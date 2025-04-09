#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int n;
    float threshold;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    // Input book details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        
        printf("Title: ");
        scanf(" %[^\n]", b[i].title);  // allows space in input
        
        printf("Author: ");
        scanf(" %[^\n]", b[i].author); // allows space in input
        
        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    // Input price threshold
    printf("\nEnter price threshold: ");
    scanf("%f", &threshold);

    // Display books above threshold
    printf("\nBooks with price above %.2f:\n", threshold);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (b[i].price > threshold) {
            printf("\nBook %d:\n", i + 1);
            printf("Title: %s\n", b[i].title);
            printf("Author: %s\n", b[i].author);
            printf("Price: %.2f\n", b[i].price);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found above the given price threshold.\n");
    }

    return 0;
}

