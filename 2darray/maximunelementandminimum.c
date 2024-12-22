#include <stdio.h>
int main()
{
    int arr[2][2] = {1, 5, 3, 6};
    int max = arr[0][0];
    int maxindexi = 0;
    int maxindexj = 1;
    int min = arr[0][0];
    int result[2][2];
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            if (max < arr[i][j])
            {
                maxindexi = i;
                maxindexj = j;
                max = arr[i][j];
            }
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    printf("The maximum no is  = %d  and index is (%d,%d) \n", max, maxindexi, maxindexj);
    printf("The minimum number  %d", min);
    return 0;
}
