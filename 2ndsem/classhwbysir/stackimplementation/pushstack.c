#include<stdio.h>

int main(){
    int stack[10];
    int size = 10;
    int top = -1; // Stack starts empty

    // Taking input
    while (top != size - 1) {
        int value;
        printf("Enter the value you want to insert in the stack (or -1 to stop): ");
        scanf("%d", &value);

        if (value == -1) break; // Allow user to stop early

        top++;
        stack[top] = value;
    }

    if (top == size - 1) {
        printf("Stack Overflow! Cannot push more elements.\n");
    }

    // Printing stack contents
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {  // Fixed loop condition
        printf("%d ", stack[i]);
    }
    
    return 0;
}
