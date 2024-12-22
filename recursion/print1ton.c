// print 1 to n;
#include <stdio.h>
// int print(int n)
// {
//     if (n == 1)
//         return printf("1");
//     print(n - 1);
//     printf("%d", n);
//     return 0;
// }
// int main()
// {
//     int a, ans;
//     printf("ENTER NO");
//     scanf("%d", &a);
//     ans = print(a);
// }

// Parameterised way
void print(int x, int a)
{
    if (x > a)
        return;
    printf("%d", x);
    print(x + 1, a);
}
int main()
{
    int a, x;
    printf("ENTER NO");
    scanf("%d", &a);
    print(1, a);
}