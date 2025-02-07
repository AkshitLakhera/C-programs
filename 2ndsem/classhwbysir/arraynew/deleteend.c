#include<stdio.h>
int main (){
    int arr[10]={1,2,3,4,5,6};
    int size=10;
    int lastvalidindex=5;
    //to delete last index;
    if(lastvalidindex>=0){
        lastvalidindex--;
    for(int i=0;i<=lastvalidindex;i++){
        printf("%d",arr[i]);
    }
}else {
        printf("Array is already empty, cannot delete.\n");
    }
    return 0;
}