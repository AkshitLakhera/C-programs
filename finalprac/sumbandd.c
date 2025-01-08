#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},
    {4,5,6},
    {7,8,9}};
    int sumd=0,sumb=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j || i+j==2){
                  printf("the diagonal value is%d \n",arr[i][j]);
                sumd=sumd+arr[i][j];
            }
           if(i == 0 || i == 2 || j == 0 || j == 2) {
                sumb += arr[i][j];
               
            }
        }
    }
    sumd += arr[1][1]; 
    printf("The sum of diagonal is %d",sumd);
    printf("The sum of boundary is %d",sumb);
    return 0;

}