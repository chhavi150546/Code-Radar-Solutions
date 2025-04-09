// Your code here...
#include <stdio.h>

struct Day {
    char name[20];
    float temperature;
};

int main() {
    struct Day week[7];
    float sum = 0.0, average;

    // Input data for 7 days
    for (int i = 0; i < 7; i++) {
       
        scanf("%s %f", week[i].name, &week[i].temperature);
        sum += week[i].temperature;
    }

    // Calculate average temperature
    average = sum / 7;

    // Display results
    printf("\nAverage Temperature: %.2f°C\n", average);

    return 0;
}
