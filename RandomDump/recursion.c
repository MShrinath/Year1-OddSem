#include <stdio.h>
int print(int n){
    if(n==1){
        printf("%d ",n);
    }
    else{
        printf("%d ",n);
        return print(n-1);
    }
}
int main(){
    // printf("%d ",print(10));
    print(100);
}