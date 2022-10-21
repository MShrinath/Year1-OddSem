#include <stdio.h>
int numb(int n){
    if(n<10){
        return 1;
    }
    else{
        return 1 + numb(n/10);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",numb(n));
}