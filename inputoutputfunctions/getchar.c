//Reads a single character from the standard input (keyboard).
#include<stdio.h>
int main(){
    char c;
    c=getchar();//reads a character from input
    printf("You entered: %c\n", c);
    return 0;

}