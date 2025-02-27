///queue - fifo- first come first serve
//inert at end
// delete at front
#include<stdio.h>
int front=-1;
int rear=-1;
int size=10;
int queue[10];
//in push element is added to first position
void push(){
    int value;
    printf("Enter the value you want to  insert");
    scanf("%d",&value);
    if(front == size-1){
        printf("queueoverflow cannot insert any element \n");
    }
    if(front ==-1){
   front=0; // pointer goes i first index
    }
    rear++;
    queue[rear]=value;
     printf("Inserted %d into the queue.\n", value);
    }
//remove from queue from first position
void dequeue(){
    if(front == -1){
        printf("The queue is empty nothing to remove");
    }
     printf("Removed %d from the queue.\n", queue[front]);
    for(int i= 0;i < rear;i++){
        queue[i]=queue[i+1];
    }
    rear--;
    if(front > rear){
        front=-1;
    }
}