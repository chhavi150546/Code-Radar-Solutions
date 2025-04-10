#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int count[n]; // count array to track occurrences

    // Initialize count array to 0
    for (int i = 0; i < n; i++)
        count[i] = 0;

    // Read array and check for duplicate
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
        if (count[arr[i]] > 1) {
            printf("%d\n", arr[i]);
            break;
        }
    }

    return 0;
}

