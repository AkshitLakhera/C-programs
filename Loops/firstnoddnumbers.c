#include <stdio.h>
int main()
{
    int n, sum;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            return;
        }
        sum = sum + i;
    }
    printf("The sum is  %d ", sum);
    return 0;
}