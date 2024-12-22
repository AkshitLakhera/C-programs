#include <stdio.h>
int main()
{
    int even, odd;
    int arr[10] = {95, 90, 31, 25, 100, 50, 65, 89, 97, 30};
    for (int i = 0; i <= 9; i++)
    {
        if (i % 2 == 0)
        {
            printf(" element at even index %d \n", arr[i]);
        }
        else
        {
            printf(" element at odd index %d \n", arr[i]);
        }
    }
    return 0;
}