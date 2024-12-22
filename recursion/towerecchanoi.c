#include <stdio.h>
void tower(int n, char s, char h, char d)
{
    if (n == 0)
        return;
    tower(n - 1, s, d, h);
    printf("%c  to %c \n", s, d);
    tower(n - 1, h, s, d);
    return;
}
int main()
{
    int n;
    printf("Enter the number of blocks");
    // A to B small pyramid
    // A to C  LARGEST Block
    // B to C - smallest pyramid
    scanf("%d", &n);
    tower(n, 'A', 'B', 'C');
}
