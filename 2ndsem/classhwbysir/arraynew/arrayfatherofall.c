//In this  program I will have a function name arrayoperation where I will do -
//1) Insert at the end
//2) Inesrt at any given index
//3)Search and update delete  ,insert
//4)Delete at end 
//5) delete at any given index
//Code
#include <stdio.h>

// Insert at end
void insertend(int arr[], int *lastvalid, int size) {
    if ((*lastvalid) >= size - 1) {
        printf("No empty space, we cannot insert\n");
        return;
    }
    printf("Enter the element to insert at end: ");
    int insertelement;
    scanf("%d", &insertelement);
    arr[(*lastvalid) +1] = insertelement;
    (*lastvalid)++;
    for (int i = 0; i <= (*lastvalid); i++) {
        printf("%d ", arr[i]);
    }
}
// Insert at specific index
void insertatspecificindex(int arr[], int *lastvalid, int size, int index, int value) {
    if (*lastvalid >= size - 1) {
        printf("No empty space, we cannot insert\n");
        return;
    }
    if (index < 0 || index > (*lastvalid) + 1) {
        printf("Invalid index!\n");
        return;
    }
    for (int i = (*lastvalid); i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = value;
    (*lastvalid)++;
}

// Update value
void updatevalueatindex(int arr[], int lastvalid, int index, int value) {
    if (index < 0 || index > lastvalid) {
        printf("Invalid index entered\n");
        return;
    }
    arr[index] = value;
}

// Delete at end
void deletevalueend(int arr[], int (*lastvalid)) {
    if (*lastvalid < 0) {
        printf("The array is empty, we cannot delete anything\n");
        return;
    }
    (*lastvalid)--;
}

// Delete at specific index
void deleteatindex(int arr[], int (*lastvalid), int index) {
    if (*lastvalid < 0) {
        printf("Array is empty\n");
        return;
    }
    if (index < 0 || index > *lastvalid) {
        printf("Invalid index entered\n");
        return;
    }
    for (int i = index; i < *lastvalid; i++) {
        arr[i] = arr[i + 1];
    }
    (*lastvalid)--;
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n], nofactualelements = 0;
    int lastvalidindex;

    printf("Enter number of elements: ");
    scanf("%d", &nofactualelements);
    lastvalidindex = nofactualelements-1;

    printf("Enter %d elements: ",nofactualelements);
    for (int i = 0; i <= lastvalidindex; i++) {
        scanf("%d", &arr[i]);
    }

    int choice, index, value;
    printf("Choose operation (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: insertend(arr, &lastvalidindex, n); break;
        case 2: 
            printf("Enter index and value: ");
            scanf("%d %d", &index, &value);
            insertatspecificindex(arr, &lastvalidindex, n, index, value);
            break;
        case 3: 
            printf("Enter index and value: ");
            scanf("%d %d", &index, &value);
            updatevalueatindex(arr, lastvalidindex, index, value);
            break;
        case 4: deletevalueend(arr, &lastvalidindex); break;
        case 5: 
            printf("Enter index: ");
            scanf("%d", &index);
            deleteatindex(arr, &lastvalidindex, index);
            break;
    }

    printf("Final array: ");
    for (int i = 0; i <= lastvalidindex; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
