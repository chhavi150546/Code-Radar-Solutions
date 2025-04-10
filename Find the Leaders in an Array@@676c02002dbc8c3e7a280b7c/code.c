// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], leaders[n];
    int i, j = 0;

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_from_right = arr[n - 1];
    leaders[j++] = max_from_right;

    for (i = n - 2; i >= 0; i--) {
        if (arr[i] >= max_from_right) {
            max_from_right = arr[i];
            leaders[j++] = arr[i];
        }
    }

    // Print in reverse to maintain original order
    for (i = j - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}
