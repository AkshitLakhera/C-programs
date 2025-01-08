#include<stdio.h>
int main(){
    char str[100];
    printf("enter the sentence");
    fgets(str, sizeof(str),  stdin);  
    printf("You entered: %s", str);

}
