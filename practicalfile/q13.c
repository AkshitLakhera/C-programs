#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int enrollment_no;
    char name[50];
    char address[100];
    char city[30];
    char state[30];
};
void storeStudentInfo()
{
    FILE *file;
    struct Student student;
    file = fopen("students.txt", "wb"); // 'wb' for writing in binary mode
    if (file == NULL)
    {
        printf("Error opening file for writing!\n");
        return;
    }
    // Input data
    printf("Enter Student Enrollment Number: ");
    scanf("%d", &student.enrollment_no);
    getchar(); // To consume the newline left by scanf
    printf("Enter Student Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter Address: ");
    fgets(student.address, sizeof(student.address), stdin);
    printf("Enter City: ");
    fgets(student.city, sizeof(student.city), stdin);
    printf("Enter State: ");
    fgets(student.state, sizeof(student.state), stdin);
    // Write data to the file
    fwrite(&student, sizeof(struct Student), 1, file);
    fclose(file);
    printf("Student information stored successfully!\n");
}

void retrieveStudentInfo()
{
    FILE *file;
    struct Student student;
    file = fopen("students.txt", "rb"); // 'rb' for reading in binary mode
    if (file == NULL)
    {
        printf("Error opening file for reading!\n");
        return;
    }
    printf("\nRetrieving student information...\n");
    while (fread(&student, sizeof(struct Student), 1, file))
    {
        printf("\nEnrollment Number: %d\n", student.enrollment_no);
        printf("Name: %s", student.name);
        printf("Address: %s", student.address);
        printf("City: %s", student.city);
        printf("State: %s", student.state);
    }
    fclose(file);
}

int main()
{
    int choice;
    while (1)
    {
        printf("\nStudent Information System\n");
        printf("1. Store Student Info\n");
        printf("2. Retrieve Student Info\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            storeStudentInfo();
            break;
        case 2:
            retrieveStudentInfo();
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
