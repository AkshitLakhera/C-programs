#include <stdio.h>
#include <stdlib.h>
#include<string.h>
// Define a structure
struct Student {
    int roll_no;
    char name[50];
    float marks;
    float percentage; // Add a field to store percentage
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); // Consume the newline character left by scanf

    // Dynamically allocate memory for an array of structures
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    // Check if memory allocation was successful
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input data for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        getchar(); // Consume the newline character left by scanf

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        // Remove the trailing newline character if present
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }

        printf("Marks (out of 100): ");
        scanf("%f", &students[i].marks);

        // Calculate percentage
        students[i].percentage = students[i].marks; // Assuming marks are out of 100
    }

    // Find the student with the highest percentage
    int highest_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].percentage > students[highest_index].percentage) {
            highest_index = i;
        }
    }

    // Print all student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("Percentage: %.2f%%\n", students[i].percentage);
    }

    // Print the student with the highest percentage
    printf("\nStudent with the highest percentage:\n");
    printf("Roll Number: %d\n", students[highest_index].roll_no);
    printf("Name: %s\n", students[highest_index].name);
    printf("Marks: %.2f\n", students[highest_index].marks);
    printf("Percentage: %.2f%%\n", students[highest_index].percentage);

    // Free the allocated memory
    free(students);

    return 0;
}
