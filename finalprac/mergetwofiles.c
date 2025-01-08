#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *src, *src1, *dest;
    char c;

    // Check if correct number of arguments are provided
    if (argc != 4) {
        printf("Usage: %s <source_file1> <source_file2> <destination_file>\n", argv[0]);
        return 1;  // Exit if arguments are incorrect
    }

    // Open the first source file in read mode
    src = fopen(argv[1], "r");
    if (src == NULL) {
        printf("Could not open source file %s.\n", argv[1]);
        return 1;
    }

    // Open the second source file in read mode
    src1 = fopen(argv[2], "r");
    if (src1 == NULL) {
        printf("Could not open source file %s.\n", argv[2]);
        fclose(src);  // Close the first source file before exiting
        return 1;
    }

    // Open the destination file in append mode
    dest = fopen(argv[3], "a");
    if (dest == NULL) {
        printf("Could not open destination file %s.\n", argv[3]);
        fclose(src);  // Close the first source file before exiting
        fclose(src1); // Close the second source file before exiting
        return 1;
    }

    // Copy content from the first source file to the destination
    while ((c = fgetc(src)) != EOF) {
        fputc(c, dest);
    }

    // Copy content from the second source file to the destination
    while ((c = fgetc(src1)) != EOF) {
        fputc(c, dest);
    }

    // Close all files
    fclose(src);
    fclose(src1);
    fclose(dest);

    printf("Files merged successfully.\n");

    return 0;
}
