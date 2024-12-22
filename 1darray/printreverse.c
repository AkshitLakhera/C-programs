// take input and print in reverse order
#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter a element %d \n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
        printf(" no ares %d", arr[i]);
    }
    return 0;
}
