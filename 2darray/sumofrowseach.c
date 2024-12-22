#include <stdio.h>
int main()
{
    int arr[2][2] = {1, 2, 3, 4};
    int result[2] = {0};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i] += arr[i][j];
        }
    }

    // Print the row sums
    printf("Sum of each row:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Row %d sum: %d\n", i + 1, result[i]);
    }

    return 0;
}
