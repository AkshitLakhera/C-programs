// array containing elements from 1 to  100  except one element in this range  is missing.Find the missing element
// we have 99 elements
// sum2- sum1
#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int sum = 0;
    int sum2;
    int n;
    sum2 = n * (n - 1) / 2;
    for (int i = 0; i < 99; i++)
    {
        sum = arr[i] + sum;
    }
}

// at last do sum2-sum1 you will get the answer