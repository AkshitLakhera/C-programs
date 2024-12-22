#include <stdio.h>
int main()
{
    int n, rem, tenth = 1, digit, sum = 0;
    printf("Enter the number here");
    scanf(" %d", &n);
    while (n > 0)
    {
        rem = n % 10;
        digit = rem * tenth;
        sum = sum + digit;
        tenth = tenth * 2;
        n = n / 10;
    }
    printf("the decimal of given no is %d", sum);
    return 0;
}