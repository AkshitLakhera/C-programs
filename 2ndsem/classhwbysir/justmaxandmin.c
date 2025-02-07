#include<stdio.h>
int main (){
    int n;
    int arr[5]={2,3,5,6,7};
    printf("Enter the n in between");
    scanf("%d",&n);
    int gmax=arr[0];
    int gmin=arr[0];
    for(int i=1;i<5;i++){
        //count global maximun 
        if(arr[i]>gmax){
            gmax=arr[i];
        }
        //count global minimum
        if(gmin>arr[i]){
            gmin=arr[i];
        }
        
    }

         //initialize justmax and justmin
        int justmax=gmax;
        int justmin=gmin;
        //finding just max and min
        for(int i=0;i<5;i++){
            if(arr[i]>n&& arr[i]<justmax){
                justmax=arr[i];
            }
            //for just min

            if(arr[i]<n && arr[i]>justmin){
                justmin=arr[i];
            }
        }
        printf("The just max is %d",justmax);
        printf("the just min is  %d",justmin);
}
//we can do it with sorting too.