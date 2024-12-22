#include <stdio.h>

int main()
{
    char arr[] = "he4llo5";
    int alphabets = 0, digits = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
        {
            alphabets++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            digits++;
        }
    }
    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);

    return 0;
}
