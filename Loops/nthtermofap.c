// nth termof ap
#include <stdio.h>
int main()
{
    int a, d, n, nth, sn;
    printf("Enter the first term of the AP series: ");
    scanf("%d", &a);
    printf("Enter the common difference of the AP series: ");
    scanf("%d", &d);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    nth = a + (n - 1) * d;
    printf("The %dth term of the AP series is %d", n, nth);
    // sum of n terms of ap
    sn = n / 2 * (a + nth);
    printf("The sum of %d terms of the AP series is %d", n, sn);
}