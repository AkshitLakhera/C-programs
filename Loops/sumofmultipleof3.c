// print the sum of numvers which ar multiple of 3
#include <stdio.h>
int main()
{
    int n, sum;
    sum = 0;
    printf("Enter the number");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }
    printf("sum is %d", sum);
    return 0;
}