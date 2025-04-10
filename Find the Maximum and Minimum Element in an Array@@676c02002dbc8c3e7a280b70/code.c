#include <stdio.h>

void find_max_min(int arr[], int n, int *max, int *min) {
    *max = *min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int n;
    
    scanf("%d", &n);

    int arr[n];  // Variable length array (OK in C99+)

    // Read array elements
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max, min;
    find_max_min(arr, n, &max, &min);

    printf("%d", max);
    printf("%d\n", min);

    return 0;
}
