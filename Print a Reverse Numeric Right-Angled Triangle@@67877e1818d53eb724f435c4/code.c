#include <stdio.h>

void printReverseNumberTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printReverseNumberTriangle(n);
    return 0;
}
