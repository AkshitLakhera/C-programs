#include <stdio.h>
int main()
{
    int n, rev = 0, remainder, originalno;
    printf("Enter a number : ");
    scanf("%d", &n);
    originalno = n;
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }
    if (originalno == rev)
    {
        printf("The number is a palindrome.");
    }
    else
    {
        printf("THe number is not palindrome");
    }
}