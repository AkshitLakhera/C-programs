#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    fputc('A', file);  // Writes 'A' to the file
    fclose(file);
    return 0;
}
//write single char to file.