#include <stdio.h>
int main()
{
    typedef struct date
    {
        int date;
        int month;
        int year;
    } date;
    date a, b;
    // 7/12/2024
    // 7/12/2025
    a.date = 7;
    a.month = 12;
    a.year = 2024;
    b.date = 17;
    b.month = 12;
    b.year = 2024;
    if (a.date == b.date)
    {
        printf("It is  equal");
    }
    else
    {
        printf("It is not equal");
    }
}