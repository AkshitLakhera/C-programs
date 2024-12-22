#include <stdio.h>

int hcf(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    if (a == b)
    {
        return a;
    }
    if (a > b)
    {
        return hcf(b, a - b);
    }
    else
    {
        return hcf(a, b - a);
    }
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int result = hcf(a, b);
    printf("The HCF of %d and %d is: %d\n", a, b, result);

    return 0;
}
