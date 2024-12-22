//  write a program to rotate a matrix 90degree clockwise
#include <stdio.h>
int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int temp[3][3];
    for (int i = 0; i < 3; i++)
    {
        int m = 2;
        for (int j = 0; j < 3; j++)
        {
            temp[i][j] = matrix[m][i];
            m--;
        }
    }

    // Copy temp back to matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = temp[i][j];
        }
    }

    // Print matrix (now updated with rotated values)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
