#include <stdio.h>

int main() {
    int rows, number = 1, i, j, space;
    
    // Taking input from the user
    scanf("%d", &rows);
    
    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Printing spaces to form the pyramid
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        // Printing numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        // Moving to the next line
        printf("\n");
    }
    
    return 0;
}
