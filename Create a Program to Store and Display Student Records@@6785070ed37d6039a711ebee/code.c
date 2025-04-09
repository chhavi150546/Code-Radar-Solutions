// Your code here...
#include <stdio.h>
#include <stdlib.h>

// Define the Student structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;

    // Ask the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory for 'n' students
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error
    }

    // Input details for each student
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &students[i].rollNumber);
        getchar(); // Consume newline character left by scanf

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline character

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details in the specified format
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d Name: %s Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    // Free allocated memory
    free(students);

    return 0;
}