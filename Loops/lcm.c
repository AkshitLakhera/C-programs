// lowerst no divided by both
#include <stdio.h>
int main()
{
    int i, a, b, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("The LCM  of %d and %d is %d\n", a, b, lcm);
}