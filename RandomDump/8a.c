#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int temp=n;
    while(n>0){
        int r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    if(temp==sum)
        printf("yes");
    else    
        printf("no");
}