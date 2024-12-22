#include <stdio.h>
int main()
{
    int arr[10] = {95, 90, 31, 25, 100, 50, 65, 89, 97, 30};
    int min = arr[0];
    for (int i = 0; i <= 9; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}