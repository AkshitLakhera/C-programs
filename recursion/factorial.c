#include <stdio.h>
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    printf("Enter n ");
    int n;
    scanf("%d", &n);
    n = fact(n);
    printf("%d", n);
};