#include<stdio.h>
int main(int argc,char *argv[]) {
    FILE *fptr;
    fptr = fopen(argv[1], "r");
    char c;
    int count = 0;
    int inWord = 0;  // Flag to track if we are inside a word

    if (fptr == NULL) {
        printf("Could not open file\n");
        return 0;
    }

    // Read the file character by character
    while ((c = getc(fptr)) != EOF) {
        putchar(c);  // Print the character (optional, for debugging)

        // Check if we encounter a space, newline, or tab
        if (c == ' ' || c == '\n' || c == '\t') {
            if (inWord) {  // If we were inside a word, it has ended
                count++;  // Increment word count
                inWord = 0;  // We are no longer inside a word
            }
        } else {
            inWord = 1;  // We are inside a word now
        }
    }

    // If the last character in the file was part of a word, count it
    if (inWord) {
        count++;
    }

    fclose(fptr);
    printf("\nThe number of words is: %d\n", count);

    return 0;
}
