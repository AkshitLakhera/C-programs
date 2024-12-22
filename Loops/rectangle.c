#include <stdio.h>
int main()
{
    int a, b, i, j;
    printf("enter the L ");
    scanf("%d", &a);
    printf("enter breath");
    scanf("%d", &b);
    // for loop
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= b; j++)
        {
            if (i == 1 || i == a || j == 1 || j == b)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}