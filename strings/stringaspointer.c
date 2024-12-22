#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "AKSHIT LAKHERA"; //
    char *ptr = str;               // ptr now points to first address of string
    int i = 0;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
        i++;
    }
}