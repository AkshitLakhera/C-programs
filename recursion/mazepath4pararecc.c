// It can only go down or left.
#include <stdio.h>
int maze(int cr, int cc, int er, int ec)
{
    int rightways = 0;
    int downways = 0;
    int totalways;
    if (cr == er && cc == ec)
        return 1; // it means he is at last box only ways
    if (cr == er)
    {
        rightways += maze(cr, cc + 1, er, ec);
    }
    if (cc == ec)
    {
        downways += maze(cr + 1, cc, er, ec);
    }
    if (cr < er && cc < ec)
    {
        downways += maze(cr + 1, cc, er, ec);
        rightways += maze(cr, cc + 1, er, ec);
    }
    return totalways = downways + rightways;
}
int main()
{
    int n, m, ways;
    printf("Enter no of rows");
    scanf("%d", &n);
    printf("Enter the no of coloums");
    scanf("%d", &m);
    ways = maze(1, 1, n, m);
    printf("%d", ways);
}