// second repeatitive a= {1,2,3,4,5,5,6,6,6}
#include <stdio.h>
int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 5, 6, 6, 6};
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
}
