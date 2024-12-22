#include <stdio.h>
int main()
{
    int even, odd;
    int arr[10] = {95, 90, 31, 25, 100, 50, 65, 89, 97, 30};
    for (int i = 0; i <= 9; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("even element %d \n", arr[i]);
        }
        else
        {
            printf(" odd element %d \n", arr[i]);
        }
    }
    return 0;
}