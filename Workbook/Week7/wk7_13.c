#include <stdio.h>
int pw(int x,int k){
    if(k==1){
        return x;
    }
    else{
        return x * pw(x,k-1);
    }
}
int main(){
    int t,x,k;
    scanf("%d\n",&t);
    for (int i = 0; i < t; i++){
        scanf("%d %d",&x,&k);
        printf("%d\n",pw(x,k));
    }
}