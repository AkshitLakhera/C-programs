#include <stdio.h>
int main()
{
    int n, rem, index;
    index = 0;
    int binary[32];
    printf("Enter deci no");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 2;
        binary[index] = rem;
        n = n / 2;
        index++;
    }
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
}