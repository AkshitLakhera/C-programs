#include <stdio.h>

int main()
{
    int arr[10] = {95, 90, 31, 25, 100, 50, 65, 89, 97, 30};
    int min = arr[0], max = arr[0];
    int minindex = 0, maxindex = 0;
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minindex = i;
        }
    }
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxindex = i;
        }
    }

    printf("The index of min is %d, and the min value is %d\n", minindex, min);
    printf("The index of max is %d, and the max value is %d\n", maxindex, max);
    int temp = arr[minindex];
    arr[minindex] = arr[maxindex];
    arr[maxindex] = temp;
    printf("Array after swapping max and min:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
