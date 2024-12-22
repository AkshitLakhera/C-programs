#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    if (b % 2 == 0)
    {
        return power(a, b / 2) * power(a, b / 2);
    }
    return power(a, b / 2) * power(a, b / 2) * a;
}
int main()
{
    int a, b, ans;
    printf("Enter the number");
    scanf("%d", &a);
    printf("Enter power raised");
    scanf("%d", &b);
    ans = power(a, b);
    printf("%d", ans);
}