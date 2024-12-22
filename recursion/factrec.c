#include <stdio.h>
int fact(int n)
{
    // base case
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    int n, b;
    printf("Enter the number");
    scanf("%d", &n);
    b = fact(n);
    printf("factorial is %d", b);
}