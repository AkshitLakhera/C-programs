#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Logic to find the unique element
    for (int i = 0; i < n; i++) {
        int isUnique = 1; // Assume the current element is unique

        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) { 
                isUnique = 0; // Duplicate found, mark as not unique
                break;        // No need to check further
            }
        }

        if (isUnique) {
            // Print the unique element and exit the loop
            printf("The unique element is: %d\n", arr[i]);
            break; // Since there's only one unique element, we can stop here
        }
    }
    return 0;
}

  