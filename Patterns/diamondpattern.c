#include <stdio.h>
int main()
{
    int i, j, k;
    int n = 5;
    for (i = 1; i <= n; i++)
    {
        // space
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // star
        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        if (i == 1)
        {
        }
        else
        {
            for (k = i; k >= i; k--)
            {
                if (i == 2)
                {
                    printf("1");
                }
                else
                {
                    printf("%d", i - 1);
                }
            }
        }
        printf("\n");
    }
    return 0;
}