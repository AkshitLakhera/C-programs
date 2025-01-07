#include <stdio.h>

void findSaddlePoint(int matrix[10][10], int rows, int cols) {
    int i, j, k;
    int saddlePointFound = 0;
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            // First check if current element is minimum in its row
            int isMinInRow = 1;
            for (k = 0; k < cols; k++) {
                if (matrix[i][k] < matrix[i][j]) {
                    isMinInRow = 0;
                    break;
                }
            }
            
            // If minimum in row, check if maximum in column
            if (isMinInRow) {
                int isMaxInCol = 1;
                for (k = 0; k < rows; k++) {
                    if (matrix[k][j] > matrix[i][j]) {
                        isMaxInCol = 0;
                        break;
                    }
                }
                
                // If both conditions are met, we found a saddle point
                if (isMaxInCol) {
                    printf("Saddle Point found: %d at position (%d, %d)\n", 
                           matrix[i][j], i, j);
                    saddlePointFound = 1;
                }
            }
        }
    }
    
    if (!saddlePointFound) {
        printf("No Saddle Point found in the matrix.\n");
    }
}

int main() {
    int matrix[10][10], rows, cols, i, j;
    
    // Input matrix dimensions
    printf("Enter the number of rows and columns (max 10 each): ");
    scanf("%d %d", &rows, &cols);
    
    // Validate input dimensions
    if (rows <= 0 || cols <= 0 || rows > 10 || cols > 10) {
        printf("Invalid dimensions. Please enter values between 1 and 10.\n");
        return 1;
    }
    
    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Find and print saddle point
    findSaddlePoint(matrix, rows, cols);
    
    return 0;
}