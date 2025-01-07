//Question1 - 1,1,2,3,5,8,12.....
#include<stdio.h>
int fib(int n) {
    if(n==0 || n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n,term;
    printf("Enter the term");
    scanf("%d",&n);
    term=fib(n);
    printf("the %dth term is  %d",n,term);
}
