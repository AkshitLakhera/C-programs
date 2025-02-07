#include<stdio.h>
int main(){
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int temp;
    //transpose
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;

        }

    }
    //reverse
    for(int i=0;i<4;i++){
        for(int j = 0, k = 3; j < k; j++, k--)
        {
            temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
        }
    }
       for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}