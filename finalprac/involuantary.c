#include<stdio.h>

int main(){
    int arr[3][3] = {
        {1, 0, 0},
        {0, -1, 0},
        {0, 0, -1}
    };
    
    int result[3][3];

    // Matrix multiplication: result = arr * arr
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                result[i][j] += arr[i][k] * arr[k][j];
            }
        }
    }

    // Checking if the result is the identity matrix
    int isInvolutory = 1;  // Assuming it's involutory until proven otherwise
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            // Identity matrix condition
            if(i == j && result[i][j] != 1) {
                isInvolutory = 0;
                break;
            } else if(i != j && result[i][j] != 0) {
                isInvolutory = 0;
                break;
            }
        }
        if(!isInvolutory) break;  // Exit outer loop if already proven not involutory
    }

    // Printing the result matrix
    printf("Result matrix after multiplication:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Check if the matrix is involutory
    if(isInvolutory) {
        printf("The matrix is involutory.\n");
    } else {
        printf("The matrix is not involutory.\n");
    }

    return 0;
}
