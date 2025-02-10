#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    // Normalize the number of rotations
    k = k % n;

    // Reverse the entire array
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Reverse the first k elements
    for (int i = 0; i < k / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[k - i - 1];
        arr[k - i - 1] = temp;
    }

    // Reverse the remaining n-k elements
    for (int i = k; i < (n + k) / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i + k - 1];
        arr[n - i + k - 1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Number of positions to rotate

    rotateRight(arr, n, k);

    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

