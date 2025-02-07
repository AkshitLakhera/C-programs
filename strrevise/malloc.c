#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    //dynamically allocates memory with  malloc
    int *arr= (int *)malloc(n * sizeof(int));
    //check if memory allocation was successfull
    if(arr ==NULL){
        printf("memory allocation failed");
        return 1;
    }
    //take input and print the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Equivalent to *(arr + i)
    }

    printf("Using arr[i]: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Syntactic sugar
    }
free(arr);
return 0;


}