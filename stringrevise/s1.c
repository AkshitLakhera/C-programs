#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Remove trailing newline (if any)
    // str[strcspn(str, "\n")] = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if current character is the first letter of a word
        if ((i == 0 || str[i - 1] == ' ') && isalpha(str[i])) {
            str[i] = toupper(str[i]); // Capitalize the first letter
        }
    }

    printf("Capitalized string: %s\n", str);
    return 0;
}
