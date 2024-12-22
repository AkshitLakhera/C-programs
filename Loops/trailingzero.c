// calc traling zeros
#include <stdio.h>
int main()
{
    int n, count = 0, rem;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        if (rem == 0)
        {
            count++;
        }
        break;
    }
}