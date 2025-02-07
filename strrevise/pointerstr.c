#include<stdio.h>
int main(){
    struct Person {
        char name[50];
        int age;
    };
    struct Person p={"john",25};
    struct Person *ptr;
    ptr=&p;
        printf("Name: %s\n", ptr->name);
        printf("aGE IS : %d",ptr->age);
return 0;
}