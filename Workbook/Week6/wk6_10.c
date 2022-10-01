#include <stdio.h>
int bitand(int a, int b){
    int i;
    for(i = a; i <= b; i++){
        if(i == a){
            a = i;
        }
        else{
            a = a & i;
        }
    }
    return a;
}
int main(){
    int l, r;
    printf("Enter two numbers: ");
    scanf("%d %d", &l, &r);
    printf("bitwise and of all numbers in range [%d,%d] is %d", l, r, bitand(l,r));
    return 0;
}


