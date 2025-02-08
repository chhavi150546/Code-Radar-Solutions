#include <stdio.h>

int main() {
    int rows, i, j;
    
    // Taking input from the user
    scanf("%d", &rows);
    
    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Printing spaces
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Printing numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Moving to the next line
        printf("\n");
    }
    
    return 0;
}
