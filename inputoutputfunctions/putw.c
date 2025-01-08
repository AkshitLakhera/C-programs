#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    putw(42, file);  // Writes the integer 42 to the file
    fclose(file);
    return 0;
}
