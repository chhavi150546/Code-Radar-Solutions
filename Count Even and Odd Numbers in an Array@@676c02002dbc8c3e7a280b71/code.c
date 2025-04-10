// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the number of elements

    int arr[n];
    int even = 0, odd = 0;

    // Read the elements and count even/odd
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Output the results
    printf("%d %d\n", even, odd);

    return 0;
}
