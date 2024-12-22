// count zeros in number
#include <stdio.h>
int main()
{
    long long int n, count = 0, remainder;
    printf("Enter a number : ");
    scanf("%lld", &n);
    while (n != 0)
    {
        remainder = n % 10;
        if (remainder == 0)
        {
            count++;
        }
        n = n / 10;
    }
    printf("The number of zeros in the number is %lld", count);
}