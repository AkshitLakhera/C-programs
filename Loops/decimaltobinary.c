// decimal to binary conversion
#include <stdio.h>
int main()
{
    int tenth = 1, rem, sum = 0, digit, n;
    printf("Enter no");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 2;
        digit = rem * tenth;
        sum += digit;
        tenth = tenth * 10;
        n = n / 2;
    }
    printf("The decimal to binary if no is %d", sum);
    return 0;
}