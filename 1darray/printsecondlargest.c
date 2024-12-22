#include <stdio.h>
#include <limits.h>
int main()
{
    int max = INT_MIN;
    int smax = INT_MIN;

    int arr[9] = {1, 2, 3, 4, 5, 4, 3, 2, 2};
    for (int i = 0; i <= 9; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if (smax < arr[i] && max != arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", smax);
    return 0;
}