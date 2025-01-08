#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "r");
    char buffer[100];
    fgets(buffer, 100, file);  // Reads a line from the file
    printf("File content: %s\n", buffer);
    fclose(file);
    return 0;
}
