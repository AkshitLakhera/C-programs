#include <stdio.h>
int main()
{
    int a, b, i, hcf, min;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    min = (a < b) ? a : b;
    for (i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
    printf("the hcf is %d", hcf);
}