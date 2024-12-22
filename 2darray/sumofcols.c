#include <stdio.h>
int main()
{
    int arr[2][2] = {1, 2, 3, 4};
    int result[2] = {0};
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            result[j] += arr[i][j];
        }
    }

    // Print the row sums
    printf("Sum of each row:\n");
    for (int j = 0; j < 2; j++)
    {
        printf("col %d sum: %d\n", j + 1, result[j]);
    }

    return 0;
}
