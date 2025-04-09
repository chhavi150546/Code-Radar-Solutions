// Your code here...
#include <stdio.h>
#include <string.h>

struct Subscription {
    char userName[50];
    char subType[20]; // Basic, Standard, Premium
    float cost;
};

int main() {
    int n;
    printf("Enter number of users: ");
    scanf("%d", &n);

    struct Subscription users[n];

    float basicRevenue = 0, standardRevenue = 0, premiumRevenue = 0;
    int basicCount = 0, standardCount = 0, premiumCount = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", users[i].userName, users[i].subType, &users[i].cost);

        if (strcmp(users[i].subType, "Basic") == 0) {
            basicRevenue += users[i].cost;
            basicCount++;
        } else if (strcmp(users[i].subType, "Standard") == 0) {
            standardRevenue += users[i].cost;
            standardCount++;
        } else if (strcmp(users[i].subType, "Premium") == 0) {
            premiumRevenue += users[i].cost;
            premiumCount++;
        }
    }

    printf("Basic - Users: %d, Revenue: %.2f\n", basicCount, basicRevenue);
    printf("Standard - Users: %d, Revenue: %.2f\n", standardCount, standardRevenue);
    printf("Premium - Users: %d, Revenue: %.2f\n", premiumCount, premiumRevenue);

    return 0;
}
