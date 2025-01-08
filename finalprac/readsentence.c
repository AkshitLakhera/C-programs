#include<stdio.h>
int main(){
    FILE *fptr;
    char ch;
    fptr=fopen("test.txt","r");
    ch=fgetc(fptr);
    while(ch !=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}