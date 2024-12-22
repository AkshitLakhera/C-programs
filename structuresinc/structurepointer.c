#include <stdio.h>
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
    stu a;
    stu *x = &a;
    printf("%p \n", &a.Rollno);
    printf("'%p", x);
}