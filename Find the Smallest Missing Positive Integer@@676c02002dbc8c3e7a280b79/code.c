// Your code here...
#include <stdio.h>
#include <stdlib.h>

// Function to find the smallest missing positive number
int findSmallestMissingPositive(int arr[], int n) {
    int i;

    // First, place each positive integer x at index x-1 (if within bounds)
    for (i = 0; i < n; i++) {
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            // Swap arr[i] with arr[arr[i] - 1]
            int temp = arr[i];
            arr[i] = arr[temp - 1];
            arr[temp - 1] = temp;
        }
    }

    // Find the first index where index + 1 != value
    for (i = 0; i < n; i++) {
        if (arr[i] != i + 1)
            return i + 1;
    }

    // If all positions are filled correctly
    return n + 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result = findSmallestMissingPositive(arr, n);
    printf("%d\n", result);

    return 0;
}
