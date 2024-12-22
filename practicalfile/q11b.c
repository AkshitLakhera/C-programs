#include <stdio.h>
#include <string.h>
int main()
{
    char arr[] = "madam";
    int len = strlen(arr);
    int isPalindrome = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
