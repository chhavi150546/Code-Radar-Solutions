// Your code here...
#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    // To track which pairs are already printed
    int printed[n][n]; // Using a matrix to mark printed pairs
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            printed[i][j] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int x = arr[i];
                int y = arr[j];
                // Ensure ascending order in output
                if (x > y) {
                    int temp = x;
                    x = y;
                    y = temp;
                }
                // Only print if this pair wasn't printed before
                if (!printed[x][y]) {
                    printf("%d %d\n", x, y);
                    printed[x][y] = 1;
                }
            }
        }
    }

    return 0;
}
