#include <stdio.h>
int main()
{
    int arr[4] = {6, -2, 3, -4};
    int max;
    int smax;
    max = arr[0];
    smax = arr[1];
    for (int i = 0; i < 4; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
    }
    printf("%d", smax);
}