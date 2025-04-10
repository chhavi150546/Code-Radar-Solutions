#include <stdio.h>

void deflateBalloons(int air[], int n) {
    while (1) {
        int min = 1000000;
        int hasAir = 0;

        // Find minimum air in non-zero balloons
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                hasAir = 1;
                if (air[i] < min)
                    min = air[i];
            }
        }

        if (!hasAir)
            break;

        // ✅ Always print n (total balloons)
        printf("%d\n", n);

        // Deflate by min
        for (int i = 0; i < n; i++) {
            if (air[i] > 0)
                air[i] -= min;
        }
    }
}
