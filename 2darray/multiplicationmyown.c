#include <stdio.h>
int main()
{
    int arr1[3][2] = {{1, 2},
                      {3, 4},
                      {5, 6}};
    int arr2[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}};
    int res[3][4];
    int rc = 2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < rc; k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
