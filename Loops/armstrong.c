#include <stdio.h>
#include <math.h>.
int main()
{
    int n, rem, original, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    // Calculate the number of digits in the input number
    while (original != 0)
    {
        original /= 10;
        digits++;
    }
    original = n;
    while (n != 0)
    {
        rem = n % 10;
        sum += pow(rem, digits);
        n /= 10;
    }

    if (original == sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }

    return 0;
}