#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8};//size is 10 and  2 spaces are still left
    int lastvalidindex=7;
    int size=10;
    // int insertindex=3;
    int insertindex;
    int insertedvalue;
    printf("Enter the insert index");
    scanf("%d",&insertindex);
    printf("Enter the value to be inserted");
    scanf("%d",&insertedvalue);
    //suppose i have to insert  at 3rd  index
    //first i have to check wheather the array have any free space
    //if it have then i will shift  one one element forward
    if(lastvalidindex == size-1){
        printf("No empty spaces left");
        return 0;
    }
    //forward shifting is done here
   for (int i = lastvalidindex; i >= insertindex; i--) {
        arr[i + 1] = arr[i];
    }
    //insert the value here
    arr[insertindex]=insertedvalue;
    lastvalidindex++;
    for(int i=0;i<=lastvalidindex;i++){
        printf("%d",arr[i]);
    }
    return 0;
}