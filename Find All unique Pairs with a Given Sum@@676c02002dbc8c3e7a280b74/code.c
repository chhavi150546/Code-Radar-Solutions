#include <stdio.h>
#include <stdlib.h>

// Function to sort an array (ascending)
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    // Sort the array to handle unique pairs easily
    qsort(arr, n, sizeof(int), compare);

    int found = 0;

    for (int i = 0; i < n - 1; i++) {
        // Skip duplicate elements for first number
        if (i > 0 && arr[i] == arr[i - 1]) continue;

        for (int j = i + 1; j < n; j++) {
            // Skip duplicate pairs
            if (j > i + 1 && arr[j] == arr[j - 1]) continue;

            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    return 0;
}

