#include<stdio.h>
int main(){
int arr[10]={9,1,2,3,5,5,7,5,1,2};
int reparr[10];
int k=0;
for(int i=0;i<10;i++){
    for(int j=i+1;j<10;j++){
        if(arr[i]==arr[j]){
            //check if is already added
            int alreadyExists = 0;
            for(int m=0;m<k;m++){
                if(reparr[i]==arr[i]){
                    alreadyExists = 1;
                }
            }
            if (!alreadyExists) {
                    reparr[k] = arr[i];
                    k++;
                }
        }
    }
}
    printf("%d",reparr[3]);

return 0;
}