#include <stdio.h>
int main()
{
    int arr[6] = {1, 2, 31, 4, 5, 6};
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
    }
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            if (min > arr[i])
            {
                min = arr[i];
            }
        }
    }
    printf("The maximum integer is %d \n", max);
    printf("The minimun integer is %d \n", min);
    return 0;
}