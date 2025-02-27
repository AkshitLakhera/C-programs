//queue - first in first outs
//insert in circular queue in various blank spaces
//delete in circular queue
#include<stdio.h>
int front=-1;
int rear=-1;
int size=4;
int queue[4];
//full condtion
int isFull() {
    if((front==0 && rear==size-1) || (rear==front-1)){
  return 1;
    }
   return 0;
}
int isempty(){
    if((front==-1 && rear==-1)){
        return 1;
    }
    return 0;
}
//for inserting
void enqueue(int value){
    if (isFull()) {
        printf("Queue is full, cannot insert element.\n");
        return;
    }
    if (front == -1) {
        front = 0;
        rear=0;
    }
    else if( rear==size-1){
        rear=0;
    }
    else {
        rear++;
    }
    queue[rear]=value;
printf("Inserted %d into the queue.\n", value);
}
//for deleting
void dequeue(){
    if(isempty()){
        printf("The queue is underflow nothing to empty");
        return;
    }
    printf("Removed %d from the queue.\n", queue[front]);
    //when reaches end
    if(front==rear){
    front=-1;
    rear=-1; //reset front to zero;
    }
    //if front is at last index. rear at initial because of circular queue
    else if (front == size - 1) {
        front = 0;
    } 
    else {
        front++;
    }
}
void display(){
    if (isempty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("The current queue is .\n");
    if(front <= rear){
        for(int i=front;i<=rear;i++){
            printf("%d",queue[i]);
        }
    }
    else{
        for(int i=front;i<=size-1;i++){
            printf("%d",queue[i]);
        }
        for(int i=0;i<=rear;i++){
            printf("%d",queue[i]);
        }
            
        }

}
int main() {
    int choice, value;

    do {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, try again.\n");
        }
    } while (choice != 4);

    return 0;
}
