#include<stdio.h>
int main (){
    int front=-1;
    int rear=-1;
    int size=10;
    int queue[10];
    //to  enqueue
    void enqueue(int value){
        if(front == size-1){
            printf("queue is full cannot be inserted");
            if(front==-1){
                front=0;
            }
            rear++;
            queue[rear]=value;
        }
    }
//dequeue
void dequeue( ){
    if(front ==-1){
        printf('The queue is empty')
        front = -1;
        rear = -1;
        return 0;
          }
//to remove
front++;
// If last element is dequeued, reset front and rear
    if (front > rear) {
        front = -1;
        rear = -1;
    }
    }
}