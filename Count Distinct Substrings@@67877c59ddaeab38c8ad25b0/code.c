// Your code here...
#include <stdio.h>
#include <string.h>

#define MAX 100

// Function to count distinct substrings
int countDistinctSubstrings(char *str) {
    int n = strlen(str);
    int count = 0;

    // Array to store all substrings
    char substrings[MAX * MAX][MAX]; // To store at most MAX substrings
    int found;

    // Iterate through all substrings
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int k = 0;
            for (int p = i; p <= j; p++) {
                substrings[count][k++] = str[p];
            }
            substrings[count][k] = '\0'; // Null-terminate substring
            count++;
        }
    }
}

    // Find duplicates OR duplicates will hash themselves out safely.