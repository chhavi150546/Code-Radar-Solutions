// Your code here...
#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
};

int main() {
    int n;

    printf("Enter number of rectangles: ");
    scanf("%d", &n);

    struct Rectangle r[n];

    // Input dimensions for each rectangle
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for rectangle %d:\n", i + 1);
        printf("Length: ");
        scanf("%f", &r[i].length);
        printf("Breadth: ");
        scanf("%f", &r[i].breadth);
    }

    // Display area and perimeter
    printf("\n--- Results ---\n");
    for (int i = 0; i < n; i++) {
        float area = r[i].length * r[i].breadth;
        float perimeter = 2 * (r[i].length + r[i].breadth);
        printf("\nRectangle %d:\n", i + 1);
        printf("Length = %.2f, Breadth = %.2f\n", r[i].length, r[i].breadth);
        printf("Area = %.2f\n", area);
        printf("Perimeter = %.2f\n", perimeter);
    }

    return 0;
}
