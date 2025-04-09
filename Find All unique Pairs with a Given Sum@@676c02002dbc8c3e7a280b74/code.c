#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
} Pair;

// Comparator for qsort (lexicographic pair sort)
int compare_pairs(const void *a, const void *b) {
    Pair *p1 = (Pair *)a;
    Pair *p2 = (Pair *)b;
    if (p1->x != p2->x)
        return p1->x - p2->x;
    else
        return p1->y - p2->y;
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

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int a = arr[i], b = arr[j];
                if (a > b) { int temp = a; a = b; b = temp; }

                // Check if this pair already exists
                int duplicate = 0;
                for (int k = 0; k < count; k++) {
                    if (pairs[k].x == a && pairs[k].y == b) {
                        duplicate = 1;
                        break;
                    }
                }
                if (!duplicate) {
                    pairs[count].x = a;
                    pairs[count].y = b;
                    count++;
                }
            }
        }
    }

    // Sort the collected pairs
    qsort(pairs, count, sizeof(Pair), compare_pairs);

    for (int i = 0; i < count; i++) {
        printf("%d %d\n", pairs[i].x, pairs[i].y);
    }

    return 0;
}


