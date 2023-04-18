#include <stdio.h>
void oven(int n){
    if(n==1){
        printf("Odd");
    }
    if(n==0){
        printf("Even");
    }
    else{
        return oven(n-2);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    oven(n);
}