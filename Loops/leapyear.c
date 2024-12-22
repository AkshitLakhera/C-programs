// leap year
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a leap year", year);
            }
            else
            {
                printf("%d is not a leap year", year);
            }
        }
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
}
// leap year should be divided by 4 and not 100,if 100 then also 400 should be divided.