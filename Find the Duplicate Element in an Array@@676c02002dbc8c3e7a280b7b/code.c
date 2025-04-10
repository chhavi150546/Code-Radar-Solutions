#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int count[n]; // count[0 to n-1], but we access 1 to n-1, so increase size

    // Initialize count array to 0
    for (int i = 0; i < n; i++)
        count[i] = 0;

    // Read array
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Check for duplicates
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
        if (count[arr[i]] > 1) {
            printf("%d\n", arr[i]);
            break;
        }
    }

    return 0;
}
