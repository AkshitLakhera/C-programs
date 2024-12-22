#include <stdio.h>
#include <string.h>
int main()
{
    // creating a structure
    struct Book
    {
        char name[50];
        int noOfpages;
        float price;
    } a, b, c;
    struct Book e;
    e.noOfpages = 500;
    a.noOfpages = 100;
    a.price = 411.5;
    strcpy(a.name, "hello akshit");
    printf("Name: %s\n", a.name);
    printf("%d", a.noOfpages);
    printf("%d", e.noOfpages);
    return 0;
}