#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    int count[n]; // max value in array is n-1

    // Initialize count array to 0
    for (int i = 0; i < n; i++)
        count[i] = 0;

    // Read input
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Find duplicate
    for (int i = 0; i < n; i++) {
        if (arr[i] >= n) {
            // Out-of-range input — optional safeguard
            continue;
        }

        if (count[arr[i]] == 1) {
            printf("%d\n", arr[i]);
            return 0;
        }
        count[arr[i]]++;
    }

    return 0;
}
