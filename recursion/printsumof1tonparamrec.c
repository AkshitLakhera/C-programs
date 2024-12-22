// #include <stdio.h>
// int sum(int x, int n)
// {
//     int a;
//     if (x > n)
//         return 0;
//     return a = x + sum(x + 1, n);
// }
// int main()
// {
//     int n, ans;
//     printf("Enter the number");
//     scanf("%d", &n);
//     ans = sum(1, n);
//     printf("%d", ans);
// }
// Without parameter

#include <stdio.h>
int sum(int n)
{
    if (n < 0)
        return 0;
    return n + sum(n - 1);
}
int main()
{
    int n, ans;
    printf("Enter the number");
    scanf("%d", &n);
    ans = sum(n);
    printf("%d", ans);
}
