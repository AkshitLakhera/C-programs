// binary to decimal
#include <stdio.h>
int main()
{
    int sum, num, remainder, digit, binary;
    binary = 1;
    sum = 0;
    printf("Enter the number");
    scanf("%d", &num);
    while (num > 0)
    {
        remainder = num % 10;
        digit = remainder * binary;
        sum = sum + digit;
        binary = binary * 2;
        num = num / 10;
    }
    printf("the decimal number is %d", sum);
}