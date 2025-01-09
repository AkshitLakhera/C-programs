#include<stdio.h>
#include<string.h>
int main(){
    struct Book{
        char name[50];
        int noOfpages;
        float price;
    };
    struct Book e;
    e.noOfpages=50;
    e.price=44.00;
    strcpy(e.name,"akshit");
    printf("%s\n",e.name);
    printf("%d",e.noOfpages);
    return 0;
}