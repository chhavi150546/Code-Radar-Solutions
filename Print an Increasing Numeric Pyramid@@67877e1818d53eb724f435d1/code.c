#include <stdio.h>

int main() {
    int rows, num = 1;

    // Ask the user to input the number of rows
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Outer loop to print each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print numbers in the pyramid
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

