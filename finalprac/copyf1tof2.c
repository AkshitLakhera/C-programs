#include<stdio.h>
int main(int argc,char *argv[]){
    FILE *src,*dest;
    long filesize;
    char c;
    src=fopen(argv[1],"r");
    dest=fopen(argv[2],"w");
    fseek(src, 0, SEEK_END);    // Move to the end of the file
    filesize = ftell(src);      // Get the position (size) at the end of the file
    fseek(src, 0, SEEK_SET);  

    for(long i=0;i<filesize;i++){
        c=fgetc(src);
        fputc(c,dest);
    }
    fclose(src);
    fclose(dest);
    return 0;

}