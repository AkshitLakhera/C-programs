#include <conio.h>
int main() {
    char c;
    c = getch();  // Reads a character without buffering
    printf("You pressed: %c\n", c);
    return 0;
}
