#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i <= 20; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d is a prime number\n", i);
        }
    }
}