#include <stdio.h>
int main()
{
    int arr[10] = {95, 90, 31, 25, 100, 50, 65, 89, 97, 30};
    int max = arr[0];
    for (int i = 0; i <= 9; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}