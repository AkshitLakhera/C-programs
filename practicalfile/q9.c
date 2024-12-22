#include <stdio.h>
int sumi(int n)
{
    int a, digit, sum = 0;
    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int a, sum;
    printf("Enter the intger");
    scanf("%d", &a);
    sum = sumi(a);
    printf("The sum of all digits are  %d", sum);
    return 0;
}