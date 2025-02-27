#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8};//size is 10 and  2 spaces are still left
    int lastvalidindex=7;
    int size=10;
    // int insertindex=3;
    int insertindex;
    int insertedvalue;
    int key;
    printf("Enter the key from the array");
    scanf("%d",&key);
    //lets find index of key
    for(int i=0;i<=lastvalidindex;i++){
        if(arr[i]==key){
            insertindex=i;
        }
    }
    printf("Enter the value to be inserted");
    scanf("%d",&insertedvalue);
    //here we have insert after or before key as per  choice
    if(lastvalidindex == size-1){
        printf("No empty spaces left");
        return 0;
    }
    //one after
    for(int i=lastvalidindex;i >insertindex;i--){
      arr[i+1]=arr[i];
    }
    arr[insertindex+1]=insertedvalue;
    lastvalidindex++;
     for(int i=0;i<=lastvalidindex;i++){
        printf("%d",arr[i]);
    }
    return 0;
}