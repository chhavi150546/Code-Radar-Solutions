// Your code here...

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        // Less than 2 elements, no second largest
        printf("-1\n");
        return 0;
    }

    int first = arr[0];
    int second = -1;

    // Find the largest and second largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < first && (second == -1 || arr[i] > second)) {
            second = arr[i];
        }
    }

    // If second remains -1, all elements might be the same
    if (second == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", second);
    }

    return 0;
}
