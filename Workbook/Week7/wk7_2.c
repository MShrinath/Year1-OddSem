#include <stdio.h>
int pw(int x,int y){
    if(y==1){
        return x;
    }
    else{
        return x * pw(x,y-1);
    }
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",pw(x,y));
}