#include<stdio.h>
#include<string.h>
  struct  Student
    {
        char name[50];
        int age;
        float grade;
        
    };
int main(){
  struct Student s1;
  strcpy(s1.name,"john");
  s1.age=50;
  s1.grade=9.5;
   // Print the values
    printf("Student Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Grade: %.2f\n", s1.grade);
    
}