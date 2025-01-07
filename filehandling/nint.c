#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Prompt the user to enter the number of integers
    printf("Enter the number of integers you want: ");
    scanf("%d", &n);
    int* ptr =(int*) malloc(n*sizeof(int));
    int* p = ptr;
    for(int i =1 ;i<=n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    int* t =p;
    for(int i=1;i<=n;i++){
        printf("%d\n",(*p));
    }

    return 0;
}
