#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void analyzeFile(const char *filename)
{
    FILE *file;
    char ch;
    int charFrequency[256] = {0};
    int wordCount = 0, inWord = 0;
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error: Could not open the file %s.\n", filename);
        return;
    }
    while ((ch = fgetc(file)) != EOF)
    {
        charFrequency[(unsigned char)ch]++;

        // Check for word boundaries
        if (isspace(ch))
        {
            inWord = 0; // End of a word
        }
        else if (inWord == 0)
        {
            inWord = 1; // Start of a new word
            wordCount++;
        }
    }
    fclose(file);
    printf("Character Frequency:\n");
    for (int i = 0; i < 256; i++)
    {
        if (charFrequency[i] > 0 && (isprint(i) || i == ' '))
        {
            if (i == ' ')
                printf("Space: %d\n", charFrequency[i]);
            else
                printf("%c: %d\n", i, charFrequency[i]);
        }
    }
    printf("\nTotal number of words: %d\n", wordCount);
}

int main()
{
    const char *filename = "sentence.txt";
    analyzeFile(filename);

    return 0;
}
