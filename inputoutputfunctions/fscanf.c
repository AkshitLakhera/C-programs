#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "r");
    int num;
    fscanf(file, "%d", &num);  // Reads an integer from the file
    printf("Integer from file: %d\n", num);
    fclose(file);
    return 0;
}
//read from file