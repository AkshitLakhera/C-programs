#include<stdio.h>
int main(){
    //i have to delete from the middle okay 
    int arr[10]={1,2,3,4,5,6};//suppose it have six elements
    //supose i have to delete 3
    //which is at index 2
    int lastvalidelementindex=5;
    int deleteindex=3;
    if(lastvalidelementindex  < 0){
        printf("Hey I am sorry to say that array is empty");
        return 0;
    }else if(deleteindex < 0 || deleteindex > lastvalidelementindex){
        printf("sorry you have written a invlaid index");
        return 0;
    }else{
        for(int i=deleteindex;i<lastvalidelementindex;i++){
            arr[i]=arr[i+1];
        }
        //now decrease size of last valid index
        lastvalidelementindex --;
    }
    //print elements
    for(int i=0;i<=lastvalidelementindex;i++){
        printf("%d",arr[i]);
    }

return 0;
}