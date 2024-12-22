#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter the value of n :\n");
    scanf("%d", &n);
    sum = n * (n + 1);
    printf("The sum of first %d natural even no is : %d ", n, sum);
    return 0;
}