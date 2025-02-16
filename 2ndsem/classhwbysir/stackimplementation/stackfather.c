//Stack 
//1-Push operation
//2-Pop operation
//3-Peek operation
//4-exit
//last in first out1
#include<stdio.h>
int top=-1;
int size=10;
int stack[10];
//push operation
void push(){
    int value;
    printf("Enter the value you want to  insert");
    scanf("%d",&value);
    if(top == size-1){
        printf("Stackoverflow cannot insert any element \n");
    }
    top++;
    stack[top]=value;
}
//pop opeartion
void pop(){
    // check if the  stack have any element already
    if(top == -1){
        printf("Sorry you don't have any element in stack");
    }
    printf("Popped %d from the stack.\n", stack[top]);
    top--;
}
//peek  to show last inserted element;
void peek(){
    if(top == -1){
        printf("Sorry you don't have any element in stack \n");
    };
    printf("The last insert element is %d",stack[top]);
}
int main(){
    int choice;
    do
    {
    printf("Lets perform stack opeartions \n");
    printf("1 - is for push element is in stack \n");
    printf("2 - is for removing element  fromt the stack \n ");
    printf("3 -  is for to see last inserted element in the stack \n");
    printf("4 - Exit and print the stack \n");
    printf("Enter your  choice  \n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        peek();
        break;
    case 4:
    break;    
    default:
        printf("Wrong input");
        break;
    }
    } while (choice !=4);
    //print
    for(int i=0;i<=top;i++){
        printf("%d",stack[i]);
    }
return 0;
}