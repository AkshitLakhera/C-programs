#include <stdio.h>
int main()
{
    int matrix[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};
    int sum = 0;
    int l1, r1, l2, r2;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += matrix[i][j];
        }
    }
    printf("%d", sum);

    return 0;
}
