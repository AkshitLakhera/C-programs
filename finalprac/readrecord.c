#include<stdio.h>
struct Student {
    char name[50];
    int age;
    float marks;
};
//read from file
int main(){
struct Student s;
FILE *fptr;
fptr=fopen("src.txt","r");
while(fscanf(fptr,"%[^\n]%*c %d %f",s.name,&s.age,&s.marks) != EOF){
    printf("the name :%s, age =%d ,and marks=%f",s.name,s.age,s.marks);

}
fclose(fptr);
return 0;

}