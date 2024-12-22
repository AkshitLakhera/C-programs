// Decimal to binary
#include <stdio.h>
int main()
{
    int reaminder, digit, sum, tenth, num;
    sum = 0;
    tenth = 1;
    printf("Enter the number");
    scanf("%d", &num);
    while (num > 0)
    {
        reaminder = num % 2;
        digit = reaminder * tenth;
        sum = sum + digit;
        tenth = tenth * 10;
        num = num / 2;
    }
    printf("The binary number is %d", sum);
}