#include<stdio.h>
int main (){
    //insert element at end
    int arr[10]={1,2,3,4,5};
    int size=10;
    int lastvalidindex=4;
    int insertelement;
    while(lastvalidindex < size - 1){
         printf("enter the element to insert at end");
         scanf("%d",&insertelement);
        arr[lastvalidindex +1]=insertelement;
        lastvalidindex++;
        //print array
        for(int i=0;i<=lastvalidindex;i++){
            printf("%d",arr[i]);
        }
        printf("\n");
    }
     if(lastvalidindex == size-1){
        printf("no empty space  we cannot  insert");
    } 
    return 0;
}