#include <stdio.h>
int super_digit(int n){
    if(n==0){
        return 0;
    }
    else{
        return n%10 + super_digit(n/10);
    }
}
int main(){
    int n,snum;
    scanf("%d",&n);
    snum = super_digit(n);
    while(snum > 10){
    snum = super_digit(snum);
    }
    printf("%d",snum);
}