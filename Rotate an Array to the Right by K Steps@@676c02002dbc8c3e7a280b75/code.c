// Your code here...
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n); // Read size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    scanf("%d", &k); // Read number of steps to rotate
    k = k % n; // In case k > n

    int rotated[n];

    // Perform right rotation
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
