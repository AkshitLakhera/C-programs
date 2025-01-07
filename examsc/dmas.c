#include <stdio.h>
#include <stdlib.h> // For malloc and free
#include <string.h>
struct Student
{
    char name[50];
    int age;
    float grades;
};
int main() {
    struct Student *s1=(struct Student *)malloc(sizeof(struct Student));
     // Assign values
    strcpy(s1->name, "John");
    s1->age = 20;
    s1->grades = 9.5;

    // Print details
    printf("Student Details:\n");
    printf("Name: %s\n", s1->name);
    printf("Age: %d\n", s1->age);
    printf("Grade: %.2f\n", s1->grades);

}
//in case of array students[i].name possible