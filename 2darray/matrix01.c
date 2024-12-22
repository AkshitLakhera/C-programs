#include <stdio.h>
int main()
{
    int matrix[5][5] = {
        {1, 0, 0, 1, 1},
        {0, 0, 1, 0, 0},
        {1, 0, 0, 0, 0},
        {0, 1, 1, 0, 0},
        {1, 1, 1, 1, 0}};
    int maxCount = 0;
    for (int i = 0; i <= 4; i++)
    {
        int count = 0;
        for (int j = 0; j <= 4; j++)
        {
            if (matrix[i][j] == 1)
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
        }
    }
    printf("%d \n", maxCount);
}