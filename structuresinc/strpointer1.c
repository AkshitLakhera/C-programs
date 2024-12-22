#include <stdio.h>
int main()
{
    typedef struct person
    {
        int age;
        int weight;
    } stu;
    stu a, b;
    a.age = 50;
    int *x = &a.age;
    int c;
    c = *x;
    printf("%d", c);
    // a different way
    // Pointer to the entire structure
    stu *y = &a;
    printf("Age: %d\n", y->age); // Access age
}