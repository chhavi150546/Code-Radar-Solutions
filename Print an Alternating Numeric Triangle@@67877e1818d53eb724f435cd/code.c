#include <stdio.h>

int main() {
    int rows;

    // Ask the user to input the number of rows

    scanf("%d", &rows);

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop to print numbers alternately
        for (int j = 1; j <= i; j++) {
            // Print 1 for even index (starting from 1) and 0 for odd index
            if (j % 2 == 1) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

