#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct student
    {
        int Rollno;
        int Name;
        int Department;
        char course[30];
        int year;

    } stu;
    stu a, b;
    strcpy(a.course, "MCA");
    strcpy(b.course, "MCA");

    // Use strcmp to compare the string contents
    if (strcmp(a.course, b.course) == 0)
    {
        printf("Both have the same course\n");
    }
    printf("%s", a.course);
    return 0;
}