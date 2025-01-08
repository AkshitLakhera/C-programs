#include <stdio.h>

int main() {
    char str[100];
    gets(str);  // Reads a string with spaces
    printf("You entered: %s\n", str);
    return 0;
}
