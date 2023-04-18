//armmstrong number
#include<stdio.h>
void armstrong(int n){
    int sum=0;
    int temp=n;
    while(n>0){
        int rem=n%10;
        sum+=rem*rem*rem;
        n/=10;
    }
    if(sum==temp){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    armstrong(n);
    
}   