// Writes a string to a file or stream.
#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    fputs("Hello, File!", file);  // Writes to the file
    fclose(file);
    return 0;
}
