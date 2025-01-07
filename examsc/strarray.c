#include<stdio.h>
#include<string.h>
//nested str
struct Address {
    char city[50];
    int pincode;
};


struct Student {
    char name[50];
    int age;
    float grade;
    struct Address address;
};

// creating a function
// Function to display student details
void displayStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Grade: %.2f\n", s.grade);
}

int main(){
    struct Student students[3];


    
    struct Student s1={"diru",50,100};
   displayStudent(s1);
    //making pointer in structures
     struct Student *ptr =&students[0];
    // assigning to student 0
    strcpy(students[0].name,"akshit");
    students[0].age=50;
    students[0].grade=9.1;
    strcpy(students[0].address.city,"dehradun");
// accessing with pointer
    // strcpy(ptr->name,"johny");
    printf("acessing with pointer \n");
    // printf("%s \n",ptr->name);



    //assigning to student 1;
    strcpy(students[1].name,"piyush");
    students[1].age=51;
    students[1].grade=5.9;

     // Assign values to the third student
    strcpy(students[2].name, "Bob");
    students[2].age = 21;
    students[2].grade = 9.0;

     for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %.2f\n", students[i].grade);
        printf("Adress: %s\n", students[i].address.city);
        printf("\n");
    }
return 0;
}