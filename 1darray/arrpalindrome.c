#include <stdio.h>

int main()
{
    int arr1[5] = {1, 2, 3, 2, 1};
    int i = 0;
    int j = 4;
    int is_palindrome = 1;

    while (i < j)
    {
        if (arr1[i] != arr1[j])
        {
            is_palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (is_palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
