#include<stdio.h>

int main(){
    int rows, cols;
    
    // Input matrix dimensions
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    int arr1[rows][cols], arr2[rows][cols];
    
    // Input values for arr1
    printf("Enter values for matrix 1:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    
    // Input values for arr2
    printf("Enter values for matrix 2:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    int ismirror = 1;

    // Check for mirror matrix
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr1[i][j] != arr2[i][cols - 1 - j]) {  // Comparing with reversed indices of arr2
                ismirror = 0;
                break;
            }
        }
        if(!ismirror) {
            break;  // If found not a mirror, break out of both loops
        }
    }

    if(ismirror) {
        printf("Yes, it is a mirror matrix\n");
    } else {
        printf("Not a mirror matrix\n");
    }

    return 0;
}
 