#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("test.txt","r");
    char c;
    char d;
    int count=0;
     if (fptr == NULL)
    {
        printf("Could not open file ");
        return 0;
    }
    for(c=getc(fptr);c!=EOF;c=getc(fptr)){
        if(c == '\n'){
            count ++;
        }
    }
    fclose(fptr);
    printf("the number of lines are count %d",count);
    return 0;
}