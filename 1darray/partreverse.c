// suppose array is {1,2,3,4,5,6,7}
// reverse a part of array an make it  {1,2,6,5,4,3,}
#include <stdio.h>
int main()
{
    int i = 2;
    int j = 5;
    int temp;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i <= 6; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}