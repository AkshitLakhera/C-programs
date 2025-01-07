#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
if(argc != 3){
     printf("Usage: %s <num1> <num2>\n", argv[0]);
     return 1;
}
int arg1=atoi(argv[1]);
int arg2=atoi(argv[2]);
int sum=arg1+arg2;
printf("Sum of %d and %d is: %d\n", arg1, arg2, sum);
    return 0;
}