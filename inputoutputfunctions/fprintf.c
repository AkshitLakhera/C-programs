#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    fprintf(file, "This is a number: %d\n", 42);  // Writes to the file
    fclose(file);
    return 0;
}
//formatted way to write on file