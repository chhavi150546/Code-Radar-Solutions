#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", (j + i) % 2);  // Alternates between 1 and 0
        }
        printf("\n");
    }

    return 0;
}
