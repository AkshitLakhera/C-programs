#include <stdio.h>
int main()
{
    int temp;
    int i = 0;
    int j = 4;
    int arr[5] = {1, 2, 3, 4, 5};
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
// can do with for loop i can use two variable in for loop too.