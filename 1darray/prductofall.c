#include <stdio.h>
int main()
{
    int p = 1;
    int arr[10] = {95, 90, 31, 25, 100, 50, 65, 89, 97, 30};
    for (int i = 0; i <= 9; i++)
    {
        p = p * arr[i];
    }
    printf("%d", p);
    return 0;
}