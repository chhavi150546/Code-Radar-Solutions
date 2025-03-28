// Your code here...
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Found a divisor, not prime
    }
    return 1; // Prime number
}

// Function to print prime numbers in the given range
void printPrimesInRange(int a, int b) {
    int found = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            if (found) printf(" "); // Print space before numbers after the first
            printf("%d", i);
            found = 1;
        }
    }
    if (!found) {
        printf("No prime numbers");
    }
    printf("\n"); // Ensure newline at the end
}

// Main function
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printPrimesInRange(a, b);
    return 0;
}