// rotate with k steps
#include <stdio.h>
void reverse(int arr[7], int a, int b)
{
    int temp;
    while (a < b)
    {
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
    }
    return;
}
int main()
{
    int k;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    printf("Enter the terms you want to rotate");
    scanf("%d", &k);
    reverse(arr, 0, 6);
    reverse(arr, 0, k - 1);
    reverse(arr, k, 6);
    for (int i = 0; i < 7; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}