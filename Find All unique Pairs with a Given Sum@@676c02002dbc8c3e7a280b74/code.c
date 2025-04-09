#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a, b;
} Pair;

// Comparator to sort pairs lexicographically
int compare(const void *x, const void *y) {
    Pair *p1 = (Pair *)x;
    Pair *p2 = (Pair *)y;
    if (p1->a != p2->a)
        return p1->a - p2->a;
    return p1->b - p2->b;
}

// Function to check if a pair already exists
int isDuplicate(Pair pairs[], int size, int a, int b) {
    for (int i = 0; i < size; i++) {
        if (pairs[i].a == a && pairs[i].b == b)
            return 1;
    }
    return 0;
}

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    Pair pairs[n * n];
    int count = 0;

    // Find all unique pairs
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int a = arr[i] < arr[j] ? arr[i] : arr[j];
                int b = arr[i] < arr[j] ? arr[j] : arr[i];
                if (!isDuplicate(pairs, count, a, b)) {
                    pairs[count].a = a;
                    pairs[count].b = b;
                    count++;
                }
            }
        }
    }

    // Sort pairs lexicographically
    qsort(pairs, count, sizeof(Pair), compare);

    // Print
    for (int i = 0; i < count; i++) {
        printf("%d %d\n", pairs[i].a, pairs[i].b);
    }

    return 0;
}



