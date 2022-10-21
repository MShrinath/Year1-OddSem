#include <stdio.h>
void nat(int n){
    if(n!=0){
        printf("%d ",n);
        return nat(n-1);
    }
}
int main(){
    int n=100;
    nat(n);
}