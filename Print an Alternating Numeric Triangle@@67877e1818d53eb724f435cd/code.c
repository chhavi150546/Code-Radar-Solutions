#include <stdio.h>

int main() {
    int rows;

    // Ask the user to input the number of rows

    scanf("%d", &rows);

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop to print numbers alternately
        for (int j = 1; j <= i; j++) {
            // If the row is odd, start with 1; if the row is even, start with 0
            if (i % 2 == 1) {
                // Print 1 for odd index (starting from 1), 0 for even index
                if (j % 2 == 1) {
                    printf("1 ");
               

