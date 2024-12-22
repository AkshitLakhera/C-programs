#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
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