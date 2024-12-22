// print n to 1;
#include <stdio.h>
int print(int n)
{
    if (n == 1)
        return printf("1");
    printf("%d", n);
    return print(n - 1);
}
int main()
{
    int a, ans;
    printf("ENTER NO");
    scanf("%d", &a);
    ans = print(a);
}