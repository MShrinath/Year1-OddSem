#include <stdio.h>
int prime(int num, int i){
    if(i == 1){
        return 1;
    }
    else{
        if(num % i == 0){
            return 0;
        }
        else{
            return prime(num, i - 1);
        }       
    }
}
int main(){
    int n,f;
    scanf("%d",&n);
    f = prime(n,n/2);
    if(f==1){
        printf("Prime");
    }
    else{
        printf("Not");
    }
}