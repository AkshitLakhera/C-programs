// number ways to reach the top of stair.
#include <stdio.h>
int stair(int n)
{
    if (n == 1 || n == 2)
        return n;
    int totalWays = stair(n - 1) + stair(n - 2);
    return totalWays;
}
int main()
{
    int n;
    printf("Enter the n");
    scanf("%d", &n);
    int ways = stair(n);
    printf("%d", ways);
    return 0;
}