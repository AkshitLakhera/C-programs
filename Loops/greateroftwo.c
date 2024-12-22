#include <stdio.h>
int main()
{
    int a, b, max;
    printf("Enter the a ");
    scanf("%d", &a);
    printf("Enter the b ");
    scanf("%d", &b);
    max = (a > b) ? a : b;
    printf("the greatest of %d and %d is  %d \n", a, b, max);
}