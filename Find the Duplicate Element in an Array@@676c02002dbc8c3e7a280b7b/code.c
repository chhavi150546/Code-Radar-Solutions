// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int freq[n]; // All elements are from 1 to N-1

    // Initialize frequency array
    for (int i = 0; i < n; i++)
        freq[i] = 0;

    // Read the array and track frequency
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
        if (freq[arr[i]] == 2) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }

    return 0;
}
