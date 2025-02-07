#include <stdio.h>

int main() {
    int arr[12] = {1, 2, 3, 3, 4, 5, 7, 8}; // Predefined array
    int lastvalidindex = 7; // Tracks the last valid index
    int size = 12; // Maximum size of the array

    char chooselastinsert = 'A';
    char choosemiddleinsert = 'B';
    char userchoice;

    int insertelement;
    int insertindex;
    int insertedvalue;

    printf("Where do you want to insert the element? (A for last insert, B for middle insert): ");
    scanf(" %c", &userchoice); 

    if (userchoice == chooselastinsert) {
        // Insert at last position if space is available
        if (lastvalidindex < size - 1) {
            printf("Enter the element to insert at the end: ");
            scanf("%d", &insertelement);

            arr[lastvalidindex + 1] = insertelement;
            lastvalidindex++; // Update last valid index
        } else {
            printf("No empty space, insertion not possible.\n");
        }
    } 
    else if (userchoice == choosemiddleinsert) {
        // Check if there is space in the array
        if (lastvalidindex == size - 1) {
            printf("No empty spaces left.\n");
            return 0;
        }

        // Get the index and value to insert
        printf("Enter the index to insert (0-%d): ", lastvalidindex);
        scanf("%d", &insertindex);

        printf("Enter the value to insert: ");
        scanf("%d", &insertedvalue);

        // Shift elements to the right to make space
        for (int i = lastvalidindex; i >= insertindex; i--) {
            arr[i + 1] = arr[i];
        }

        // Insert the new value
        arr[insertindex] = insertedvalue;
        lastvalidindex++; // Update last valid index
    } 
    else {
        printf("Invalid choice! Please enter 'A' or 'B'.\n");
    }

    // Print the updated array
    printf("Updated Array: ");
    for (int i = 0; i <= lastvalidindex; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
