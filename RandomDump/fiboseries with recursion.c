#include <stdio.h>
int fib(int f0,int f1,int n){
    int ft=f0+f1;
    if(n==0){
        return 0;
    }
    else{
        printf("%d ",ft);
        return fib(f1,ft,n-1);
    }
}
int main(){
    int n,f0=0,f1=1;
    scanf("%d",&n);
    printf("0 1 ");
    fib(f0,f1,n-2);

}