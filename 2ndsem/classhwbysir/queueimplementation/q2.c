#include <stdio.h>

#define MAX_SIZE 10 
int queue[MAX_SIZE];
int front = -1;      // Front pointer
int rear = -1;       // Rear pointer
int isFull() {
    return rear == MAX_SIZE - 1;
}
int isEmpty() {
    return front == -1 || front > rear;
}
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full, cannot insert element.\n");
        return;
    }

    // If it's the first element, set both front and rear to 0
    if (front == -1) {
        front = 0;
    }

    // Insert element at the rear of the queue
    rear++;
    queue[rear] = value;

    printf("Inserted %d into the queue.\n", value);
}

// Dequeue function to remove element from the front and shift elements
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty, cannot remove element.\n");
        return;
    }
    
    printf("Removed %d from the queue.\n", queue[front]);
    
    // Shift elements left after removing the front element
    for (int i = 0; i < rear; i++) {
        queue[i] = queue[i + 1];
    }

    // Update rear after shifting
    rear--;

    // If the queue is empty after dequeue, reset the front pointer
    if (front > rear) {
        front = -1;
    }
}

// Function to display the current state of the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    
    printf("Current Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
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
