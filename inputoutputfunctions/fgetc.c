#include <stdio.h>
// read single variable from file
int main() {
    FILE *file = fopen("test.txt", "r");
    char c = fgetc(file);  // Reads the first character from the file
    printf("Character read: %c\n", c);
    fclose(file);
    return 0;
}
