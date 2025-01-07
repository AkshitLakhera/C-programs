#include<stdio.h>
int main(int argc,char *argv[]){
    printf("The number of arguments agrc is %d",argc);
    for(int i =0;i<argc;i++){
        printf("the command line arg are as %s \n",argv[i]);
    }
    return 0;
}