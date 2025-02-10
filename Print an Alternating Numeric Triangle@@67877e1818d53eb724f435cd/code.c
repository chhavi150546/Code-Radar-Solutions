#include <stdio.h>

int main() {
    int rows;

    // Ask the user to input the number of rows

    scanf("%d", &rows);

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop to print numbers alternately
        for (int j = 1; j <= i; j++) {
            // Print 0 if j is odd, 1 if j is even
            if ((i + j) % 2 == 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
rn 0;
}
