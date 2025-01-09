#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        char name[50];
        int age;
    };
    struct student people[3];
    //taking input for three person
    for(int i=0;i<3;i++){
        printf("Enter the name");
        fgets(people[i].name,sizeof(people[i].name),stdin);
        people[i].name[strcspn(people[i].name,"\n")]='\0';//remove inline
        printf("Enter the age");
        scanf("%d",&people[i].age);
        getchar();
    }
     for (int i = 0; i < 3; i++) {
        printf("\nPerson %d:\n", i + 1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
    }
    return 0;
}