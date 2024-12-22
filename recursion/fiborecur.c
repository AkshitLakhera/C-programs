#include <stdio.h>
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n, x;
    printf("Enter no");
    scanf("%d", &n);
    x = fib(n);
    printf("%d", x);
    return 0;
}