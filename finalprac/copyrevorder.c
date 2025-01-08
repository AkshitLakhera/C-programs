#include<stdio.h>
//first write src file name
//write destfilename
//open src file in read mode
//open destination file write mode
//make the end pointer to end
// then forloop from end to start
//write on destfile
int main(int argc,char *argv[]){
    FILE *sourceFile, *destinationFile;
    long filesize;
    char c;
    sourceFile=fopen(argv[1],"r");
    destinationFile=fopen(argv[2],"w");
    fseek(sourceFile,0,SEEK_END); //set pointer end
    filesize=ftell(sourceFile);
    //for loop
    for(long i=filesize -1;i>=0;i--){
        fseek(sourceFile,i,SEEK_SET);//set pointer at i;
         c = fgetc(sourceFile);  // Read the character
        fputc(c, destinationFile);  // Write the character to destination file

    }
fclose(sourceFile);
fclose(destinationFile);
return 0;


}