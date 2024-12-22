#include <stdio.h>
int main()
{
    // char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char arr[] = "Hello";
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }
    return 0;
}