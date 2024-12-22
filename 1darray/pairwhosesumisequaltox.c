#include <stdio.h>
int main()
{
    int x;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Enter a number");
    scanf("%d", &x);
    for (int i = 0; i <= 9; i++)
    {
        for (int j = i + 1; j <= 9; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                printf("(%d,%d)", arr[i], arr[j]);
            }
        }
    }
    return 0;
}