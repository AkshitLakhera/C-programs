#include<stdio.h>
int main(){
    //taking  char array as input
    // char str[100];
    // printf("enter the characters");
    // fgets(str, 100, stdin);
    // printf("%s",str);
    char str[50]="hello world";
    char *p = str; // Pointer to the first character of the string
    int i = 0;
    int digitcount = 0, charcount = 0;

    // Print the pointer's address
    printf("Pointer address: %p\n", p);

    // Print the first character using the pointer
    printf("First character using pointer: %c\n", *(p+2)); 
    while (str[i] != '\0') { // Loop until the null terminator
        if (str[i] >= '0' && str[i] <= '9') {
            digitcount++; // Count digits
        } else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            charcount++; // Count alphabetic characters
        }
        i++;
    }
    printf("the digitcount is %d and the charcount is %d",digitcount,charcount);
    return 0;
}