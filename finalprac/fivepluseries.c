#include<stdio.h>
int main(){
    double sum = 5.0, numer = 7.0, deno = 0.5;
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        sum = sum + numer*deno;
        numer=numer*7;
        deno=deno*10;
    }
    printf("sum od %d terms  is %.2lf",n,sum );
return 0;

}