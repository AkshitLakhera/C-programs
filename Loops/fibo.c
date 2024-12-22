#include <stdio.h>
int main()
{
    // 1,1,2,3,5,8,13...
    int n, i;
    int a = 1, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d ", a);
        }
        else if (i == 2)
        {
            printf("%d ", b);
        }
        else
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
}