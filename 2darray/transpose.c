#include <stdio.h>

int main()
{
    int rows = 2, cols = 3;
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transpose[3][2];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Transposed Matrix:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
