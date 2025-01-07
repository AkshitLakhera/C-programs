#include<stdio.h>
   struct person
    {
        char name[50];
        struct person *friend; // Pointer to another Person (self-referential)
    };
    
int main(){
    struct person person1={"Alice",NULL};
    struct person person2={"Akus",NULL};
    // Now, person1's friend points to person2
    person1.friend=&person2;// person1's friend is person2
     // Output the relationship
    printf("%s's friend is %s\n", person1.name, person1.friend->name);

    return 0;
}