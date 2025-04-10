// Your code here...
#include <stdio.h>

void deflateBalloons(int air[], int n) {
    while (1) {
        int count = 0;
        int min = 1000000; // Assumes air value won't exceed this

        // Count how many still have air, and find min non-zero air
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                count++;
                if (air[i] < min)
                    min = air[i];
            }
        }

        if (count == 0)
            break; // All balloons are flat

        printf("%d\n", count);

        // Deflate balloons
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= min;
            }
        }
    }
}
