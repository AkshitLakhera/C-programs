#include <stdio.h>
//read integer from file
int main() {
    FILE *file = fopen("test.txt", "r");
    int num = getw(file);  // Reads an integer from the file
    printf("Integer read: %d\n", num);
    fclose(file);
    return 0;
}
