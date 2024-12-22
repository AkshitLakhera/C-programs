#include <stdio.h>

int main()
{
    char value;
    printf("Enter a character: ");
    scanf("%c", &value);
    int category;
    if ((value >= 'a' && value <= 'z') || (value >= 'A' && value <= 'Z'))
    {
        category = 1;
    }
    else if (value >= '0' && value <= '9')
    {
        category = 2;
    }
    else
    {
        category = 3;
    }
    switch (category)
    {
    case 1:
        printf("The value '%c' is an alphabet.\n", value);
        break;
    case 2:
        printf("The value '%c' is a digit.\n", value);
        break;
    case 3:
        printf("The value '%c' is a special character.\n", value);
        break;
    default:
        printf("Invalid input.\n");
        break;
    }
    return 0;
}
