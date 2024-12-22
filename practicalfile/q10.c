#include <stdio.h>
void binary(int n)
{
    if (n > 1)
    {
        binary(n / 2);
    }
    printf("%d", n % 2);
}

int main()
{
    int n;
    printf("Enter the decimal number: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("The binary of %d is: 0\n", n);
    }
    else
    {
        printf("The binary of %d is: ", n);
        binary(n);
        printf("\n");
    }

    return 0;
}
