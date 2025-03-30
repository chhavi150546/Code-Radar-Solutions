#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    // Process the ranked array to remove duplicates
    int unique_scores[200000];
    int unique_count = 0;
    if (n > 0) {
        unique_scores[unique_count++] = ranked[0];
        for (int i = 1; i < n; i++) {
            if (ranked[i] != unique_scores[unique_count - 1]) {
                unique_scores[unique_count++] = ranked[i];
            }
        }
    }

    // For each player's score, find its rank
    for (int i = 0; i < m; i++) {
        int left = 0;
        int right = unique_count - 1;
        int rank = unique_count + 1; // Default rank if score is smaller than all

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (unique_scores[mid] <= player[i]) {
                rank = mid + 1;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        result[i] = rank;
    }
}

int main() {
    int n, m;
    scanf("%d", &n);
    int ranked[200000];
    for (int i = 0; i < n; i++) scanf("%d", &ranked[i]);
    scanf("%d", &m);
    int player[200000];
    for (int i = 0; i < m; i++) scanf("%d", &player[i]);
    int result[200000];

    trackPlayerRanks(ranked, n, player, m, result);

    for (int i = 0; i < m; i++) printf("%d\n", result[i]);

    return 0;
}
