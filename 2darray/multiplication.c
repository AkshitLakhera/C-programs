// #include <stdio.h>
// int main()
// {
//     int arr[2][2] = {1, 2, 3, 4};
//     int arr2[2][2] = {5, 6, 7, 8};
//     int result[2][2];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             result[i][j] = arr[i][j] * arr2[i][j];
//         }
//     }
//     // print
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d", result[i][j]);
//         }
//         printf("\n");
//     }
// }
#include <stdio.h>

int main()
{
    int rows1 = 2, cols1 = 3;
    int rows2 = 3, cols2 = 2;
    int matrix1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    int matrix2[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}};
    int result[2][2] = {0};
    if (cols1 != rows2)
    {
        printf("Matrix multiplication not possible with these dimensions.\n");
        return 1;
    }
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
