// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], freq[1001] = {0}; // assuming elements are in range 0–1000
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int maxFreq = 0, result = 1001;
    for (i = 0; i < 1001; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        } else if (freq[i] == maxFreq && i < result) {
            result = i;
        }
    }

    printf("%d\n", result);
    return 0;
}
